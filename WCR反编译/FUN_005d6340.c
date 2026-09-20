// FUN_005d6340 @ 005d6340

ulong FUN_005d6340(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_valueForKey__0269d128,&cf_multipleImageViewController);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_20 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  FUN_005d6490();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

