// FUN_000accf0 @ 000accf0

void FUN_000accf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if (param_3 == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (param_3 == 1) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (param_3 == 2) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    if (param_3 != 3) {
      local_50 = 1;
      goto LAB_000ad318;
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar3 = local_40;
  FUN_000b3ecc();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    local_50 = 1;
  }
  else {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_ActionMenu);
    if ((((ulong)puVar3 & 1) == 0) &&
       (puVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ActionList), ((ulong)puVar3 & 1) == 0
       )) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineClearUnread);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcrefine_executeAction__0269e478,local_40);
        local_50 = 0;
      }
      else {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_WCRefineClearUnreadMsgHook;
        local_60 = puVar3;
        _NSClassFromString();
        local_68 = pcVar4;
        if (pcVar4 != (cfstringStruct *)0x0) {
          pcVar5 = &cf_WCRefine_doClearUnreadMsgWithToast_;
          _NSSelectorFromString();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,pcVar5);
          puVar3 = PTR___dispatch_main_q_02578680;
          if (((ulong)pcVar4 & 1) != 0) {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_60;
            local_98 = PTR___NSConcreteStackBlock_02578660;
            local_90 = 0xc2000000;
            local_8c = 0;
            local_88 = FUN_000bc468;
            local_80 = &DAT_02579ee0;
            local_70 = local_68;
            (*(code *)PTR__objc_retain_02578638)();
            local_78 = puVar1;
            _dispatch_async(puVar3,&local_98);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_78,0);
          }
        }
        local_50 = 1;
        _objc_storeStrong(&local_60,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrefine_showActionMenuForButton_0269e490,local_38);
      local_50 = 1;
    }
  }
  _objc_storeStrong(&local_58,0);
LAB_000ad318:
  _objc_storeStrong(&local_40,0);
  return;
}

