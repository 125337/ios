// FUN_0158a93c @ 0158a93c

void FUN_0158a93c(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint local_70;
  undefined8 local_50;
  byte local_41;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  if (DAT_028e3878 != (undefined *)0x0) {
    puVar3 = DAT_028e3878;
    local_20 = param_1;
    local_18 = param_1;
    _objc_getAssociatedObject(DAT_028e3878,DAT_028c5df8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 0;
    bVar2 = true;
    uVar1 = puVar3 != (undefined *)0x0;
    local_28 = puVar3;
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
      lVar5 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
      local_41 = 0;
      local_70 = 1;
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = local_28;
        FUN_01528d34();
        _objc_retainAutoreleasedReturnValue();
        local_41 = 1;
        local_40 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8);
        local_70 = (uint)uVar6 ^ 1;
      }
      if ((local_41 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      if ((local_70 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        FUN_01539238();
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar6;
        FUN_0158ab80(DAT_028e3878,uVar6);
        _objc_storeStrong(&local_50,0);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

