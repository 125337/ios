// chatRoomHasRedDotUnread @ 0035688c

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSnapshot::chatRoomHasRedDotUnread(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

