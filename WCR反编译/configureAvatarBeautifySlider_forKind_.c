// configureAvatarBeautifySlider:forKind: @ 0181a6b0

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineAvatarCornerBeautifyViewController::configureAvatarBeautifySlider_forKind_
          (WCRefineAvatarCornerBeautifyViewController *this,ID param_1,SEL param_2,ID param_3,
          long_long param_4)

{
  ID IVar1;
  dword *pdVar2;
  double in_d0;
  double dVar3;
  double local_338;
  double local_330;
  double local_320;
  double local_318;
  double local_300;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2c8;
  double local_2c0;
  double local_2b0;
  double local_2a8;
  double local_298;
  double local_290;
  double local_280;
  double local_278;
  dword *local_268;
  dword *local_260;
  dword *local_258;
  dword *local_250;
  dword *local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pdVar2 = (dword *)PTR_WCRefineConfig_026cdf58;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pdVar2;
  switch(local_40) {
  case 1:
    (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x42c80000,local_38,PTR_s_setMaximumValue__026b2340);
    local_250 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerChatPageRadius_0269dff8);
    if (100 < (long)local_250) {
      local_250 = &segment_command_00000020.flags;
    }
    if ((long)local_250 < 1) {
      local_258 = (dword *)0x0;
    }
    else {
      local_258 = local_250;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)(long)local_258,local_38,PTR_s_setValue__026a51b0);
    break;
  case 2:
    (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x42c80000,local_38,PTR_s_setMaximumValue__026b2340);
    local_260 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerRadius_0269dfc0);
    if (100 < (long)local_260) {
      local_260 = &segment_command_00000020.flags;
    }
    if ((long)local_260 < 1) {
      local_268 = (dword *)0x0;
    }
    else {
      local_268 = local_260;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)(long)local_268,local_38,PTR_s_setValue__026a51b0);
    break;
  case 3:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMaximumValue__026b2340);
    local_278 = 5.35679601527854e-315;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerChatPageBorderSize_0269e008);
    if (5.0 < local_278) {
      local_278 = 5.0;
    }
    if (local_278 <= 0.0) {
      local_280 = 0.0;
    }
    else {
      local_280 = local_278;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_280,local_38,PTR_s_setValue__026a51b0);
    break;
  case 4:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMaximumValue__026b2340);
    local_290 = 5.35679601527854e-315;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerBorderSize_0269dfd0);
    if (5.0 < local_290) {
      local_290 = 5.0;
    }
    if (local_290 <= 0.0) {
      local_298 = 0.0;
    }
    else {
      local_298 = local_290;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_298,local_38,PTR_s_setValue__026a51b0);
    break;
  case 5:
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedAvatarCornerScaleValue_026b60a0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_38,PTR_s_setMaximumValue__026b2340);
    (*(code *)PTR__objc_msgSend_02578628)((float)in_d0,local_38,PTR_s_setValue__026a51b0);
    break;
  case 6:
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedAvatarCornerProfileSca_026b6110);
    (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_38,PTR_s_setMaximumValue__026b2340);
    (*(code *)PTR__objc_msgSend_02578628)((float)in_d0,local_38,PTR_s_setValue__026a51b0);
    break;
  case 7:
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c90,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c98,local_38,PTR_s_setMaximumValue__026b2340);
    local_2a8 = 50.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListOffsetX_0269df70);
    if (50.0 < local_2a8) {
      local_2a8 = 50.0;
    }
    if (local_2a8 <= -50.0) {
      local_2b0 = -50.0;
    }
    else {
      local_2b0 = local_2a8;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_2b0,local_38,PTR_s_setValue__026a51b0);
    break;
  case 8:
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c90,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c98,local_38,PTR_s_setMaximumValue__026b2340);
    local_2c0 = 50.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListOffsetY_0269df78);
    if (50.0 < local_2c0) {
      local_2c0 = 50.0;
    }
    if (local_2c0 <= -50.0) {
      local_2c8 = -50.0;
    }
    else {
      local_2c8 = local_2c0;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_2c8,local_38,PTR_s_setValue__026a51b0);
    break;
  case 9:
    (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd,local_38,PTR_s_setMinimumValue__026b2338);
    dVar3 = 5.35679601527854e-315;
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_38,PTR_s_setMaximumValue__026b2340);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListScale_0269df80);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_effectiveAvatarFrameScaleFromSto_026b6118);
    (*(code *)PTR__objc_msgSend_02578628)((float)dVar3,local_38,PTR_s_setValue__026a51b0);
    break;
  case 10:
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c90,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c98,local_38,PTR_s_setMaximumValue__026b2340);
    local_2e0 = 50.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
    if (50.0 < local_2e0) {
      local_2e0 = 50.0;
    }
    if (local_2e0 <= -50.0) {
      local_2e8 = -50.0;
    }
    else {
      local_2e8 = local_2e0;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_2e8,local_38,PTR_s_setValue__026a51b0);
    break;
  case 0xb:
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c90,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c98,local_38,PTR_s_setMaximumValue__026b2340);
    local_2f8 = 50.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
    if (50.0 < local_2f8) {
      local_2f8 = 50.0;
    }
    if (local_2f8 <= -50.0) {
      local_300 = -50.0;
    }
    else {
      local_300 = local_2f8;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_300,local_38,PTR_s_setValue__026a51b0);
    break;
  case 0xc:
    (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd,local_38,PTR_s_setMinimumValue__026b2338);
    dVar3 = 5.35679601527854e-315;
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_38,PTR_s_setMaximumValue__026b2340);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherScale_0269df98);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_effectiveAvatarFrameScaleFromSto_026b6118);
    (*(code *)PTR__objc_msgSend_02578628)((float)dVar3,local_38,PTR_s_setValue__026a51b0);
    break;
  case 0xd:
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c90,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c98,local_38,PTR_s_setMaximumValue__026b2340);
    local_318 = 50.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
    if (50.0 < local_318) {
      local_318 = 50.0;
    }
    if (local_318 <= -50.0) {
      local_320 = -50.0;
    }
    else {
      local_320 = local_318;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_320,local_38,PTR_s_setValue__026a51b0);
    break;
  case 0xe:
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c90,local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339c98,local_38,PTR_s_setMaximumValue__026b2340);
    local_330 = 50.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
    if (50.0 < local_330) {
      local_330 = 50.0;
    }
    if (local_330 <= -50.0) {
      local_338 = -50.0;
    }
    else {
      local_338 = local_330;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_338,local_38,PTR_s_setValue__026a51b0);
    break;
  case 0xf:
    (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd,local_38,PTR_s_setMinimumValue__026b2338);
    dVar3 = 5.35679601527854e-315;
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_38,PTR_s_setMaximumValue__026b2340);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageScale_0269dfb0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_effectiveAvatarFrameScaleFromSto_026b6118);
    (*(code *)PTR__objc_msgSend_02578628)((float)dVar3,local_38,PTR_s_setValue__026a51b0);
    break;
  default:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x3f800000,local_38,PTR_s_setMaximumValue__026b2340);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setValue__026a51b0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

