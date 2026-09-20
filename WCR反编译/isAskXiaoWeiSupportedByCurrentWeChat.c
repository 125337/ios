// isAskXiaoWeiSupportedByCurrentWeChat @ 01f51114

/* Function Stack Size: 0x10 bytes */

bool WCRefineVersionController::isAskXiaoWeiSupportedByCurrentWeChat(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_40 = &cf_0_0_0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_compare_options__026a2e98,&cf_8_0_75,0x40);
  _objc_storeStrong(&local_28,0);
  return (uint)(pcVar1 != (cfstringStruct *)0xffffffffffffffff);
}

