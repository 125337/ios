// FUN_00077868 @ 00077868

void FUN_00077868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_1;
  uStack_20 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_respondsToSelector__026ca818,
               PTR_s_genScaledImage_size__0269e0f0);
    local_18 = local_30;
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,uStack_20,PTR__OBJC_CLASS___UIImage_026cdfd0,
                 PTR_s_genScaledImage_size__0269e0f0,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

