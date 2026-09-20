// FUN_003fccec @ 003fccec

void FUN_003fccec(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ca648)(param_1,param_2,param_3 & 1);
  FUN_003fe19c();
  if ((((param_1 & 1) == 0) && (FUN_00400c3c(), (param_1 & 1) != 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onUseIPadOnly_026a35b0),
     (uVar1 & 1) != 0)) {
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,PTR_s_onUseIPadOnly_026a35b0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
    uVar1 = local_18;
    puVar4 = PTR_s_onUseIPadOnly_026a35b0;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,puVar4,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

