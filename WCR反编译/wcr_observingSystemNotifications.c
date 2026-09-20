// wcr_observingSystemNotifications @ 00709244

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_observingSystemNotifications(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xd) & 1;
}

