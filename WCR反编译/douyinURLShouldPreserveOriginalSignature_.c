// douyinURLShouldPreserveOriginalSignature: @ 0101fe7c

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinURLShouldPreserveOriginalSignature_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  byte local_74;
  cfstringStruct *local_70;
  cfstringStruct *local_48;
  ulong local_40;
  undefined4 local_34;
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
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_douyinvod);
    local_74 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_x_expires);
      local_74 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_containsString__0269d0b0,&cf_x_signature);
        local_74 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_x_tt_);
          local_74 = (byte)uVar1;
        }
      }
    }
    local_11 = local_74 & 1;
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

