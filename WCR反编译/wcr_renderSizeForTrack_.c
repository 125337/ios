// wcr_renderSizeForTrack: @ 00700ae8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

CGSize WCRefineScreenRecordingFrameProcessor::wcr_renderSizeForTrack_
                 (ID param_1,SEL param_2,ID param_3)

{
  CGSize CVar1;
  double in_d0;
  double dVar2;
  double in_d1;
  double dVar3;
  double local_140;
  double local_138;
  undefined1 auStack_c0 [48];
  double local_90;
  double dStack_88;
  double local_58;
  double dStack_50;
  long local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_naturalSize_0269f570);
  local_90 = in_d0;
  dStack_88 = in_d1;
  local_58 = in_d0;
  dStack_50 = in_d1;
  if (local_48 == 0) {
    _memset(auStack_c0,0,0x30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(auStack_c0,local_48,PTR_s_preferredTransform_0269f578);
  }
  FUN_00700d18(auStack_c0);
  dVar2 = ABS(local_90);
  dVar3 = ABS(dStack_88);
  FUN_00700d74();
  if ((dVar2 < 1.0) || (local_30 = dVar2, dStack_28 = dVar3, dVar3 < 1.0)) {
    dStack_28 = dStack_50;
    local_30 = local_58;
  }
  if (local_30 <= 1.0) {
    local_138 = 1.0;
  }
  else {
    local_138 = local_30;
  }
  local_30 = local_138;
  if (dStack_28 <= 1.0) {
    local_140 = 1.0;
  }
  else {
    local_140 = dStack_28;
  }
  dStack_28 = local_140;
  _objc_storeStrong(&local_48,0);
  CVar1.field1_0x8 = dStack_28;
  CVar1.field0_0x0 = local_30;
  return CVar1;
}

