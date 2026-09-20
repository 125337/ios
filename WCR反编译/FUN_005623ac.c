// FUN_005623ac @ 005623ac

/* WARNING: Type propagation algorithm not settling */

void FUN_005623ac(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_a8;
  bool local_61;
  ulong local_60;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30 [3];
  ulong local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar2 = DAT_028cb450;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = DAT_028cb458;
  local_30[0] = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = DAT_028cb460;
  local_38 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_18;
  local_40 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  if (local_30[0] == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
    local_61 = (uVar1 & 1) == 0;
    if (local_61) {
      local_a8 = 0;
    }
    else {
      local_a8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_a8;
    }
    local_61 = !local_61;
    _objc_storeStrong(local_30,local_a8);
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (local_30[0] == 0) {
      uVar1 = local_48;
      FUN_00565494();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30[0];
      local_30[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  if ((local_38 == 0) ||
     (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_valueForKey__0269d128,&cf_curLongPressedComment);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      uVar1 = local_38;
      FUN_00566680();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  FUN_0056ea68(local_18,local_30[0],local_38,local_40);
  FUN_0056f010();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

