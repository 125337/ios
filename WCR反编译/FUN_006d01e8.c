// FUN_006d01e8 @ 006d01e8

void FUN_006d01e8(double param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  ulong local_40 [3];
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_2;
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_redEnvelopTotalEarnedAmount_026a69c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1 + *(double *)(param_2 + 0x38),puVar1,
               PTR_s_setRedEnvelopTotalEarnedAmount__026a69d0);
    _objc_storeStrong(&local_28,0);
  }
  uVar2 = param_2 + 0x30;
  _objc_loadWeakRetained();
  local_40[0] = uVar2;
  if (uVar2 == 0) {
    local_44 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    local_50 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = PTR_s_wcrefine_sendNotification_respon_026a6958;
    uVar2 = local_40[0];
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrefine_sendNotification_respon_026a6958);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_methodSignatureForSelector__0269e190,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      if (uVar2 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTarget__0269e1a8,local_40[0]);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSelector__0269e1b0,local_60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_50,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_58,3);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_invoke_0269e1b8);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(local_40,0);
  return;
}

