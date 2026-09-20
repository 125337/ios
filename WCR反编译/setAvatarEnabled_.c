// setAvatarEnabled: @ 01cb0288

/* Function Stack Size: 0x14 bytes */

void WCRefinePluginTopViewController::setAvatarEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_avatarEnabled) = (byte)param_3 & 1;
  return;
}

