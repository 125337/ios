// wcr_frameDurationForTrack: @ 007009e0

/* Function Stack Size: 0x18 bytes */

AnonymousStructure1
WCRefineScreenRecordingFrameProcessor::wcr_frameDurationForTrack_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 in_x8;
  float in_s0;
  AnonymousStructure1 AVar4;
  double local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nominalFrameRate_026a73b0);
  local_30 = (double)in_s0;
  FUN_00224fa4(local_30);
  if (((uVar1 & 1) == 0) || (local_30 < 1.0)) {
    local_30 = 30.0;
  }
  if (60.0 < local_30) {
    local_30 = 60.0;
  }
  _CMTimeMake(in_x8,1,(long)local_30);
  puVar2 = &local_28;
  uVar3 = 0;
  _objc_storeStrong();
  AVar4.field1_0x8 = (int)uVar3;
  AVar4.field2_0xc = (int)((ulong)uVar3 >> 0x20);
  AVar4.field0_0x0 = (long_long)puVar2;
  AVar4.field3_0x10 = param_3;
  return AVar4;
}

