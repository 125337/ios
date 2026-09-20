// FUN_016bd3d8 @ 016bd3d8

ulong FUN_016bd3d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_016bd4f8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_016bdfb0();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

