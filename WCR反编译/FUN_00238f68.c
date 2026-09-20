// FUN_00238f68 @ 00238f68

void FUN_00238f68(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_28 == (undefined *)0x0) {
    local_38 = 1;
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_002392dc();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_40 == (undefined *)0x0) {
      local_38 = 1;
    }
    else {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_navigationItem)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_valueForKey__0269d128,&cf_titleView);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layoutIfNeeded_026ca790);
        }
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

