// FUN_00184cb4 @ 00184cb4

void FUN_00184cb4(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_40 [3];
  undefined8 local_28;
  byte local_19;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_19 = param_2;
  FUN_00187cc4();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = &cf_avatar_dark_png;
  if ((local_19 & 1) == 0) {
    local_40[0] = &cf_avatar_png;
  }
  local_28 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_WCRefine_ContactsPack_sections______);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

