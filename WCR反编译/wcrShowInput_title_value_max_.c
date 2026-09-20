// wcrShowInput:title:value:max: @ 017d0fcc

/* Function Stack Size: 0x30 bytes */

void WCRefineAISessionSettingsViewController::wcrShowInput_title_value_max_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  ID IVar3;
  cfstringStruct *local_a0;
  uint local_4c;
  cfstringStruct *local_48;
  unsigned_long_long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcrEditingKey__026b5138,local_28);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,_WCRAISessionPrefix);
  local_4c = 1;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,_WCRAISessionSuffix);
    local_4c = (uint)pcVar1;
  }
  pcVar1 = &::cf_eQ;
  if ((local_4c & 1) == 0) {
    pcVar1 = &cf_Yuzzh_yS_MRO_O_u_u<P;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = "WCUIAlertView";
  local_48 = pcVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcrAlert__026b5140);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrAlert_026b5148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrAlert_026b5148);
  _objc_retainAutoreleasedReturnValue();
  if (local_38 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setTextFieldDefaultText__0269fd98,local_a0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrAlert_026b5148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrAlert_026b5148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrAlert_026b5148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

