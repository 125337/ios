// initWithFilePath: @ 0195a700

/* Function Stack Size: 0x18 bytes */

ID WCRefineFileManagerPreviewViewController::initWithFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_WCRefineFileManagerPreviewViewController_026cfd18;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_filePath);
    *(undefined8 *)((long)local_18 + (long)_filePath) = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar5 = PTR_WCRefineFileManagerPreviewViewController_026cf1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFileManagerPreviewViewController_026cf1a8,
               PTR_s_previewKindForPath__026b9ca0,local_28);
    *(undefined **)((long)local_18 + (long)_kind) = puVar5;
    *(undefined1 *)((long)local_18 + (long)_wrapLines) = 0;
    *(undefined8 *)((long)local_18 + (long)_editorFontSize) = 0x402a000000000000;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

