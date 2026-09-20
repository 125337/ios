// xhsHTMLLooksBlocked:responseURL: @ 0104985c

/* Function Stack Size: 0x20 bytes */

bool WCRefineLinkParser::xhsHTMLLooksBlocked_responseURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__404_sec_);
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_containsString__0269d0b0,&cf_xhs_sec_server),
     ((ulong)pcVar1 & 1) == 0)) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_containsString__0269d0b0,&cf_xhs_sec_server);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__404_sec_),
       (uVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

