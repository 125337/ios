// FUN_00675450 @ 00675450

void FUN_00675450(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_18 != 0) && (local_20 != 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setTextColor__026caa98),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTextColor__026caa98,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

