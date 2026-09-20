// FUN_00200070 @ 00200070

void FUN_00200070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  uVar1 = local_38;
  FUN_00200b00(local_30,uStack_28,local_20,uStack_18,local_38,local_40,param_7 & 1,&DAT_028c9171,
               &DAT_028c9173,&DAT_028c9174,&DAT_028c9172,&DAT_028c9175);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

