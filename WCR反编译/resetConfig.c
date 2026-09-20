// resetConfig @ 018752a8

/* Function Stack Size: 0x10 bytes */

void WCRefineActionMenuConfigViewController::resetConfig(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_listKind_026b6c98);
  if (IVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setChatMoreActionListConfig__026b6cd8,
               *(undefined8 *)PTR____NSDictionary0___02578288);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_listKind_026b6c98);
    if (IVar2 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setMessageGestureActionListConfi_026b6ce0,
                 *(undefined8 *)PTR____NSDictionary0___02578288);
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_listKind_026b6c98);
      if (IVar2 == 3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setHomeLongPressActionListConfig_026b6ce8,
                   *(undefined8 *)PTR____NSDictionary0___02578288);
      }
      else {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_listKind_026b6c98);
        puVar1 = PTR____NSArray0___02578280;
        if (IVar2 == 4) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setMomentsDoubleTapActionListCon_026b6cf0,
                     *(undefined8 *)PTR____NSDictionary0___02578288);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setActionMenuActionOrder__026b6cf8,
                     *(undefined8 *)PTR____NSArray0___02578280);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setActionMenuHiddenActions__026b6d00,*(undefined8 *)puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setActionMenuCustomTitles__026b6d08,
                     *(undefined8 *)PTR____NSDictionary0___02578288);
        }
      }
    }
  }
  puVar1 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_listKind_026b6c98);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_normalizedEntriesForListKind_inc_026b6c50,IVar2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEntries__026a2ba8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hiddenValues_026b6cc8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customTitles_026b6cd0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

