// FUN_0167b6a4 @ 0167b6a4

void FUN_0167b6a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6Re);
  _objc_storeStrong(&local_20,0);
  return;
}

