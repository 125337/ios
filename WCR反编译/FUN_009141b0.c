// FUN_009141b0 @ 009141b0

void FUN_009141b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_currentFilteredLogsForExport_026aa208);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if ((lVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
    local_3c = 1;
  }
  else {
    local_48 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_currentExportFileName_026aa210);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    local_60 = local_48;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_writeLogs_toTemporaryFileNamed_e_026aa218,local_38,uVar2,&local_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_48,local_60);
    uVar2 = local_50;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineLogExportItemSource_026cea68;
    local_68 = uVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar5 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
    local_70 = puVar4;
    _objc_alloc();
    local_20 = local_70;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_initWithActivityItems_applicatio_026aa228,puVar4,0);
    local_78 = puVar5;
    (*(code *)PTR__objc_release_02578630)();
    FUN_00914558();
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_presentViewController_animated_c_0269d2b0,
               local_78,1);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

