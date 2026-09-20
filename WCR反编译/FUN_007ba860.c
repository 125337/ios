// FUN_007ba860 @ 007ba860

void FUN_007ba860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong local_a8;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = 0;
  local_38 = param_3;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_48 = local_a8;
  if ((local_a8 != 0) && (local_38 != 4)) {
    if (local_38 == 6) {
      FUN_007bb070(0,local_28,local_30,local_40);
    }
    else if (local_38 == 5) {
      if (local_30 != 0) {
        lVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hidePinned_026a30d0);
        bVar2 = ((byte)lVar6 ^ 1) & 1;
        puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHidePinned_forTabId__026a82e0,bVar2);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar1 = &cf__n_vJ_Y;
        if (bVar2 == 0) {
          pcVar1 = &cf__>f_yn_vJ_Y;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      }
    }
    else if (local_38 == 7) {
      if (local_30 != 0) {
        puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTabId_disabled__026a82e8,lVar6,1);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OYu);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__y_uR_);
        }
      }
    }
    else if ((local_38 == 8) || (local_38 == 9)) {
      if (local_30 != 0) {
        iVar7 = 1;
        if (local_38 == 8) {
          iVar7 = -1;
        }
        puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_shiftVisibleTabId_by__026a82f0,lVar6,(long)iVar7);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar5 & 1) == 0) {
          pcVar1 = &cf____W;
          if (-1 < (long)iVar7) {
            pcVar1 = &cf____W;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
        }
      }
    }
    else if (local_38 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingViewController_026ce940,
                 PTR_s_presentFromViewController_halfSc_026a82f8,local_a8,1);
    }
    else if (local_38 == 3) {
      lVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabId_026a8270);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_pushGroupEditorForGroupId_fromVi_026a8300,lVar6,local_48,1,0);
      (*(code *)PTR__objc_release_02578630)(lVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingTabsViewController_026ce948,
                 PTR_s_presentFromViewController_halfSc_026a82f8,local_a8,1);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

