// saveViewControllerClassName: @ 01d860e0

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::saveViewControllerClassName_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar3;
  undefined *local_50;
  undefined *local_48 [3];
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineSearchSettingsViewController_026cefb8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSearchSettingsViewController_026cefb8,PTR_s_getCurrentCapturingKey_026c4c58
            );
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setValue_forKey__0269d300,local_28,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_saveConfig_0269e5d0);
    puVar1 = PTR_WCRefineSearchSettingsViewController_026cefb8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSearchSettingsViewController_026cefb8,
               PTR_s_getGlobalFloatingButton_026c4c40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSearchSettingsViewController_026cefb8,
                 PTR_s_setGlobalFloatingButton__026c4c30,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSearchSettingsViewController_026cefb8,
               PTR_s_setCurrentCapturingKey__026c4c20,0);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OX___T_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_Mn_bR,puVar2,&cf_nx_,0,
               in_x6,in_x7,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

