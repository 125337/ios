// FUN_00207924 @ 00207924

undefined8
FUN_00207924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_6);
  FUN_00208ca0(local_68,local_70);
  FUN_00209028(local_70,param_7 & 1);
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  return local_40;
}

