// FUN_00519600 @ 00519600

void FUN_00519600(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_18 = 0;
    local_2c = 1;
    goto LAB_00519a38;
  }
  uVar1 = local_28;
  FUN_0051a180();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getDataItemsFromCache__026a4880),
     (uVar1 & 1) == 0)) {
LAB_005197a0:
    local_48 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_feedIds_026a4868);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_feedIds_026a4868);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_50 = 0;
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_allObjects_0269d228);
    uVar1 = local_48;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        _objc_storeStrong(&local_50,local_48);
      }
    }
    else {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allObjects_0269d228);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if ((uVar1 == 0) ||
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,
                  PTR_s_getMicroMerchantDataItemsByIds__026a4888), (uVar1 & 1) == 0)) {
LAB_005199f8:
      local_18 = 0;
      local_2c = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_getMicroMerchantDataItemsByIds__026a4888,local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_58 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar1 & 1) == 0) ||
         (uVar3 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
         uVar1 = local_58, uVar3 == 0)) {
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_2c = 1;
      }
      _objc_storeStrong(&local_58,0);
      if (local_2c == 0) goto LAB_005199f8;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getDataItemsFromCache__026a4880,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
       uVar1 = local_40, uVar3 == 0)) {
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_40,0);
    if (local_2c == 0) goto LAB_005197a0;
  }
  _objc_storeStrong(&local_38,0);
LAB_00519a38:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

