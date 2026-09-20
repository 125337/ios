// FUN_005306f4 @ 005306f4

void FUN_005306f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40 [3];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  FUN_00530230();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_20;
  local_28 = puVar1;
  FUN_005303a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_40[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_18 = local_40[0];
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    puVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_40[0]);
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar1;
        goto LAB_005308c8;
      }
    }
    puVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
LAB_005308c8:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

