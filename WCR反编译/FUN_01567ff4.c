// FUN_01567ff4 @ 01567ff4

void FUN_01567ff4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar4 = local_20;
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_20 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar4 == puVar3;
    local_31 = uVar1;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  puVar4 = local_20;
  if (bVar2) {
    local_18 = (undefined *)0x0;
    local_38 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_20;
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
      local_38 = 1;
    }
    else {
      puVar4 = local_20;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        local_18 = (undefined *)0x0;
      }
      else {
        puVar4 = local_40;
        FUN_0155771c();
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar4;
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

