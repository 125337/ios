// FUN_0051af84 @ 0051af84

void FUN_0051af84(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_itemID_026a48b0);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_itemID_026a48b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_28 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar2 & 1) == 0) ||
       (uVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
       uVar2 = local_28, uVar4 == 0)) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      bVar1 = true;
    }
    _objc_storeStrong(&local_28,0);
    if (bVar1) goto LAB_0051b0c4;
  }
  uVar2 = local_20;
  FUN_0051a058();
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar2;
LAB_0051b0c4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

