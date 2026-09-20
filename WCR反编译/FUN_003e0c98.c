// FUN_003e0c98 @ 003e0c98

void FUN_003e0c98(undefined *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a8;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48 [3];
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_003e4738();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == (undefined *)0x0) {
    puVar3 = local_20;
    (*DAT_028ca380)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_UUIDString_026a3380);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_003e49dc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_30 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_48,0);
  }
  local_a8 = PTR__OBJC_CLASS___NSUUID_026ce668;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_initWithUUIDString__026a3388,local_30);
  bVar1 = local_a8 == (undefined *)0x0;
  local_50 = local_a8;
  if (bVar1) {
    local_58 = local_20;
    (*DAT_028ca380)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

