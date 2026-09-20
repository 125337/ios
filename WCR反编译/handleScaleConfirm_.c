// handleScaleConfirm: @ 01823848

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarCornerBeautifyViewController::handleScaleConfirm_
               (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  float fVar4;
  double dVar5;
  cfstringStruct *local_90;
  double local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  dVar1 = DAT_02323ca0;
  local_28 = (cfstringStruct *)0x0;
  dVar5 = DAT_02323ca0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  fVar4 = SUB84(dVar5,0);
  pcVar2 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_18;
  local_30 = pcVar2;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  _objc_setAssociatedObject(local_18,"WCRefineScaleConfirmBlock",0,3);
  _objc_setAssociatedObject(local_18,"WCRefineScaleAlert",0,1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf_1_5;
    if ((local_38 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_90 = &cf_1_5;
        }
        _objc_storeStrong(&local_48,local_90);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_50,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatValue_026a5b48);
    local_58 = (double)fVar4;
    if (local_58 <= 0.0) {
      local_58 = 1.5;
    }
    if (local_58 < dVar1) {
      local_58 = dVar1;
    }
    if (5.0 < local_58) {
      local_58 = 5.0;
    }
    (*(code *)local_30->field2_0x10)(local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

