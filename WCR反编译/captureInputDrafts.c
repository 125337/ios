// captureInputDrafts @ 01aa7488

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::captureInputDrafts(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    pcVar2 = (cfstringStruct *)param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nameField_026bdbf0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_40 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setNameDraft__026bdbf8,local_40);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_detailField_026bdc00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    pcVar2 = (cfstringStruct *)param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_detailField_026bdc00);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDetailDraft__026bdc08,local_60);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_inlineDetailField_026bdc10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    pcVar2 = (cfstringStruct *)param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_inlineDetailField_026bdc10);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_80 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setInlineDetailDraft__026bdc18,local_80);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  return;
}

