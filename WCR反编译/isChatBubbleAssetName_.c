// isChatBubbleAssetName: @ 00ebaec4

/* Function Stack Size: 0x18 bytes */

bool WCRefineBubbleCut::isChatBubbleAssetName_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_5c;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_30;
    FUN_00ebb228();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_ChatRoom_Bubble_)
      ;
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_HB_);
        if (((((uVar2 & 1) == 0) &&
             (uVar2 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_AA_),
             (uVar2 & 1) == 0)) &&
            (uVar2 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf_Overtime), (uVar2 & 1) == 0)) &&
           ((uVar2 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Gift_)
            , (uVar2 & 1) == 0 &&
            (uVar2 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf_Voice_), (uVar2 & 1) == 0)))) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Text_);
          uVar3 = uVar2;
          FUN_00ebb294();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_App_);
          if (((uVar2 & 1) == 0) && (((uVar4 & 1) == 0 && ((uVar3 & 1) == 0)))) {
            local_11 = 0;
          }
          else {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf__Sender);
            local_5c = 1;
            if ((uVar2 & 1) == 0) {
              uVar2 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_containsString__0269d0b0,&cf__Receiver);
              local_5c = (byte)uVar2;
            }
            local_11 = local_5c & 1;
          }
        }
        else {
          local_11 = 0;
        }
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

