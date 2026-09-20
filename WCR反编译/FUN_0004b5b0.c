// FUN_0004b5b0 @ 0004b5b0

void FUN_0004b5b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_applicationState_0269d6d8);
  DAT_028c7b78 = puVar1 == (undefined *)0x0;
  if ((bool)DAT_028c7b78) {
    FUN_0004b2ec();
  }
  _objc_storeStrong(&local_28,0);
  return;
}

