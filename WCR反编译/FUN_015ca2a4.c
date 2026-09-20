// FUN_015ca2a4 @ 015ca2a4

void FUN_015ca2a4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__2x);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__3x),
     (uVar1 & 1) != 0)) {
    uVar1 = local_20;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar2 - 3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_20 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

