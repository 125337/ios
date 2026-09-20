// applyEditorFontSize: @ 0196400c

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerPreviewViewController::applyEditorFontSize_
               (ID param_1,SEL param_2,double param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *local_180;
  cfstringStruct *local_160;
  cfstringStruct *local_120;
  double local_d0;
  double local_c8;
  cfstringStruct *local_90;
  ulong local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  double local_48;
  undefined4 local_3c;
  double local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_3c = 0x1e;
  local_4c = 8;
  local_c8 = param_3;
  if (param_3 <= 8.0) {
    local_c8 = 8.0;
  }
  local_60 = local_c8;
  local_48 = local_c8;
  if (local_c8 <= 30.0) {
    local_d0 = local_c8;
  }
  else {
    local_d0 = 30.0;
  }
  local_68 = local_d0;
  local_38 = local_d0;
  dVar6 = local_d0;
  local_58 = param_3;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorFontSize_026b9da8);
  uVar8 = 0x3fd0000000000000;
  if (0.25 <= ABS(local_d0 - dVar6)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_28,PTR_s_setEditorFontSize__026b9f90);
    fVar5 = (float)local_38;
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomSlider_026b9f98);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = (ulong)(uint)fVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      puVar4 = PTR_s_selectedRange_026a43a0;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = pcVar2;
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = uVar7;
      local_80 = uVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_120 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_120 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_120;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar1 < (cfstringStruct *)0x32001) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recolorEditor_026b9e38);
      }
      else {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editorFont_026b9f20);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_78;
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_160 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar4 = local_70;
        if (pcVar1 < local_160) {
          local_160 = pcVar1;
        }
        local_78 = local_160;
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_180 = (undefined *)((long)pcVar3 - (long)local_78);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (puVar4 < local_180) {
          local_180 = puVar4;
        }
        local_70 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,local_80,local_28,PTR_s_restoreEditorScrollPosition_sele_026b9fa8,
                   local_78,local_180,1);
      }
      _objc_storeStrong(&local_90,0);
    }
  }
  return;
}

