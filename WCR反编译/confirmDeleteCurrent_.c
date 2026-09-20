// confirmDeleteCurrent: @ 01c42184

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateLibraryViewController::confirmDeleteCurrent_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_50;
  undefined *local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingActionPath_026c1b48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineNameplateHelper_026ce5f8;
  local_30[0] = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_absolutePathForRelativePath__026ae8d8,IVar3)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
  local_50 = 0;
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (uint)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (((local_50 & 1) != 0) ||
     (puVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     puVar4 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_propagateNameplatePathChange_to__026c1b80,
               local_30[0],0);
  }
  puVar4 = PTR_WCRefineHelper_026ce000;
  bVar2 = true;
  if ((local_50 & 1) == 0) {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    bVar2 = puVar5 == (undefined *)0x0;
  }
  pcVar1 = &cf__Rd;
  if (!bVar2) {
    pcVar1 = &cf_Rd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

