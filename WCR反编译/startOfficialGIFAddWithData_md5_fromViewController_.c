// startOfficialGIFAddWithData:md5:fromViewController: @ 00f4f568

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineEmoticonToolsHelper::startOfficialGIFAddWithData_md5_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  undefined1 local_99;
  ID local_98;
  undefined1 local_89;
  undefined *local_88;
  undefined4 local_7c;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (char *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  pcVar2 = "EmoticonUtil";
  _objc_getClass();
  pcVar3 = "AddEmoticonWrap";
  local_58 = pcVar2;
  _objc_getClass();
  pcVar2 = "EmojiInfoObj";
  local_60 = pcVar3;
  _objc_getClass();
  pcVar3 = "EmoticonUploadInfoObj";
  local_68 = pcVar2;
  _objc_getClass();
  pcVar2 = "EmoticonCustomManageAddLogic";
  local_70 = pcVar3;
  _objc_getClass();
  local_78 = pcVar2;
  if ((((local_58 == (char *)0x0) || (local_60 == (char *)0x0)) || (local_68 == (char *)0x0)) ||
     ((pcVar2 == (char *)0x0 || (local_50 == 0)))) {
    _NSLog(&cf__wcr__emoticon_oaaddgifmissingutil_wrap_emoji_logic_webVC);
    local_21 = 0;
    local_7c = 1;
    goto LAB_00f4fda4;
  }
  local_88 = PTR_s_saveEmoticonToEmoticonDirForMd5__026ac148;
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_respondsToSelector__026ca818,
             PTR_s_saveEmoticonToEmoticonDirForMd5__026ac148);
  if (((ulong)pcVar2 & 1) == 0) {
    local_21 = 0;
    local_7c = 1;
    goto LAB_00f4fda4;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,local_88,local_48,local_40,1);
  IVar4 = local_30;
  local_89 = SUB81(pcVar2,0);
  if (((ulong)pcVar2 & 1) == 0) {
    _NSLog(&cf__wcr__emoticon_oaaddgifsaveEmoticonToEmoticonDirfailmd5___);
    local_21 = 0;
    local_7c = 1;
    goto LAB_00f4fda4;
  }
  pcVar2 = "CEmoticonMgr";
  _objc_getClass("CEmoticonMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_serviceOfClass__0269f7e0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_98 = IVar4;
  if ((IVar4 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_respondsToSelector__026ca818,
                 PTR_s_CheckEmoticonExistInCustomListBy_026ac4d0), (IVar4 & 1) == 0)) {
LAB_00f4f824:
    pcVar2 = local_60;
    _objc_alloc_init();
    local_a8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setSource__026ac4d8);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setSource__026ac4d8,1);
    }
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setFileType__026ac4e0);
    pcVar2 = local_a8;
    puVar1 = PTR_s_setFileType__026ac4e0;
    if (((ulong)pcVar3 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    pcVar3 = local_58;
    local_b0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_fileSizeOfEmoticonForMd5__026ac4e8)
    ;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_fileSizeOfEmoticonForMd5__026ac4e8,local_48);
      local_b0 = pcVar2;
    }
    pcVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setFileSize__026ac4f0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setFileSize__026ac4f0,local_b0);
    }
    pcVar2 = local_68;
    _objc_alloc_init();
    local_b8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setMd5__026ac158);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setMd5__026ac158,local_48);
    }
    pcVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setEmojiInfoObj__026ac4f8);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setEmojiInfoObj__026ac4f8,local_b8);
    }
    if (local_70 != (char *)0x0) {
      pcVar2 = local_70;
      _objc_alloc_init();
      local_c0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setUploadImgMd5__026ac500);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUploadImgMd5__026ac500,local_48);
      }
      pcVar2 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setUploadInfoObj__026ac508);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setUploadInfoObj__026ac508,local_c0);
      }
      _objc_storeStrong(&local_c0,0);
    }
    pcVar2 = local_78;
    _objc_alloc_init();
    local_c8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setDelegate__026ca910,local_50);
    }
    _objc_setAssociatedObject(local_50,DAT_0280e090,local_c8,1);
    uVar6 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setM_emoticonAddLogic__026ac510);
    if ((uVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setM_emoticonAddLogic__026ac510,local_c8)
      ;
    }
    puVar1 = PTR_s_startAddEmoticonWithWrap__026ac518;
    pcVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_startAddEmoticonWithWrap__026ac518)
    ;
    if (((ulong)pcVar2 & 1) == 0) {
      local_21 = 0;
    }
    else {
      pcVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,puVar1,local_a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      uVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__emoticon_oaaddgifstartAddEmoticonWithWrap__dmd5___len__luwebVC___);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mR1Y_);
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        local_21 = 1;
      }
    }
    local_7c = 1;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
  }
  else {
    IVar4 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_CheckEmoticonExistInCustomListBy_026ac4d0,local_48);
    local_99 = (undefined1)IVar4;
    if ((IVar4 & 1) == 0) goto LAB_00f4f824;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_h__X__W);
    local_21 = 1;
    local_7c = 1;
  }
  _objc_storeStrong(&local_98,0);
LAB_00f4fda4:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

