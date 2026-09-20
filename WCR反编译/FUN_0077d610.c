// FUN_0077d610 @ 0077d610

byte FUN_0077d610(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte local_35 [13];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  _objc_getAssociatedObject(local_18,FUN_0077d610);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_getValue__026a0480,local_35);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return local_35[0] & 1;
}

