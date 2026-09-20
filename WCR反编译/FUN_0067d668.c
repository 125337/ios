// FUN_0067d668 @ 0067d668

void FUN_0067d668(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *local_50;
  long local_38;
  undefined *local_30;
  long local_28;
  byte local_19;
  undefined *local_18;
  
  local_28 = 0;
  local_19 = param_1;
  _objc_storeStrong(&local_28);
  if ((local_19 & 1) == 0) {
    local_50 = &DAT_0257e8a0;
  }
  else {
    local_50 = &DAT_0257e898;
  }
  puVar1 = (undefined *)*local_50;
  (*(code *)PTR__objc_retain_02578638)();
  lVar2 = local_28;
  local_30 = puVar1;
  FUN_0067da68();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  puVar1 = local_30;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

