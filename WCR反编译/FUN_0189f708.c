// FUN_0189f708 @ 0189f708

void FUN_0189f708(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar1 <= param_3) {
    local_78 = local_20;
  }
  else {
    local_78 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if (uVar1 > param_3) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addBtnTitle_target_sel__0269d278,local_40,
             *(undefined8 *)(param_1 + 0x30),PTR_s_keepRoomPicked__026b74b8);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  return;
}

