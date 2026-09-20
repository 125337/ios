// FUN_006af7ec @ 006af7ec

void FUN_006af7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_006b21fc();
  if (((uVar1 & 1) == 0) && (DAT_028cbfa0 != (code *)0x0)) {
    (*DAT_028cbfa0)(local_18,local_20,local_28,param_4 & 1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

