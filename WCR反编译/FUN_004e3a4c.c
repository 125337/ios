// FUN_004e3a4c @ 004e3a4c

byte FUN_004e3a4c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  undefined *local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_004e2d9c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      uVar2 = local_30;
      FUN_004e6ea4();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      if (uVar2 == 0) {
        local_21 = 0;
        local_34 = 1;
      }
      else {
        puVar3 = PTR_WCRefineMessageDoubleTapReusePayload_026ce6f0;
        _objc_alloc_init();
        local_68 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setReEditStringContent__026a4258,local_58[0]);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setCanReEdit__026a4268,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setReEditReferMsgSvrId__026a4278,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setReEditAtUserList__026a4288,&cf___);
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,
                   PTR_s_clickEditRevokeContent__026a4368);
        puVar3 = PTR___dispatch_main_q_02578680;
        if ((uVar2 & 1) == 0) {
          local_21 = 0;
          local_34 = 1;
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_60;
          local_98 = PTR___NSConcreteStackBlock_02578660;
          local_90 = 0xc2000000;
          local_8c = 0;
          local_88 = FUN_004e7034;
          local_80 = &DAT_02578e60;
          (*(code *)PTR__objc_retain_02578638)();
          puVar1 = local_68;
          local_78 = uVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = puVar1;
          _dispatch_async(puVar3,&local_98);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_21 = 1;
          local_34 = 1;
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

