// updateViewModeButton @ 01983014

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::updateViewModeButton(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_topToolbar_026ba3c8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar2 & 1) != 0) {
    puVar3 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = &cf_Rh;
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = &cf_Vh;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,pcVar1,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

