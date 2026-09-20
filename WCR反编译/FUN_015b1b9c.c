// FUN_015b1b9c @ 015b1b9c

void FUN_015b1b9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  byte local_114;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  byte local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar6 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
  if (lVar6 == lVar1) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isUIAccessActive_026b0c08);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_wcr_computeFolderStatsSyncForPat_026b0bf8,
                 *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_count)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_60;
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_70 = uVar3;
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar6 = *(long *)(param_1 + 0x30);
        lVar1 = *(long *)(param_1 + 0x38);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
        local_114 = 0;
        if (lVar6 == lVar1) {
          uVar3 = *(undefined8 *)(param_1 + 0x38);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isUIAccessActive_026b0c08);
          local_114 = (byte)uVar3;
        }
        puVar5 = PTR___dispatch_main_q_02578680;
        local_71 = local_114 & 1;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_015b1f6c;
        local_98 = &DAT_025870b8;
        local_78 = local_71 & 1;
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_68;
        local_80 = local_70;
        local_90 = uVar3;
        _dispatch_async(puVar5,&local_b0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_60,0);
      return;
    }
  }
  puVar5 = PTR___dispatch_main_q_02578680;
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_015b1f30;
    local_40 = &DAT_025814c8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar3;
    _dispatch_async(puVar5,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

