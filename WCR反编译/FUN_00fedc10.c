// FUN_00fedc10 @ 00fedc10

byte FUN_00fedc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    bVar1 = false;
    if (local_38 != 0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_inner_026ad590);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar2 == local_38;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    if (bVar1) {
      local_11 = 1;
    }
    else {
      bVar1 = false;
      if (local_28 != 0) {
        lVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_grow_026ad580);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar2 == local_28;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      if (bVar1) {
        local_11 = 1;
      }
      else {
        bVar1 = false;
        if (local_30 != 0) {
          lVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tool_026ad588);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = lVar2 == local_30;
          (*(code *)PTR__objc_release_02578630)(lVar2);
        }
        if (bVar1) {
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

