// filterTypeKeyForSegmentIndex: @ 01d1d87c

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyPanel::filterTypeKeyForSegmentIndex_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  local_18 = _WCRQuickReplyFilterAll;
  if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_text;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_voice;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_image;
  }
  else if (param_3 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_video;
  }
  else if (param_3 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_emoticon;
  }
  else if (param_3 == 6) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_contact;
  }
  else if (param_3 == 7) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_other;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

