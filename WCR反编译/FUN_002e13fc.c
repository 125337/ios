// FUN_002e13fc @ 002e13fc

void FUN_002e13fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_a8;
  undefined8 **local_60;
  undefined8 **local_50;
  undefined8 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  pppuVar2 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar2,param_2);
  local_30 = param_1;
  local_28 = param_3;
  FUN_002e4604(param_1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pppuVar2;
  if (pppuVar2 == (undefined8 ***)0x0) {
    if (DAT_028c98b8 == (code *)0x0) {
      bVar1 = DAT_028c9898 == (code *)0x0;
      local_a8 = local_20;
      if (bVar1) {
        (*DAT_028c9880)(local_30,local_20,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_a8;
      }
      else {
        (*DAT_028c9898)(local_30,*(undefined8 *)PTR__UIFontWeightMedium_02578150,local_20,
                        PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_a8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
    }
    else {
      pppuVar2 = (undefined8 ***)local_20;
      (*DAT_028c98b8)(local_30,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pppuVar2;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pppuVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

