// convertVideoMessageToEmoticonFromCell: @ 00f46458

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::convertVideoMessageToEmoticonFromCell_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  byte local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  ID local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  ID local_70;
  byte local_61;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if ((DAT_028e2d68 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageWrapFromCell__026ac0d8,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_chatViewControllerFromView__026ab918,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar4;
    if ((local_48 == 0) || (IVar4 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_elS);
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideMenuController_026aa7a0);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_videoPathFromMessageWrap__026ac248,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
      if (IVar3 == 0) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_appFilePathFromMessageWrap_cell__026ac1f0,local_48,local_38);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_28;
        local_60 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isReadableVideoAtPath__026ac1e0,IVar3);
        if ((IVar4 & 1) == 0) {
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isFileMessageCell__026ac208,local_38)
          ;
          local_cc = 1;
          if ((IVar3 & 1) == 0) {
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_isAppFileMessageWrap__026ac2f8,local_48);
            local_cc = (byte)IVar3;
          }
          local_61 = local_cc & 1;
          DAT_028e2d68 = 1;
          FUN_00f45ee8(&cf_ck_WN__);
          if ((local_61 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_startDownloadVideoForWrap_chatVC_026ac308,local_48,local_50);
            IVar2 = local_28;
            IVar4 = local_48;
            IVar3 = local_50;
            local_c8 = PTR___NSConcreteStackBlock_02578660;
            local_c0 = 0xc2000000;
            local_bc = 0;
            local_b8 = FUN_00f46998;
            local_b0 = &DAT_02582df8;
            local_a0 = local_28;
            (*(code *)PTR__objc_retain_02578638)();
            local_a8 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar2,PTR_s_waitForVideoFromWrap_attempt_com_026ac250,IVar4,0,&local_c8);
            _objc_storeStrong(&local_a8,0);
            local_3c = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_startDownloadAppFileForWrap_chat_026ac300,local_48,local_50);
            IVar2 = local_28;
            uVar1 = local_38;
            IVar4 = local_48;
            IVar3 = local_50;
            local_98 = PTR___NSConcreteStackBlock_02578660;
            local_90 = 0xc2000000;
            local_8c = 0;
            local_88 = FUN_00f468f0;
            local_80 = &DAT_02582df8;
            local_70 = local_28;
            (*(code *)PTR__objc_retain_02578638)();
            local_78 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar2,PTR_s_waitForAppFileVideoFromWrap_cell_026ac260,IVar4,uVar1,0,&local_98
                      );
            local_3c = 1;
            _objc_storeStrong(&local_78,0);
          }
        }
        else {
          DAT_028e2d68 = 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_convertVideoAtPath_chatVC__026ac2f0,local_60,local_50);
          local_3c = 1;
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        DAT_028e2d68 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_convertVideoAtPath_chatVC__026ac2f0,local_58,local_50);
        local_3c = 1;
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    FUN_00f45ee8(&cf_ck_WYt_);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

