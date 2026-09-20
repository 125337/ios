// FUN_0066c2ac @ 0066c2ac

void FUN_0066c2ac(undefined4 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (((local_18 != 0) && (param_3 != 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,param_3),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,param_3);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

