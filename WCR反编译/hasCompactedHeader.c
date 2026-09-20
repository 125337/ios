// hasCompactedHeader @ 00ee7b20

/* Function Stack Size: 0x10 bytes */

bool WCRChatRoomPickerBridge::hasCompactedHeader(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

