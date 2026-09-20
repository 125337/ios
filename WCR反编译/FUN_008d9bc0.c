// FUN_008d9bc0 @ 008d9bc0

void FUN_008d9bc0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_38;
  undefined *local_28;
  undefined *puVar5;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar4 = (uint)puVar5;
  FUN_008cec60();
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_T_uSR);
    local_38 = 1;
  }
  else {
    puVar5 = local_28;
    FUN_008d80cc();
    _objc_retainAutoreleasedReturnValue();
    local_48 = (undefined *)0x0;
    local_58 = 0;
    local_40 = puVar5;
    FUN_008da2c4(puVar5,&local_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_48,local_58);
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    if ((puVar5 == (undefined *)0x0) &&
       (puVar5 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       puVar5 == (undefined *)0x0)) {
      puVar6 = local_40;
      FUN_008da7a4();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_48;
      local_48 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0
                   ,local_48,1,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_50;
        local_50 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        if (puVar5 == (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                     local_48);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_50;
          local_50 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
    }
    puVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((puVar5 == (undefined *)0x0) &&
       (puVar5 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       puVar5 == (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSHQp);
      local_38 = 1;
    }
    else {
      puVar5 = local_28;
      local_60 = (undefined *)0x0;
      puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      if (((ulong)puVar5 & 1) != 0) {
        puVar6 = local_28;
        FUN_008cb338();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_60;
        local_60 = puVar6;
        (*(code *)PTR__objc_release_02578630)();
      }
      if (local_60 == (undefined *)0x0) {
        FUN_008cb618();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_60;
        local_60 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      bVar1 = local_60 != (undefined *)0x0;
      if (bVar1) {
        puVar5 = local_40;
        FUN_008dae00(local_40,local_48);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_48;
        local_68 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        puVar6 = local_50;
        local_70 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = local_60;
        puVar2 = local_68;
        puVar7 = local_70;
        puVar5 = PTR_WCRefineVoicePackManagerViewController_026cea28;
        local_78 = puVar6;
        local_a8 = PTR___NSConcreteStackBlock_02578660;
        local_a0 = 0xc2000000;
        local_9c = 0;
        local_98 = FUN_008db144;
        local_90 = &DAT_02580d30;
        (*(code *)PTR__objc_retain_02578638)();
        puVar6 = local_78;
        local_88 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_presentVoiceIncludeFlowFrom_defa_026a9d78,puVar3,puVar2,&local_a8);
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      }
      local_38 = (uint)!bVar1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

