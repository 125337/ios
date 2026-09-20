// FUN_002cdbd0 @ 002cdbd0

void FUN_002cdbd0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *local_70;
  undefined *local_48;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    bVar1 = local_20 == (undefined *)0x0;
    if (bVar1) {
      local_70 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_70;
    }
    else {
      local_70 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_70;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888,local_30);
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

