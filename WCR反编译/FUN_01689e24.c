// FUN_01689e24 @ 01689e24

void FUN_01689e24(double param_1,long param_2)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_220;
  double local_1f0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_190;
  cfstringStruct *local_178;
  cfstringStruct *local_158;
  cfstringStruct *local_148;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  ulong local_110;
  bool local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_2;
  if (*(long *)(param_2 + 0x20) != 0) {
LAB_01689e78:
    puVar5 = PTR_WCRefineHelper_026ce000;
    pcVar4 = *(cfstringStruct **)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_148 = &cf_Q__;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__v__1Y_,local_148,&cf_wSN,
               0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) goto LAB_01689e78;
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_2 + 0x28),0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)pcVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__v_Velg);
    local_3c = 1;
    goto LAB_0168aed8;
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_error_code);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if (((ulong)pcVar4 & 1) == 0) {
    local_158 = (cfstringStruct *)0x0;
  }
  else {
    local_158 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750);
  }
  local_50 = local_158;
  local_61 = 0;
  bVar2 = true;
  if (local_158 != (cfstringStruct *)0x0) {
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqual__0269e9a8,&cf_0);
    bVar2 = true;
    if ((((ulong)pcVar4 & 1) == 0) && (bVar2 = false, local_48 == (cfstringStruct *)0x0)) {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      bVar2 = pcVar4 != (cfstringStruct *)0x0;
      local_60 = pcVar4;
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar4 = local_38;
  local_51 = bVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_79 = false;
  bVar2 = ((ulong)pcVar6 & 1) == 0;
  if (bVar2) {
    local_178 = (cfstringStruct *)0x0;
  }
  else {
    local_178 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_178;
  }
  local_79 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_178;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_sumDst)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_91 = false;
  bVar2 = ((ulong)pcVar6 & 1) == 0;
  if (bVar2) {
    local_190 = (cfstringStruct *)0x0;
  }
  else {
    local_190 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_sumDst);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_190;
  }
  local_91 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_190;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_sumSrc)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_a9 = false;
  bVar2 = ((ulong)pcVar6 & 1) == 0;
  if (bVar2) {
    local_1a8 = (cfstringStruct *)0x0;
  }
  else {
    local_1a8 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_sumSrc);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_1a8;
  }
  local_a9 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_1a8;
  if ((local_a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  local_b8 = (cfstringStruct *)0x0;
  pcVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_pasteImg);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_dst_paste_img);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (((ulong)pcVar6 & 1) != 0) {
      pcVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_dst_paste_img);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_b8;
      local_b8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
  }
  else {
    pcVar6 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_pasteImg);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_b8;
    local_b8 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  local_c0 = (undefined *)0x0;
  pcVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (pcVar4 != (cfstringStruct *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    if (puVar5 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar5;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGImage_0269e0e8);
      if (puVar5 == (undefined *)0x0) {
        _objc_storeStrong(&local_c0,local_d0);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar7 = local_d0;
        puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_e8 = 0x3ff0000000000000;
        local_1f0 = param_1;
        if (param_1 < 1.0) {
          local_1f0 = 1.0;
        }
        local_f0 = local_1f0;
        local_d8 = local_1f0;
        local_e0 = param_1;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGImage_0269e0e8);
        dVar1 = local_d8;
        puVar8 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_imageOrientation_0269f430);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar1,puVar5,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar7,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_c0;
        local_c0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  if (((local_51 & 1) == 0) ||
     ((pcVar4 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
      pcVar4 == (cfstringStruct *)0x0 && (local_c0 == (undefined *)0x0)))) {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_error_msg);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_101 = false;
    bVar2 = ((ulong)pcVar6 & 1) == 0;
    if (bVar2) {
      local_220 = &cf__gw;
    }
    else {
      local_220 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_error_msg);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_220;
    }
    local_101 = !bVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_220;
    if ((local_101 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__v__1Y_,puVar7,&cf_wSN);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_3c = 1;
    _objc_storeStrong(&local_f8,0);
  }
  else {
    pcVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar4 != (cfstringStruct *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    uVar9 = param_2 + 0x30;
    _objc_loadWeakRetained();
    local_110 = uVar9;
    if ((local_c0 == (undefined *)0x0) || (uVar9 == 0)) {
LAB_0168acb8:
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_2a0 = &cf_e4V_g_Y6Re;
      }
      else {
        local_2a0 = local_88;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = local_2a0;
      puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,
                 local_2a0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_a0;
      local_128 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      puVar5 = local_128;
      if (pcVar4 != (cfstringStruct *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Se_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_insertString_atIndex__026ad120,puVar7,0);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      puVar7 = local_128;
      puVar5 = PTR_WCRefineHelper_026ce000;
      pcVar6 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      pcVar4 = &cf__Y6Re;
      if (pcVar6 == (cfstringStruct *)0x0) {
        pcVar4 = &cf_wSN;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__v_VGr_,puVar7,pcVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      local_3c = 0;
    }
    else {
      pcVar4 = &cf_showTranslateSticker_resultText_;
      _NSSelectorFromString();
      uVar9 = local_110;
      local_118 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar9 & 1) == 0) {
        uVar9 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_respondsToSelector__026ca818,PTR_s_showTranslateSticker__026b26c0
                  );
        if ((uVar9 & 1) == 0) goto LAB_0168acb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_showTranslateSticker__026b26c0,local_c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4V_SR_W_S);
        local_3c = 1;
      }
      else {
        if (local_88 == (cfstringStruct *)0x0) {
          local_298 = &cf___;
        }
        else {
          local_298 = local_88;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_110,local_118,local_c0,local_298);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4V_SR_W_S);
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
LAB_0168aed8:
  _objc_storeStrong(&local_38,0);
  return;
}

