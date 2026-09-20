// FUN_007b5574 @ 007b5574

void FUN_007b5574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _objc_setAssociatedObject(local_18,DAT_026f4670,0,1);
  uVar1 = local_18;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  FUN_007b64cc(0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_007b5980(local_18);
  _objc_setAssociatedObject(local_18,DAT_026f4658,0,1);
  _objc_setAssociatedObject(local_18,DAT_026f4668,0,1);
  _objc_storeStrong(&local_18,0);
  return;
}

