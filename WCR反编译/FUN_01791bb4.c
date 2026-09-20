// FUN_01791bb4 @ 01791bb4

undefined * FUN_01791bb4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (uVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_substringToIndex__0269d6c0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (1 < uVar3) {
      local_38 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_set_____);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar4;
    if (1 < uVar3) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar4 = local_30;
    _NSSelectorFromString();
    local_24 = 1;
    local_18 = puVar4;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

