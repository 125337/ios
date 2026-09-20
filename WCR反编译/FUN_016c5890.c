// FUN_016c5890 @ 016c5890

void FUN_016c5890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3f01);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_016c59b8();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar1;
  _objc_setAssociatedObject(local_18,&DAT_028e3f01,0,1);
  FUN_016c4340(local_18,local_38[0]);
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

