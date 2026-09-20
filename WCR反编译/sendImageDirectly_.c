// sendImageDirectly: @ 009533c4

/* Function Stack Size: 0x18 bytes */

bool WCRClipboardHistoryPanelController::sendImageDirectly_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_f0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ID local_80 [4];
  ID local_60;
  ID local_58;
  long local_50;
  int local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_009539fc;
  }
  lVar1 = local_40;
  _UIImageJPEGRepresentation(DAT_02323e70);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar2 = local_40;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    local_50 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resolveMsgViewController_026aaaf0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = 0;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
    if ((IVar3 & 1) != 0) {
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_m_delegate_0269d0e0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_60;
      local_60 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (local_60 == 0) {
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_delegate);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_60;
      local_60 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    local_80[0] = 0;
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_inputToolView_0269d0e8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) != 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_80[0];
      local_80[0] = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar3 = local_80[0];
    if ((local_60 == 0) && (local_80[0] != 0)) {
      pcVar6 = &cf_SendImageMessage_withData_ImageInfo_;
      _NSSelectorFromString(&cf_SendImageMessage_withData_ImageInfo_);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_respondsToSelector__026ca818,pcVar6);
      if ((IVar3 & 1) != 0) {
        _objc_storeStrong(&local_60,local_80[0]);
      }
    }
    pcVar6 = &cf_SendImageMessage_withData_ImageInfo_;
    _NSSelectorFromString();
    local_88 = pcVar6;
    if ((local_60 == 0) ||
       (IVar3 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar6),
       (IVar3 & 1) == 0)) {
LAB_009539a4:
      local_21 = 0;
      local_44 = 1;
    }
    else {
      local_f0 = &cf_ImageInfo;
      _NSClassFromString();
      local_a1 = local_f0 == (cfstringStruct *)0x0;
      local_90 = local_f0;
      if (local_a1) {
        local_f0 = (cfstringStruct *)0x0;
      }
      else {
        _objc_alloc_init();
        local_a0 = local_f0;
      }
      local_a1 = !local_a1;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_f0;
      if (local_a1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      pcVar6 = local_98;
      if (local_98 != (cfstringStruct *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_setValue_forKey__0269d300,puVar7,&cf_isOriginImage);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,local_88,local_40,local_50,local_98);
      local_21 = 1;
      local_44 = 1;
      _objc_storeStrong(&local_98,0);
      if (local_44 == 0) goto LAB_009539a4;
    }
    _objc_storeStrong(local_80);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_009539fc:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

