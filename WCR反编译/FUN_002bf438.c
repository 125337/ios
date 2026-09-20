// FUN_002bf438 @ 002bf438

void FUN_002bf438(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c9822);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pause_0269f2d8);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c9823);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperlayer_026ca7f8);
  _objc_setAssociatedObject(local_18,&DAT_028c9822,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028c9823,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028c9824,0,3);
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

