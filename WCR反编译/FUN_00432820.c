// FUN_00432820 @ 00432820

void FUN_00432820(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_120;
  cfstringStruct *local_f8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_80;
  byte local_7f;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_3d;
  byte local_29;
  cfstringStruct *local_28;
  
  _objc_autoreleasePoolPush();
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_layoutSizeGlobalEnabled_026a3878);
  local_29 = (byte)pcVar2;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutSizeChatEnabled_026a3880);
  local_3d = (byte)pcVar2;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutSizeGlobalValue_026a3888);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_f8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_f8;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutSizeChatValue_026a3890);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_120 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_120 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_120;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_61 = 0;
  if (((local_29 & 1) == 0) ||
     (pcVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_150 = &cf___;
  }
  else {
    pcVar3 = local_48;
    _WCRLayoutSizeSanitizedValueString(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_148 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_148 = &cf___;
    }
    local_150 = local_148;
    local_60 = pcVar3;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_150;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  local_79 = 0;
  if (((local_3d & 1) == 0) ||
     (pcVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_180 = &cf___;
  }
  else {
    pcVar3 = local_50;
    _WCRLayoutSizeSanitizedValueString(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_178 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_178 = &cf___;
    }
    local_180 = local_178;
    local_78 = pcVar3;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_180;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar3 = local_48;
  uVar1 = DAT_028ca828;
  local_c0 = PTR___NSConcreteGlobalBlock_02578658;
  local_b8 = 0xd0800000;
  local_b4 = 0;
  local_b0 = FUN_00432fd4;
  local_a8 = &DAT_0257d3a8;
  local_80 = local_29 & 1;
  local_7f = local_3d & 1;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_50;
  local_a0 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_58;
  local_98 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_70;
  local_90 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = pcVar2;
  _dispatch_sync(uVar1,&local_c0);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleasePoolPop(param_1);
  return;
}

