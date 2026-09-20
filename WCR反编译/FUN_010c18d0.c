// FUN_010c18d0 @ 010c18d0

undefined4 FUN_010c18d0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_38;
  ulong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    if ((local_20 == 0) ||
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_createtime_026a46f0),
       (uVar2 & 1) == 0)) {
      local_14 = 0;
      local_24 = 1;
    }
    else {
      local_28 = 0;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_methodSignatureForSelector__0269e190,PTR_s_createtime_026a46f0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      if (uVar2 == 0) {
        local_14 = 0;
        local_24 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_38 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_setSelector__0269e1b0,PTR_s_createtime_026a46f0);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTarget__0269e1a8,local_20);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_invoke_0269e1b8);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getReturnValue__0269e1c0,&local_28);
        local_14 = local_28;
        local_24 = 1;
        _objc_storeStrong(&local_38,0);
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_createtime);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_14 = (undefined4)uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

