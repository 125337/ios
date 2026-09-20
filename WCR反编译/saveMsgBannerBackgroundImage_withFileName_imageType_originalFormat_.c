// saveMsgBannerBackgroundImage:withFileName:imageType:originalFormat: @ 01b9b6b0

/* Function Stack Size: 0x30 bytes */

void WCRefineMessageBannerBeautifyViewController::
     saveMsgBannerBackgroundImage_withFileName_imageType_originalFormat_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint local_94;
  long local_70;
  ulong local_68;
  ID local_60;
  ID local_58;
  ulong local_50;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentMsgBannerImageFolderPa_026c0090);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_deleteOldMsgBannerImagesInFolder_026c0130,IVar1,local_48);
  IVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_50;
  local_60 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = 0;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_png);
  if ((uVar2 & 1) == 0) {
    lVar3 = local_38;
    _UIImageJPEGRepresentation(DAT_02323d00);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_70;
    local_70 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  else {
    lVar3 = local_38;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_70;
    local_70 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  local_94 = 0;
  if (local_70 != 0) {
    lVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_writeToFile_atomically__0269f928,local_60,1);
    local_94 = (uint)lVar4;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  FUN_01b98aa8(&cf_saveimagefallbackimageType___fileName___format___target___dataLen__lusuccess___);
  if ((local_94 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

