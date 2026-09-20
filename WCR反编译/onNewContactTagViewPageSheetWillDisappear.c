// onNewContactTagViewPageSheetWillDisappear @ 01bfe644

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsForwardOfficialTagSheetDelegate::onNewContactTagViewPageSheetWillDisappear
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_owner_026a2580);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPageSheetAdapter__026c0c68);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

