// finished @ 01bb5b6c

/* Function Stack Size: 0x10 bytes */

bool WCRMessageSyncRoomMemberPickerBridge::finished(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

