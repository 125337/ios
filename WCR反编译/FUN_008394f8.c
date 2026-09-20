// FUN_008394f8 @ 008394f8

byte FUN_008394f8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_78;
  uint local_64;
  uint local_5c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_Text_Bubble_Receiver_White_HL);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_ChatRoom_Bubble_)
      ;
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_HB_);
        if (((((uVar1 & 1) == 0) &&
             (uVar1 = local_20,
             (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_AA_),
             (uVar1 & 1) == 0)) &&
            (uVar1 = local_20,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf_Overtime), (uVar1 & 1) == 0)) &&
           (uVar1 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Gift_),
           (uVar1 & 1) == 0)) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Text_);
          puVar2 = PTR_WCRefineBubbleCut_026ce9c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_isChatBubbleAssetName__026a8c90,local_20);
          local_5c = 0;
          if (((ulong)puVar2 & 1) != 0) {
            uVar3 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf_Common_New);
            local_64 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_containsString__0269d0b0,&cf_Common_Mask);
              local_64 = (uint)uVar3;
            }
            local_5c = local_64;
          }
          uVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_App_);
          uVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Voice_);
          if ((((uVar1 & 1) == 0) && ((local_5c & 1) == 0)) &&
             (((uVar3 & 1) == 0 && ((uVar4 & 1) == 0)))) {
            local_11 = 0;
          }
          else {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf__Sender);
            local_78 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_containsString__0269d0b0,&cf__Receiver);
              local_78 = (byte)uVar1;
            }
            local_11 = local_78 & 1;
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
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

