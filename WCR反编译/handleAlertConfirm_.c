// handleAlertConfirm: @ 01e6aa78

/* WARNING: Removing unreachable block (ram,0x01e6af5c) */
/* WARNING: Removing unreachable block (ram,0x01e6af6c) */
/* Function Stack Size: 0x18 bytes */

void WCRefineTextReplaceViewController::handleAlertConfirm_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_138;
  cfstringStruct *local_108;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined1 local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  byte local_39;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = 0;
  pcVar4 = local_28;
  _objc_getAssociatedObject(local_28,PTR_s_handleAlertConfirm__026b9598);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  bVar3 = false;
  uVar1 = pcVar4 != (cfstringStruct *)0x0;
  local_48 = pcVar4;
  if ((bool)uVar1) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = pcVar4 != (cfstringStruct *)0x0;
    local_61 = uVar1;
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    uVar1 = local_61;
  }
  local_61 = uVar1;
  if (bVar3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &::cf___;
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTextField_0269fb48);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar4;
        if ((pcVar4 != (cfstringStruct *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
           ((ulong)pcVar4 & 1) != 0)) {
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_138 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_138 = &::cf___;
          }
          _objc_storeStrong(&local_70,local_138);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_78 != (cfstringStruct *)0x0) &&
         (pcVar4 = local_78,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
         ((ulong)pcVar4 & 1) != 0)) {
        pcVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_108 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_108 = &::cf___;
        }
        _objc_storeStrong(&local_70,local_108);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      _objc_storeStrong(&local_78,0);
    }
    (*(code *)local_48->field2_0x10)(local_48,local_70);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_48,0);
  _objc_setAssociatedObject(local_28,PTR_s_handleAlertConfirm__026b9598,0,1);
  _objc_setAssociatedObject(local_28,PTR_s_handleAlertCancel__026b9590,0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
  if ((local_39 & 1) != 0) {
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1e6af48);
    (*pcVar2)();
  }
  _objc_storeStrong(0,&local_38,0);
  return;
}

