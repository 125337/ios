// openUpdateLog @ 01d59e80

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::openUpdateLog(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  char *pcVar5;
  ID IVar6;
  undefined *local_60;
  char *local_58;
  char *local_50;
  int local_48;
  undefined1 local_41;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
             &cf_https___520_ouo_top_log_html);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar2 = true;
  uVar1 = puVar3 != (undefined *)0x0;
  local_38 = puVar3;
  if ((bool)uVar1) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar4 == 0;
    local_41 = uVar1;
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    local_48 = 1;
  }
  else {
    pcVar5 = "MMWebViewController";
    _objc_getClass();
    local_50 = pcVar5;
    if (pcVar5 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        local_48 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_setValue_forKey__0269d300,&cf___fee_,&cf_title);
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((IVar6 & 1) == 0) {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        else {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        local_48 = 1;
      }
      _objc_storeStrong(&local_58,0);
      if (local_48 != 0) goto LAB_01d5a308;
    }
    puVar3 = PTR_WebViewController_026cef88;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithURL_title__026b4308,local_38,&cf___fee_);
    local_60 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar6 & 1) == 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      else {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
    _objc_storeStrong(&local_60,0);
    local_48 = 0;
  }
LAB_01d5a308:
  _objc_storeStrong(&local_38,0);
  return;
}

