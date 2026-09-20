// FUN_001bc27c @ 001bc27c

void FUN_001bc27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 byte param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  byte local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  local_30 = param_5;
  local_28 = param_4;
  local_20 = param_1;
  uStack_18 = param_2;
  _objc_storeStrong(&local_38,param_6);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_7);
  uVar1 = local_28;
  local_4d = param_9;
  local_4c = param_8;
  local_48 = param_3;
  (*DAT_028c8b38)(local_20,uStack_18,param_3,local_28,local_30,local_38,local_40,param_8,param_9 & 1
                 );
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_58 = uVar1;
  FUN_001eb484(local_20,uStack_18,local_38,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

