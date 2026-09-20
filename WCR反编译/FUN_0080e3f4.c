// FUN_0080e3f4 @ 0080e3f4

void FUN_0080e3f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_e8;
  uint local_dc;
  uint local_c8;
  uint local_b8;
  cfstringStruct *local_78;
  byte local_54;
  ulong local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  if (local_30 == (cfstringStruct *)0x0) {
    local_78 = &cf___;
  }
  else {
    local_78 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(local_78);
  if ((local_28 == 0) ||
     (pcVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_48 = 1;
    goto LAB_0080ec30;
  }
  uVar3 = local_28;
  FUN_008206d0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_avatar);
  local_b8 = 1;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_head);
    local_b8 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_4YP);
      local_b8 = (uint)pcVar2;
    }
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_qrcode);
  local_c8 = 1;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_qr);
    local_c8 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_N_x);
      local_c8 = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf___x);
        local_c8 = (uint)pcVar2;
      }
    }
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_arrow);
  local_dc = 1;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__4Y);
    local_dc = (uint)pcVar2;
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_profile);
  local_e8 = 1;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_info);
    local_e8 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_card);
      local_e8 = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_De);
        local_e8 = 1;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_DeaS);
          local_e8 = (byte)pcVar2;
        }
      }
    }
  }
  local_54 = local_e8 & 1;
  if ((local_b8 & 1) == 0) {
LAB_0080ea3c:
    if ((local_c8 & 1) == 0) {
LAB_0080eb80:
      if (((local_dc & 1) != 0) || (local_54 != 0)) {
        uVar3 = local_28;
        FUN_00820870();
        if ((uVar3 & 1) != 0) {
          local_48 = 1;
          goto LAB_0080ec20;
        }
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showProfileView_026a8c38);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showProfileView_026a8c38);
        }
      }
      local_48 = 0;
    }
    else {
      uVar3 = local_28;
      FUN_00820db0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_00820870();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) == 0) {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showMyQRCodeInProfileViewFromApp_026a8c28);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,
                     PTR_s_showMyQRCodeInProfileViewWithEnt_026a8c30);
          if ((uVar3 & 1) == 0) goto LAB_0080eb80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_showMyQRCodeInProfileViewWithEnt_026a8c30,0);
          local_48 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_showMyQRCodeInProfileViewFromApp_026a8c28);
          local_48 = 1;
        }
      }
      else {
        local_48 = 1;
      }
    }
  }
  else {
    uVar3 = local_28;
    FUN_00820a50();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_00820870();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,
                 PTR_s_onTapAtTextStateHeadButton_026a8c20);
      if ((uVar3 & 1) == 0) {
        local_54 = 1;
        goto LAB_0080ea3c;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_onTapAtTextStateHeadButton_026a8c20);
      local_48 = 1;
    }
    else {
      local_48 = 1;
    }
  }
LAB_0080ec20:
  _objc_storeStrong(&local_50,0);
LAB_0080ec30:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

