// FUN_009c3b08 @ 009c3b08

void FUN_009c3b08(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  while( true ) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__);
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      bVar1 = 1 < uVar2;
    }
    uVar2 = local_20;
    if (!bVar1) break;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar3 - 1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

