// FUN_0153b4fc @ 0153b4fc

void FUN_0153b4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 == 0) || (local_28 == 0)) {
    local_2c = 1;
  }
  else {
    local_38 = 0;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      FUN_0152ecd8(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_38 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    if (local_38 == 0) {
      lVar2 = local_18;
      FUN_01539238();
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar2;
      if ((lVar2 != 0) &&
         (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
         lVar2 != 0)) {
        FUN_0152ecd8(lVar2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      (**(code **)(local_28 + 0x10))(local_28,local_40);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    else {
      FUN_0157e460(local_38);
      (**(code **)(local_28 + 0x10))(local_28,local_38);
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

