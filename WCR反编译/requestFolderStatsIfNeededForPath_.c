// requestFolderStatsIfNeededForPath: @ 01f8a428

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::requestFolderStatsIfNeededForPath_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  undefined1 auStack_70 [8];
  ID local_68;
  undefined1 auStack_60 [8];
  ID local_58;
  uint local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_3c = 1;
  }
  else {
    puVar4 = PTR_WCRefineVoicePackStore_026cea20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackStore_026cea20,PTR_s_cachedFolderStatsForPath__026b0bf0,local_38
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar4 == (undefined *)0x0) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingFolderStatsPaths_026c99c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingFolderStatsPaths_026c99c0);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      bVar1 = (IVar7 & 1) == 0;
      if (bVar1) {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingFolderStatsPaths_026c99c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar6);
      }
      local_3c = (uint)!bVar1;
      _objc_sync_exit(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      if (local_3c == 0) {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statsGeneration_026c99b0);
        local_58 = IVar5;
        _objc_initWeak(auStack_60,local_28);
        lVar3 = local_38;
        puVar4 = PTR_WCRefineVoicePackStore_026cea20;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_01f8a760;
        local_80 = &DAT_0258cff0;
        _objc_copyWeak(auStack_70,auStack_60);
        lVar2 = local_38;
        local_68 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_computeFolderStatsForPath_comple_026c99e0,lVar3,&local_98);
        _objc_storeStrong(&local_78,0);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_60);
        local_3c = 0;
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

