// FUN_003cf240 @ 003cf240

void FUN_003cf240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  if ((DAT_028ca2c8 == (code *)0x0) || (DAT_028ca2c8 == FUN_003ce8dc)) {
    local_50 = local_18;
    uVar1 = local_18;
    _object_getClass();
    _class_getSuperclass();
    local_48 = uVar1;
    _objc_msgSendSuper(&local_50,local_20,local_28,local_30,local_38);
    local_3c = 0;
  }
  else {
    (*DAT_028ca2c8)(local_18,local_20,local_28,local_30,local_38);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

