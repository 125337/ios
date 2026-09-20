// FUN_01f4cf78 @ 01f4cf78

void FUN_01f4cf78(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  uVar1 = DAT_02323d00;
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  if (lVar2 == 2) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02332e58,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

