// presentFromViewController:title:selectedChatRooms:completion: @ 00ee89a4

/* Function Stack Size: 0x30 bytes */

void WCRefineChatRoomPicker::presentFromViewController_title_selectedChatRooms_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  uint local_1d4;
  cfstringStruct *local_1b8;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  long local_f8;
  long local_f0 [4];
  undefined *local_d0;
  char *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar7 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = local_38;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_00ee9190;
    local_80 = &DAT_02581fc0;
    local_58 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar5 = local_40;
    local_78 = lVar8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_70 = pcVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_50;
    local_68 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar4;
    _dispatch_async(puVar7,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_9c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
  }
  else if (local_38 == 0) {
    local_9c = 1;
  }
  else {
    pcVar3 = "MultiSelectChatRoomHalfScreenViewController";
    _objc_getClass();
    local_a8 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_9c = 1;
    }
    else {
      FUN_00ee91e4();
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      uVar4 = local_48;
      FUN_00ee9250();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_40;
      local_b0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_1b8 = &cf_b_J;
      }
      else {
        local_1b8 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_1b8;
      pcVar5 = &
               cf_initWithTipWord_choiseSessionWord_chatroomSessionWord_rightButtonWord_rightButtonLightColor_rightButtonDarkColor_selectedUserNameList_selectMaxCount_countExceedTipWord_forceLightMode_canSelectOpenIM_
      ;
      _NSSelectorFromString();
      pcVar3 = local_a8;
      local_c0 = pcVar5;
      _objc_alloc();
      pcVar6 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_c8 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__JbhVRYS1Y_);
        local_9c = 1;
      }
      else {
        puVar7 = PTR_WCRChatRoomPickerBridge_026ceb30;
        _objc_alloc_init();
        local_d0 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setPickerController__026ab878,local_c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setCompletion__0269fdc8,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPickerTitle__026ab8a0,local_b8);
        _objc_setAssociatedObject(local_c8,DAT_0280e058,local_d0,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_setValue_forKey__0269d300,local_d0,&cf_m_delegate);
        lVar8 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_f0[0] = lVar8;
        while( true ) {
          lVar8 = local_f0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 0;
          local_1d4 = 0;
          if (lVar8 != 0) {
            lVar9 = local_f0[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0[0],PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            local_f9 = 1;
            local_f8 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1d4 = (uint)lVar9 ^ 1;
          }
          if ((local_f9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_f8);
          }
          (*(code *)PTR__objc_release_02578630)(lVar8);
          if ((local_1d4 & 1) == 0) break;
          lVar9 = local_f0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = local_f0[0];
          local_f0[0] = lVar9;
          (*(code *)PTR__objc_release_02578630)(lVar8);
        }
        pcVar5 = &cf_configPresentationCustomWithViewController_resetPresentedViewFrame_;
        _NSSelectorFromString();
        pcVar10 = &cf_configPresentationCustomWithViewController_;
        local_108 = pcVar5;
        _NSSelectorFromString();
        pcVar3 = local_c8;
        local_110 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_108)
        ;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_respondsToSelector__026ca818,local_110);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_110,local_f0[0]);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_108,local_f0[0],1);
        }
        pcVar3 = local_c8;
        puVar7 = local_d0;
        lVar8 = local_f0[0];
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_00ee96c0;
        local_120 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar8,PTR_s_presentViewController_animated_c_0269d2b0,pcVar3,1,&local_138);
        _objc_storeStrong(&local_118);
        _objc_storeStrong(local_f0,0);
        _objc_storeStrong(&local_d0,0);
        local_9c = 0;
      }
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

