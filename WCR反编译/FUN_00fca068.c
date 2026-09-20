// FUN_00fca068 @ 00fca068

void FUN_00fca068(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long local_40;
  undefined8 local_38;
  byte local_29;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  local_29 = param_3;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_38 = uVar1;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_OS);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
      goto LAB_00fca194;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
LAB_00fca194:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

