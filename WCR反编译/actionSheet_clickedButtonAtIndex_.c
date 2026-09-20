// actionSheet:clickedButtonAtIndex: @ 01fabf94

/* Function Stack Size: 0x20 bytes */

void WCRefineWatermarkLibraryViewController::actionSheet_clickedButtonAtIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_tag_026cab98);
  if ((uVar3 & 1) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  }
  if (local_50 == 0x5f01) {
    bVar1 = false;
    if ((*(byte *)(local_18 + (long)_isSelectMode) & 1) != 0) {
      bVar1 = 0 < *(long *)(local_18 + (long)_watermarkIndex);
    }
    bVar2 = *(byte *)(local_18 + (long)_pendingNoneItem) & 1;
    if (bVar1) {
      if (param_4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_confirmSelectWatermarkWithType__026c9db8,1);
      }
      else if (param_4 == 1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_confirmSelectWatermarkWithType__026c9db8,0);
      }
      else if ((param_4 == 2) && (bVar2 == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewSelectedWatermark_026c9dc0);
      }
    }
    else if (param_4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_confirmSelectWatermarkWithType__026c9db8,1);
    }
    else if ((param_4 == 1) && (bVar2 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewSelectedWatermark_026c9dc0);
    }
  }
  else if (local_50 == 0x5f03) {
    if (param_4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectFromAlbum_026b64d8);
    }
    else if (param_4 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectFromFiles_026b64e0);
    }
  }
  else if (local_50 == 0x5f02) {
    if (param_4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_topWatermark_026c9dc8);
    }
    else if (param_4 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_enterExportSelectModeFromLongPre_026c49f8);
    }
    else if (param_4 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_renameWatermark_026c9dd0);
    }
    else if (param_4 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showDeleteConfirmation_026b64d0);
    }
  }
  else if (local_50 == 0x5f04) {
    if (param_4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enterExportSelectMode_026b64c8);
    }
    else if (param_4 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_exportAllWatermarks_026c9dd8);
    }
  }
  else if (local_50 == 0x5f05) {
    if (param_4 == 0) {
      *(undefined8 *)(local_18 + (long)_sortOrder) = 0;
      puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadWatermarks_026c9d78);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rbc_NcTyc_);
    }
    else if (param_4 == 1) {
      *(undefined8 *)(local_18 + (long)_sortOrder) = 1;
      puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadWatermarks_026c9d78);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rbc_Ncec_);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

