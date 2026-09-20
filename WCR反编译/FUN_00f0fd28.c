// FUN_00f0fd28 @ 00f0fd28

void FUN_00f0fd28(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
             *(undefined8 *)(param_1 + 0x20),local_19 & 1,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

