// FUN_0157ee40 @ 0157ee40

undefined4 FUN_0157ee40(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_createtime_026a46f0),
     (uVar1 & 1) == 0)) {
    local_14 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_methodSignatureForSelector__0269e190,PTR_s_createtime_026a46f0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_14 = 0;
      local_24 = 1;
    }
    else {
      local_34 = 0;
      puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setSelector__0269e1b0,PTR_s_createtime_026a46f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTarget__0269e1a8,local_20);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_invoke_0269e1b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getReturnValue__0269e1c0,&local_34);
      local_14 = local_34;
      local_24 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

