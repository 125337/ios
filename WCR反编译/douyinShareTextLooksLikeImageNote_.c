// douyinShareTextLooksLikeImageNote: @ 01030ed0

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinShareTextLooksLikeImageNote_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  byte local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Ve_OT);
    local_38 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Ve_);
      local_38 = (byte)uVar1;
    }
    local_11 = local_38 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

