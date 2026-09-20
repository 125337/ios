// FUN_0072cb60 @ 0072cb60

void FUN_0072cb60(ulong param_1,undefined8 param_2)

{
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = param_1;
  FUN_0072d8ac();
  if ((param_1 & 1) != 0) {
    _objc_msgSend(local_28,PTR_s_setM_bForbidden__026a7ab0,1);
  }
  (*DAT_028cc408)(local_18,local_20);
  _objc_storeStrong(&local_28,0);
  return;
}

