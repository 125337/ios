// imageDataFromImageMessageWrap:needDownload: @ 00f3dbd4

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::imageDataFromImageMessageWrap_needDownload_
             (ID param_1,SEL param_2,ID param_3,bool *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint local_c4;
  uint local_a4;
  ulong local_50;
  undefined4 local_44;
  undefined *local_40;
  bool *local_38;
  ulong local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  if (param_4 != (bool *)0x0) {
    *(undefined1 *)param_4 = 0;
  }
  puVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_originalImageDataFromImageMessag_026ac1a0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  local_18 = local_40;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_44 = 1;
    goto LAB_00f3e080;
  }
  local_50 = 0;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsThumbImgPath);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_50;
  local_50 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_a4 = 1;
  if ((uVar3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a4 = (uint)puVar4 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (((local_a4 & 1) != 0) &&
     (uVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getThumbImagePath_026ac1a8),
     (uVar3 & 1) != 0)) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getThumbImagePath_026ac1a8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_c4 = 0;
  if ((uVar3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c4 = (uint)puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_c4 & 1) == 0) {
LAB_00f3e044:
    if (local_38 != (bool *)0x0) {
      *(undefined1 *)local_38 = 1;
    }
    local_18 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
               local_50,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_18 = local_40;
    if (puVar1 == (undefined *)0x0) goto LAB_00f3e044;
    if (local_38 != (bool *)0x0) {
      *(undefined1 *)local_38 = 1;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_00f3e080:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

