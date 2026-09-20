// useLocalIcon @ 01e14294

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatButtonConfigViewController::useLocalIcon(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  undefined *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingActionId_026c5d30);
  _objc_retainAutoreleasedReturnValue();
  local_98 = local_28;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actionWithId__026c5d38,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_51 = false;
  bVar1 = local_98 == (cfstringStruct *)0x0;
  local_40 = local_98;
  if (bVar1) {
    local_98 = &::cf___;
  }
  else {
    _WCRSuperFloatLocalIconPathForAction();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_98;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_98;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  local_69 = false;
  bVar1 = local_40 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_a8 = &::cf___;
  }
  else {
    local_a8 = local_40;
    _WCRSuperFloatLocalIconRelativePathForAction();
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_a8;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_a8;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingActionId__026c5d10,0);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((IVar2 == 0) ||
     (pcVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackFolder_026b18c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__g_W);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_78,0);
  }
  else {
    _WCRSuperFloatSetActionUsesLocalIcon(local_38,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_88 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__R__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

