// wcrOpenHTTPURL:failToast: @ 017e91b0

/* Function Stack Size: 0x20 bytes */

void WCRefineAISettingsViewController::wcrOpenHTTPURL_failToast_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_c0;
  undefined *local_90;
  cfstringStruct *local_80;
  char *local_68;
  char *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  int local_34;
  cfstringStruct *local_30;
  long local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (local_28 == 0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_80 = &::cf_elSb;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_80);
    local_34 = 1;
    goto LAB_017e95c8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_90 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_90 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  local_51 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = "MMWebViewController";
  _objc_getClass();
  local_60 = pcVar2;
  if ((local_48 == (undefined *)0x0) || (pcVar2 == (char *)0x0)) {
LAB_017e9470:
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_c0 = &::cf_elSb;
      }
      else {
        local_c0 = local_30;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_c0);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_34 = 0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_34 = 0;
    }
    else {
      puVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushViewController_animated__0269cd40);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_pushViewController_animated__0269d590,local_68,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_PushViewController_animated__0269cd40,local_68,1);
      }
      local_34 = 1;
    }
    _objc_storeStrong(&local_68,0);
    if (local_34 == 0) goto LAB_017e9470;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_017e95c8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

