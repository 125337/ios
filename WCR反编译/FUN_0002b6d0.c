// FUN_0002b6d0 @ 0002b6d0

void FUN_0002b6d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long *local_78;
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__emo__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
      goto LAB_0002b858;
    }
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_78 = &local_20;
  }
  else {
    local_78 = &local_28;
  }
  puVar2 = (undefined *)*local_78;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = puVar2;
LAB_0002b858:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

