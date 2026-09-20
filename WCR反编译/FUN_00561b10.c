// FUN_00561b10 @ 00561b10

/* WARNING: Type propagation algorithm not settling */

void FUN_00561b10(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b0;
  bool local_61;
  ulong local_60;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  long local_30 [3];
  ulong local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  lVar1 = DAT_028cb450;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = DAT_028cb458;
  local_30[0] = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = DAT_028cb460;
  local_38 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_18;
  local_40 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar2;
  if (local_38 == 0) {
    FUN_0056e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (local_30[0] == 0) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
    local_61 = (uVar2 & 1) == 0;
    if (local_61) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b0;
    }
    local_61 = !local_61;
    _objc_storeStrong(local_30,local_b0);
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
  }
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    uVar3 = local_38;
    FUN_00566680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
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

