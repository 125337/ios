// migrateMarkedFolderWithMode: @ 0199c57c

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::migrateMarkedFolderWithMode_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  dispatch_queue_t pdVar6;
  uint local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  long_long local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  ID local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_migrationSource_026ba340);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_48;
  local_50 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  local_59 = 0;
  local_cc = 1;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_cc = (uint)puVar1 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_cc & 1) == 0) {
    IVar2 = local_50;
    FUN_0197ca78(local_50,local_48);
    if ((IVar2 & 1) == 0) {
      puVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringByStandardizingPath_026cab38);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar2 = local_50;
      if (((ulong)puVar4 & 1) == 0) {
        puVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (local_38 == 2) {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_uniqueDestinationForPath__026ba378,local_68);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_68;
          local_68 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancelActiveFileOperation_026ba2e0);
        puVar1 = PTR_WCRFileDirSizeCancelToken_026cf1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRFileDirSizeCancelToken_026cf1e0,PTR_s_new_0269d288);
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setActiveOperationToken__026ba5e0,puVar1);
        _objc_initWeak(auStack_78,local_28);
        pdVar6 = _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_0199cbac;
        local_b0 = &DAT_02583608;
        _objc_copyWeak(auStack_88,auStack_78);
        puVar1 = local_70;
        (*(code *)PTR__objc_retain_02578638)();
        IVar2 = local_68;
        local_a8 = puVar1;
        (*(code *)PTR__objc_retain_02578638)();
        puVar1 = local_48;
        local_a0 = IVar2;
        local_80 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = local_40;
        local_98 = puVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = puVar3;
        _dispatch_async(pdVar6,&local_c8);
        (*(code *)PTR__objc_release_02578630)(pdVar6);
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_a8,0);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_78);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
        local_60 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                   &cf_ely,&cf_vhvU_1__feN9YS_MR_b_WvU_bvQNvU_0,&cf_nx_,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_60 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ely
                 ,&cf_Ny0RbvQP_vU_,&cf_nx_,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      local_60 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMigrationSource__026ba2e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ely,
               &cf_yn_NX__W,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    local_60 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

