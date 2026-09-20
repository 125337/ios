// FUN_01acc30c @ 01acc30c

void FUN_01acc30c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01a9eff8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
    local_18 = puVar2;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      _objc_storeStrong(&local_38,local_28);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    FUN_01accb54(puVar2,local_28);
    FUN_01accb54(local_40,local_38);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__3x);
    uVar1 = local_38;
    puVar2 = local_40;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar3 - 3);
      _objc_retainAutoreleasedReturnValue();
      FUN_01accb54(puVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_2c = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

