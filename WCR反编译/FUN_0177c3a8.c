// FUN_0177c3a8 @ 0177c3a8

void FUN_0177c3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
     (uVar2 & 1) == 0)) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,local_20);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (((uVar2 & 1) != 0) &&
         ((uVar2 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x38)),
          (uVar2 & 1) != 0 ||
          ((uVar2 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_switch_),
           (uVar2 & 1) != 0 &&
           (uVar2 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_20,PTR_s_hasSuffix__0269d018,*(undefined8 *)(param_1 + 0x40)),
           (uVar2 & 1) != 0)))))) {
        uVar2 = *(ulong *)(param_1 + 0x48);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_20);
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x48),PTR_s_addObject__0269d180,local_20);
        }
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

