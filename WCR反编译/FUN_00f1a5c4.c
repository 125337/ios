// FUN_00f1a5c4 @ 00f1a5c4

void FUN_00f1a5c4(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = 2;
  if ((param_2 & 1) == 0) {
    uVar1 = 1;
  }
  FUN_00f19e90(local_18,PTR_s_setM_uiIsSenderStatus__026abd58,uVar1);
  _objc_storeStrong(&local_18,0);
  return;
}

