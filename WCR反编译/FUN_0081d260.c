// FUN_0081d260 @ 0081d260

ulong FUN_0081d260(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_0081de20();
  uVar2 = DAT_028cd0c8;
  uVar1 = local_18;
  FUN_0081daa8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

