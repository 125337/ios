// showHTMLAtPath: @ 01cf83dc

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgPreviewPane::showHTMLAtPath_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  uint local_54;
  undefined *local_50;
  undefined *local_48;
  ID local_40;
  uint local_38;
  byte local_31;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_31 = 0;
  local_54 = 1;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar3 ^ 1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  bVar1 = (local_54 & 1) == 0;
  if (bVar1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureWebView_026c3ae8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stopLoading_026a8e68);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,1);
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    lVar2 = local_28;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_fileURLWithPath_isDirectory__026a8f30,lVar2,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_loadFileURL_allowingReadAccessTo_026a1cf8,local_48,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingNavigation__026c3ad8);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetContent_026c3ae0);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

