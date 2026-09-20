// FUN_008dcbfc @ 008dcbfc

void FUN_008dcbfc(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long lVar4;
  long lVar5;
  dispatch_queue_t pdVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  undefined *puVar2;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = (uint)puVar2;
  FUN_008cec60();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_T_uSR);
    local_38 = 1;
  }
  else {
    lVar3 = local_28;
    FUN_008d80cc();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    FUN_008da7a4();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN__gN__b);
      local_38 = 1;
    }
    else {
      lVar3 = local_40;
      FUN_008d90b4();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
        lVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_58;
        local_58 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf__eQ_N_);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      pdVar6 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_48;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_008dd0b0;
      local_80 = &DAT_02578f80;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_58;
      local_78 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_60;
      local_70 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = puVar2;
      _dispatch_async(pdVar6,&local_98);
      (*(code *)PTR__objc_release_02578630)(pdVar6);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

