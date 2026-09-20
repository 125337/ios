// applyAvatarBeautifySlider: @ 0181c8cc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAvatarCornerBeautifyViewController::applyAvatarBeautifySlider_
          (WCRefineAvatarCornerBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  float in_s0;
  double dVar5;
  long local_68;
  long local_60;
  long local_58;
  float local_4c;
  undefined *local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6510);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_integerValue_026ca750);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    local_4c = in_s0;
    switch(local_40) {
    case 1:
      local_58 = (long)in_s0;
      if (local_58 < 0) {
        local_58 = 0;
      }
      if (100 < local_58) {
        local_58 = 100;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setAvatarCornerChatPageRadius__026b6148,local_58);
      (*(code *)PTR__objc_msgSend_02578628)((float)local_58,local_28,PTR_s_setValue__026a51b0);
      break;
    case 2:
      local_60 = (long)in_s0;
      if (local_60 < 0) {
        local_60 = 0;
      }
      if (100 < local_60) {
        local_60 = 100;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAvatarCornerRadius__026b6150,local_60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)((float)local_60,local_28,PTR_s_setValue__026a51b0);
      break;
    case 3:
      if (in_s0 < 0.0) {
        local_4c = 0.0;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarCornerChatPageBorderSiz_026b6158);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
      break;
    case 4:
      if (in_s0 < 0.0) {
        local_4c = 0.0;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarCornerBorderSize__026b6160);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
      break;
    case 5:
      if (in_s0 < 0.2) {
        local_4c = 0.2;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarCornerScale__026b6168);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
      break;
    case 6:
      if (in_s0 < 0.2) {
        local_4c = 0.2;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarCornerProfileScale__026b6170);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
      break;
    case 7:
      if (in_s0 < -50.0) {
        local_4c = -50.0;
      }
      if (50.0 < local_4c) {
        local_4c = 50.0;
      }
      dVar5 = (double)local_4c;
      FUN_0181d3e0(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAvatarFrameChatListOffsetX__026b6178);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListOffsetX_0269df70);
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue__026a51b0);
      break;
    case 8:
      if (in_s0 < -50.0) {
        local_4c = -50.0;
      }
      if (50.0 < local_4c) {
        local_4c = 50.0;
      }
      dVar5 = (double)local_4c;
      FUN_0181d3e0(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAvatarFrameChatListOffsetY__026b6180);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListOffsetY_0269df78);
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue__026a51b0);
      break;
    case 9:
      if (in_s0 < 0.2) {
        local_4c = 0.2;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarFrameChatListScale__026b6188);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
      break;
    case 10:
      if (in_s0 < -50.0) {
        local_4c = -50.0;
      }
      if (50.0 < local_4c) {
        local_4c = 50.0;
      }
      dVar5 = (double)local_4c;
      FUN_0181d3e0(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setAvatarFrameChatPageOtherOffse_026b6190);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88)
      ;
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue__026a51b0);
      break;
    case 0xb:
      if (in_s0 < -50.0) {
        local_4c = -50.0;
      }
      if (50.0 < local_4c) {
        local_4c = 50.0;
      }
      dVar5 = (double)local_4c;
      FUN_0181d3e0(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setAvatarFrameChatPageOtherOffse_026b6198);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90)
      ;
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue__026a51b0);
      break;
    case 0xc:
      if (in_s0 < 0.2) {
        local_4c = 0.2;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarFrameChatPageOtherScale_026b61a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
      break;
    case 0xd:
      if (in_s0 < -50.0) {
        local_4c = -50.0;
      }
      if (50.0 < local_4c) {
        local_4c = 50.0;
      }
      dVar5 = (double)local_4c;
      FUN_0181d3e0(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setAvatarFrameChatPageSelfOffset_026b61a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue__026a51b0);
      break;
    case 0xe:
      if (in_s0 < -50.0) {
        local_4c = -50.0;
      }
      if (50.0 < local_4c) {
        local_4c = 50.0;
      }
      dVar5 = (double)local_4c;
      FUN_0181d3e0(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setAvatarFrameChatPageSelfOffset_026b61b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue__026a51b0);
      break;
    case 0xf:
      if (in_s0 < 0.2) {
        local_4c = 0.2;
      }
      if (5.0 < local_4c) {
        local_4c = 5.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)local_4c,local_48,PTR_s_setAvatarFrameChatPageScale__026b61b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_4c,local_28,PTR_s_setValue__026a51b0);
    }
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_68;
    if (local_68 != 0) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_titleForAvatarBeautifyValueButto_026b6138,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTitle_forState__026caab8,IVar4,0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_48,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

