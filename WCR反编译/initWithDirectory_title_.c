// initWithDirectory:title: @ 01f6d008

/* Function Stack Size: 0x20 bytes */

ID WCRefineVoicePackManagerViewController::initWithDirectory_title_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID *pIVar2;
  undefined8 **ppuVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_48;
  undefined8 *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar3 = &local_40;
  local_38 = PTR_WCRefineVoicePackManagerViewController_026d0288;
  _objc_msgSendSuper2(ppuVar3,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar3;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    lVar5 = *(long *)((long)local_18 + (long)_directory);
    *(long *)((long)local_18 + (long)_directory) = (long)pcVar4;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar1 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_48 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_80 = local_48;
      if (local_48 == (cfstringStruct *)0x0) {
        local_80 = &cf__OS;
      }
      local_70 = local_80;
    }
    else {
      local_70 = local_30;
    }
    _objc_storeStrong((long)local_18 + (long)_pageTitle,local_70);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)local_18 + (long)_selectedPaths);
    *(undefined8 *)((long)local_18 + (long)_selectedPaths) = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)local_18 + (long)_pendingFolderStatsPaths);
    *(undefined8 *)((long)local_18 + (long)_pendingFolderStatsPaths) = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  pIVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar2;
}

