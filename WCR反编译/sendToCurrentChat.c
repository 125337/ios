// sendToCurrentChat @ 016740c4

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::sendToCurrentChat(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_280;
  cfstringStruct *local_228;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c8;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  ID local_120;
  cfstringStruct *local_118 [4];
  bool local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  ID local_c8;
  byte local_ba;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ID local_78 [3];
  ID local_60;
  cfstringStruct *local_58;
  ID local_50;
  ID local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imagePreparedForExport_026b2668);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  if (IVar2 == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasActiveCropSelection_026b1f60);
    if ((IVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSOX_vVGr);
    }
    local_3c = 1;
  }
  else {
    local_3d = 0;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_exportDataForImage_preferPNG_026b2678,IVar2,&local_3d);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
      local_3c = 1;
    }
    else {
      FUN_0163f728();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
      local_50 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,IVar3);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_50;
      local_58 = pcVar4;
      if ((pcVar4 == (cfstringStruct *)0x0) && (local_50 != 0)) {
        local_60 = 0;
        pcVar4 = &cf_getSessionName;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_respondsToSelector__026ca818,pcVar4);
        IVar3 = local_50;
        if ((IVar2 & 1) != 0) {
          pcVar4 = &cf_getSessionName;
          _NSSelectorFromString();
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_60;
          local_60 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        IVar2 = local_60;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((IVar2 & 1) == 0) ||
           (IVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
           IVar2 == 0)) {
          IVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_m_contact);
          _objc_retainAutoreleasedReturnValue();
          local_78[0] = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
          if ((IVar2 & 1) != 0) {
            IVar3 = local_78[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            IVar2 = local_60;
            local_60 = IVar3;
            (*(code *)PTR__objc_release_02578630)(IVar2);
          }
          _objc_storeStrong(local_78,0);
        }
        IVar2 = local_60;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((IVar2 & 1) != 0) &&
           (IVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
           IVar2 != 0)) {
          pcVar4 = &cf_MMServiceCenter;
          _NSClassFromString(IVar2);
          pcVar6 = &cf_CContactMgr;
          local_88 = pcVar4;
          _NSClassFromString();
          local_a1 = false;
          bVar1 = local_88 == (cfstringStruct *)0x0;
          local_90 = pcVar6;
          if (bVar1) {
            local_1c8 = (cfstringStruct *)0x0;
          }
          else {
            local_1c8 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_defaultCenter_026ca5e0);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_1c8;
          }
          local_a1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_1c8;
          if ((local_a1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          local_b9 = 0;
          if (((local_98 == (cfstringStruct *)0x0) || (local_90 == (cfstringStruct *)0x0)) ||
             (pcVar4 = local_98,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
             ((ulong)pcVar4 & 1) == 0)) {
            local_1d8 = (cfstringStruct *)0x0;
          }
          else {
            local_1d8 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_getService__0269d170,local_90);
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = local_1d8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_1d8;
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if ((local_b0 != (cfstringStruct *)0x0) &&
             (pcVar4 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178
                       ), ((ulong)pcVar4 & 1) != 0)) {
            pcVar6 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_getContactByName__0269d178,local_60);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_58;
            local_58 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_98,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      if ((local_50 == 0) || (local_58 == (cfstringStruct *)0x0)) {
        pcVar4 = &cf_el_MOS_MRJ_Y;
        if (local_50 == 0) {
          pcVar4 = &cf_S_MRN_WJ_Yu;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar4);
        local_3c = 1;
      }
      else {
        local_ba = 0;
        local_c8 = 0;
        if ((local_50 != 0) &&
           (IVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0),
           (IVar2 & 1) != 0)) {
          IVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_delegate_0269d0e0);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_c8;
          local_c8 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        if (local_c8 == 0) {
          IVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_m_delegate)
          ;
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_c8;
          local_c8 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        pcVar4 = &cf_SendImageMessage_withData_ImageInfo_;
        _NSSelectorFromString();
        local_d8 = pcVar4;
        if ((local_c8 != 0) &&
           (IVar2 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,pcVar4)
           , (IVar2 & 1) != 0)) {
          local_228 = &cf_ImageInfo;
          _NSClassFromString();
          local_f1 = false;
          bVar1 = local_228 == (cfstringStruct *)0x0;
          local_e0 = local_228;
          if (bVar1) {
            local_228 = (cfstringStruct *)0x0;
          }
          else {
            _objc_alloc_init();
            local_f0 = local_228;
          }
          local_f1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_e8 = local_228;
          if ((local_f1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_f0);
          }
          pcVar4 = local_e8;
          if (local_e8 != (cfstringStruct *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_setValue_forKey__0269d300,puVar5,&cf_isOriginImage);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            pcVar4 = local_e8;
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_setValue_forKey__0269d300,puVar5,&cf_m_uiImageSource);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d8,local_38,local_48,local_e8);
            local_ba = 1;
          }
          _objc_storeStrong(&local_e8,0);
        }
        if ((local_ba & 1) == 0) {
          local_118[0] = (cfstringStruct *)0x0;
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_118[0];
            local_118[0] = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_buildImageMessageWrapForSend_026b2670,local_38,local_48,
                     local_118[0]);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = &cf_ForwardMessageLogicController;
          local_120 = IVar2;
          _NSClassFromString();
          pcVar6 = &cf_ForwardMsg_ToContact_;
          local_128 = pcVar4;
          _NSSelectorFromString();
          local_141 = local_128 == (cfstringStruct *)0x0;
          local_130 = pcVar6;
          if (local_141) {
            local_280 = (cfstringStruct *)0x0;
          }
          else {
            local_280 = local_128;
            _objc_alloc_init();
            local_140 = local_280;
          }
          local_141 = !local_141;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = local_280;
          if (local_141) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if (((local_120 != 0) && (local_138 != (cfstringStruct *)0x0)) &&
             (pcVar4 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_138,PTR_s_respondsToSelector__026ca818,local_130),
             ((ulong)pcVar4 & 1) != 0)) {
            FUN_01673b28(0x4014000000000000,local_138);
            (*(code *)PTR__objc_msgSend_02578628)(local_138,local_130,local_120,local_58);
            local_ba = 1;
          }
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(local_118,0);
        }
        if ((local_ba & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__S0RS_MRJ_Y);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissCropWindow_026b2460);
        }
        _objc_storeStrong(&local_c8,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

