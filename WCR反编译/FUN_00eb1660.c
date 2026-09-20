// FUN_00eb1660 @ 00eb1660

ulong FUN_00eb1660(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
  uVar3 = local_20;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_longLongValue_0269d5e0);
      local_18 = uVar3;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unsignedLongLongValue_0269d6b8);
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

