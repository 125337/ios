// FUN_015705f8 @ 015705f8

void FUN_015705f8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = &cf_WCRefineChatRoomFunctionViewController;
  local_20 = param_1;
  local_18 = param_1;
  _NSClassFromString();
  bVar1 = local_48 == (cfstringStruct *)0x0;
  local_28 = local_48;
  if (bVar1) {
    local_48 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc_init();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__JRubNS_u);
  }
  else {
    FUN_01556938(local_30);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

