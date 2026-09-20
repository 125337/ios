// _WCRChatToolbarDispatchFailureMessage @ 00efacb8

void _WCRChatToolbarDispatchFailureMessage(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *local_98;
  bool local_49;
  cfstringStruct *local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_wcr_attachment_);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_chat_);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_wcr_custom_);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_wcr_builtin_);
        if (((((uVar1 & 1) == 0) &&
             (uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_settings), (uVar1 & 1) == 0
             )) && (uVar1 = local_28,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_manage),
                   (uVar1 & 1) == 0)) &&
           (((uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_adjust), (uVar1 & 1) == 0
             && (uVar1 = local_28,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_add), (uVar1 & 1) == 0))
            && ((uVar1 = local_28,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_search),
                (uVar1 & 1) == 0 &&
                (uVar1 = local_30,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCRefine), (uVar1 & 1) == 0)
                ))))) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_S_MRcNeQSNS_u__cN_gR_b_glQel;
        }
        else {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            local_98 = &cf_RfNS_u;
          }
          else {
            local_98 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_0_);
            _objc_retainAutoreleasedReturnValue();
            local_48 = local_98;
          }
          local_49 = uVar1 != 0;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_98;
          if (local_49) {
            (*(code *)PTR__objc_release_02578630)(local_48);
          }
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__INRelgbL;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_T_NNS_u;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_S_MRJ_YlgDNeQS;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

