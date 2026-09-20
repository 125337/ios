// wcrTitleForModelKind: @ 017d95b0

/* Function Stack Size: 0x18 bytes */

ID WCRefineAISettingsViewController::wcrTitleForModelKind_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_video);
    local_30 = &cf_b_jW;
    if ((uVar1 & 1) == 0) {
      local_30 = &cf_b__jW;
    }
  }
  else {
    local_30 = &cf_beuV_jW;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

