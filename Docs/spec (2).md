# vito-uart Specification

This module implements the UART 8N1 specification (8 data bits, no parity bit, 1 stop bit) with a 3-byte TX and RX queue, and variable baud rate.

## Register map

**0x00 - RX State**

|Reserved|Error|Data Available|
|--------|-----|--------------|
|[31:2]  |[1]  |[0]           |

**0x04 - RX Data**

|N-bytes in rFIFO|rFIFO2|rFIFO1|rFIFO0|
|----------------|------|------|------|
|[31:24]         |[23:16]|[15:8]|[7:0]|

> Reads from the RX Data register will clear the N-bytes value - the elements are "popped" from the FIFO.
>
> If the UART module receives more than 3 bytes before the FIFO is cleared by a read, the newest bytes will overwrite older bytes.

**0x08 - TX State**

|Clock Divider|Reserved|Done|
|-------------|--------|----|
|[31:16]      |[15:1]  |[0] |

> To set the UART's baud rate, set the *Clock Divider* value to the device's clock frequency / target baud rate.

**0x0C - TX Data**

|N-bytes in wFIFO|wFIFO2|wFIFO1|wFIFO0|
|----------------|------|------|------|
|[31:24]         |[23:16]|[15:8]|[7:0]|

> A write to TX Data is treated as a send request itself.
>
> For the number of bytes in the wFIFO, 0 is treated the same as 1 and >3 is treated the same as 3.
