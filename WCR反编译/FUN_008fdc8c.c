// FUN_008fdc8c @ 008fdc8c

void FUN_008fdc8c(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  dispatch_queue_t pdVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ulong local_70;
  byte local_68;
  uint local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &cf___;
  local_49 = 0;
  local_58 = local_40[0];
  local_60 = &cf___;
  uVar4 = local_28;
  FUN_008f092c(local_28,&local_58,&local_60,&local_49);
  _objc_storeStrong(local_40,local_58);
  _objc_storeStrong(&local_48,local_60);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    pdVar5 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40[0];
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_008fdf34;
    local_88 = &DAT_0257a0f0;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_48;
    local_80 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_28;
    local_78 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar4;
    local_68 = local_49 & 1;
    _dispatch_async(pdVar5,&local_a0);
    (*(code *)PTR__objc_release_02578630)(pdVar5);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_ecleN);
  }
  local_64 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

