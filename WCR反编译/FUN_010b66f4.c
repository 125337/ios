// FUN_010b66f4 @ 010b66f4

void FUN_010b66f4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  ulong local_50;
  ulong local_38;
  undefined4 local_30;
  bool local_29;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    if ((local_20 == 0) ||
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_tid_026a15d8), (uVar3 & 1) == 0)
       ) {
      local_18 = 0;
      local_30 = 1;
    }
    else {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_performSelector__026ca7b8,PTR_s_tid_026a15d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_38 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_68 = 0;
      }
      else {
        local_68 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_68;
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_tid);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_29 = false;
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      local_50 = 0;
    }
    else {
      local_50 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_tid);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_50;
    }
    local_29 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    if ((local_29 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

