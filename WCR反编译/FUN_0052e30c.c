// FUN_0052e30c @ 0052e30c

undefined4 FUN_0052e30c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  undefined4 local_30;
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
    local_30 = 1;
  }
  else {
    local_34 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_methodSignatureForSelector__0269e190,PTR_s_createtime_026a46f0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_14 = 0;
      local_30 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setSelector__0269e1b0,PTR_s_createtime_026a46f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTarget__0269e1a8,local_20);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_invoke_0269e1b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getReturnValue__0269e1c0,&local_34);
      local_14 = local_34;
      local_30 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

