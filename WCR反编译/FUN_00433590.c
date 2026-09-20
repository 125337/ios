// FUN_00433590 @ 00433590

undefined8 FUN_00433590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  byte *local_40;
  byte *local_38;
  byte local_2a;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_40 = &local_29;
  local_29 = 0;
  local_38 = &local_2a;
  local_2a = 0;
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_00433dcc;
  local_48 = &DAT_0257bbc8;
  local_28 = param_2;
  _dispatch_sync(DAT_028ca828,&local_60);
  if (((local_29 & 1) == 0) && ((local_2a & 1) == 0)) {
    uVar1 = local_20;
    (*DAT_028ca870)(local_20,local_28);
    local_18 = uVar1;
  }
  else {
    local_18 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

