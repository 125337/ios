// FUN_019654b4 @ 019654b4

void FUN_019654b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *local_f8;
  uint local_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  undefined8 local_90;
  undefined8 local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  uint local_70;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar2 = (cfstringStruct *)(param_3 + 0x30);
  local_50 = param_3;
  local_48 = param_3;
  _objc_loadWeakRetained();
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_d4 = 1;
  local_60 = pcVar2;
  if ((local_58 != (cfstringStruct *)0x0) && (local_d4 = 1, pcVar2 != (cfstringStruct *)0x0)) {
    pcVar5 = *(cfstringStruct **)(param_3 + 0x38);
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_editorHighlightGeneration_026b9d48);
    local_d4 = 1;
    if (pcVar5 == pcVar2) {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_f8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_f8 = &cf___;
      }
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_3 + 0x20));
      local_d4 = (uint)local_f8 ^ 1;
    }
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  bVar1 = (local_d4 & 1) == 0;
  if (bVar1) {
    pcVar2 = local_60;
    puVar4 = PTR_s_selectedRange_026a43a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = pcVar2;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_contentOffset_0269dd18);
    pcVar2 = local_60;
    local_90 = param_1;
    local_88 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_textStorage_026b9fe8);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setEditorRecoloring__026b9ff0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_beginEditing_026b9ff8);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    pcVar2 = local_98;
    local_38 = 0;
    local_30 = 0;
    local_a8 = 0;
    local_d0 = PTR___NSConcreteGlobalBlock_02578658;
    local_c8 = 0xd0800000;
    local_c4 = 0;
    local_c0 = FUN_019658a0;
    local_b8 = &DAT_0258a2e8;
    local_a0 = uVar3;
    local_40 = uVar3;
    local_28 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_enumerateAttributesInRange_optio_026ba008,local_a8,local_a0,0,&local_d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_applySearchHighlightOverlayToSto_026ba010,local_98);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_endEditing_026ba018);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setEditorRecoloring__026b9ff0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,local_88,local_58,PTR_s_restoreEditorScrollPosition_sele_026b9fa8,local_80,
               local_78,0);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_98,0);
  }
  local_70 = (uint)!bVar1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return;
}

