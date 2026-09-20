// FUN_006af8bc @ 006af8bc

void FUN_006af8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  ulong uVar1;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  FUN_006b21fc();
  if (((uVar1 & 1) == 0) && (DAT_028cbfa8 != (code *)0x0)) {
    (*DAT_028cbfa8)(local_18,local_20,local_28,local_30,param_5 & 1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

