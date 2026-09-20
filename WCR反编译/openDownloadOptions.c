// openDownloadOptions @ 01f9f27c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackSettingsViewController::openDownloadOptions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRVPSettingsSheetAction_026cf7e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRVPSettingsSheetAction_026cf7e0,PTR_s_actionWithTitle_handler__026b9738,
             &cf_8YKQQ_v,&PTR___NSConcreteGlobalBlock_0258d0a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRVPSettingsSheetAction_026cf7e0;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRVPSettingsSheetAction_026cf7e0,PTR_s_actionWithTitle_handler__026b9738,
             &cf__v_Q_v,&PTR___NSConcreteGlobalBlock_0258d0c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  FUN_01f9e238(param_1,&cf_SN_,puVar3,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

