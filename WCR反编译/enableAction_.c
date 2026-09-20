// enableAction: @ 01df8304

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatActionPickerViewController::enableAction_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ulong local_50;
  long local_48;
  ulong local_40;
  int local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01df2eec();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_34 = 1;
  }
  else {
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    for (local_48 = 0; lVar1 = local_48, uVar2 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), lVar1 < (long)uVar2;
        local_48 = local_48 + 1) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) != 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_01df2eec();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if ((uVar5 & 1) == 0) {
          local_34 = 0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                     _WCRSuperFloatEnabledKey);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_setObject_atIndexedSubscript__0269e970,local_50,local_48);
          local_34 = 2;
        }
        _objc_storeStrong(&local_50,0);
        if (local_34 != 0) break;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_40);
    _WCRSuperFloatNotifySettingsChanged();
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionHandler_026b8278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar6 != 0) {
      IVar6 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionHandler_026b8278);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar6 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mR);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_dismissViewControllerAnimated_co_0269cf98,1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

