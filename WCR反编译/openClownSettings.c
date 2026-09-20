// openClownSettings @ 01a4bd34

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openClownSettings(ID param_1,SEL param_2)

{
  int iVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  iVar1 = 0x25cc280;
  FUN_01a19cf0(&cf_clown_message_modify,1,0x8a3d51e7,0);
  if (iVar1 != 2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineClownSettingsViewController_026cf2a0;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_pushViewController_animated__0269d590,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

