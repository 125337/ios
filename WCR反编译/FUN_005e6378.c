// FUN_005e6378 @ 005e6378

void FUN_005e6378(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_70;
  ulong local_48;
  ulong local_40;
  ulong local_38 [3];
  undefined *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_70 = 0;
  }
  else {
    local_70 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = local_70;
  FUN_005e3484();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38[0];
  local_40 = local_70;
  FUN_005e2a48();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38[0];
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
  if (uVar4 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_38[0]);
  }
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar3 != 0) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38[0]);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_40);
    }
  }
  uVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (uVar3 != 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_40);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_38[0]);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_48);
      }
    }
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

