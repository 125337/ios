// FUN_0156ad1c @ 0156ad1c

void FUN_0156ad1c(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_78;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_38;
  undefined1 local_31;
  undefined *local_30;
  byte local_21;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c5df8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_18;
  local_20 = puVar3;
  _objc_getAssociatedObject(local_18,DAT_028c5e10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_20;
  local_21 = (byte)puVar5;
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_20 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == puVar4;
    local_31 = uVar1;
    local_30 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    local_38 = 1;
  }
  else {
    puVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_028c5fa0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_18;
    local_48 = puVar3;
    _objc_getAssociatedObject(local_18,DAT_028c5e78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = false;
    local_78 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      local_50 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = 0;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        local_78 = 0;
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_48);
          local_78 = (uint)puVar3;
        }
      }
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    bVar2 = (local_78 & 1) == 0;
    if (bVar2) {
      FUN_0154f2fc(local_18,local_20,local_21 & 1);
    }
    local_38 = (uint)!bVar2;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

