// recolorEditor @ 01964c3c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::recolorEditor(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  dispatch_queue_t pdVar4;
  cfstringStruct *local_e8;
  cfstringStruct *local_c8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  undefined1 auStack_68 [8];
  undefined1 *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = (cfstringStruct *)param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_c8 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_c8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editorMode_026b9fe0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_e8 = &cf_code;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_e8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editorFont_026b9f20);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    pcVar3 = local_28;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editorHighlightGeneration_026b9d48);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setEditorHighlightGeneration__026b9d50);
    local_60 = (undefined1 *)((long)&pcVar3->field0_0x0 + 1);
    _objc_initWeak(auStack_68,local_28);
    pdVar4 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01964fd8;
    local_98 = &DAT_0258a308;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_50;
    local_90 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = local_58;
    local_88 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = pcVar1;
    _objc_copyWeak(auStack_78,auStack_68);
    local_70 = local_60;
    _dispatch_async(pdVar4,&local_b0);
    (*(code *)PTR__objc_release_02578630)(pdVar4);
    _objc_destroyWeak(auStack_78);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

