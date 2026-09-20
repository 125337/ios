// FUN_019ab17c @ 019ab17c

void FUN_019ab17c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  dispatch_time_t dVar8;
  undefined *puVar9;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar2 = param_1 + 0x40;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_41 = 0;
  bVar1 = true;
  local_38 = uVar2;
  if (uVar2 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isCancelled_026a1c20);
    bVar1 = true;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_activeOperationToken_026ba618);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      bVar1 = uVar2 != *(ulong *)(param_1 + 0x20);
      local_40 = uVar2;
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    if (*(long *)(param_1 + 0x28) != 0) {
      puVar9 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar9);
    }
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActiveOperationToken__026ba5e0);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_activeOperationToast_026ba600);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActiveOperationToast__026ba5e8,0);
    pcVar3 = &cf_privateHideToast;
    _NSSelectorFromString();
    uVar2 = local_50;
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_performSelector__026ca7b8,local_58);
    }
    lVar4 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SeN1Y_);
      if (*(long *)(param_1 + 0x28) != 0) {
        puVar9 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar9);
      }
      local_48 = 1;
    }
    else {
      pcVar3 = &cf_CMessageWrap;
      _NSClassFromString();
      pcVar5 = &cf_genFileAppMsgWithFileName_filePath_fileData_;
      local_60 = pcVar3;
      _NSSelectorFromString();
      local_68 = pcVar5;
      if ((local_60 == (cfstringStruct *)0x0) ||
         (pcVar6 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar5),
         pcVar5 = local_60, pcVar3 = local_68, ((ulong)pcVar6 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___N_eceNS);
        if (*(long *)(param_1 + 0x28) != 0) {
          puVar9 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar9);
        }
        local_48 = 1;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,pcVar3,uVar7,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x30));
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_startOfficialForwardForMessage__026ba798,local_70);
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
          if (*(long *)(param_1 + 0x28) != 0) {
            puVar9 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar9);
          }
          local_48 = 1;
        }
        else {
          if (*(long *)(param_1 + 0x28) != 0) {
            dVar8 = _dispatch_time(0,600000000000);
            puVar9 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_98 = PTR___NSConcreteStackBlock_02578660;
            local_90 = 0xc2000000;
            local_8c = 0;
            local_88 = FUN_019ab7f4;
            local_80 = &DAT_0257a800;
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            (*(code *)PTR__objc_retain_02578638)();
            local_78 = uVar7;
            _dispatch_after(dVar8,puVar9,&local_98);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            _objc_storeStrong(&local_78,0);
          }
          local_48 = 0;
        }
        _objc_storeStrong(&local_70,0);
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

