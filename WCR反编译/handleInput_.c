// handleInput: @ 00f310a4

/* Function Stack Size: 0x18 bytes */

void WCREmoticonInputProxy::handleInput_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  double local_50;
  int local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  dVar1 = DAT_02323dc8;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelfRef__0269fb58,0);
    local_44 = 1;
  }
  else {
    local_50 = 0.0;
    local_58 = 0;
    uStack_68 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
    uVar9 = *(undefined8 *)PTR__CGSizeZero_025782f8;
    IVar5 = local_28;
    local_70 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
    fVar8 = (float)uVar9;
    if (IVar5 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_floatValue_026a5b48);
      puVar4 = PTR_WCRefineEmoticonToolsHelper_026ce448;
      dVar10 = (double)fVar8;
      local_50 = dVar10;
      if ((dVar10 < dVar1) || (100.0 < dVar10)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelfRef__0269fb58,0);
        local_44 = 1;
        goto LAB_00f31898;
      }
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emoticonMD5_026abfa8);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatVC_026abfb0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar10,puVar4,PTR_s_performSpeed_md5_chatVC__026abfb8,IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
      if (IVar5 == 1) {
        puVar6 = PTR_WCRefineEmoticonToolsHelper_026ce448;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonToolsHelper_026ce448,
                   PTR_s_parseResizeInput_scale_size__026abfc0,local_40,&local_58,&local_70);
        uVar9 = local_58;
        puVar4 = PTR_WCRefineEmoticonToolsHelper_026ce448;
        if (((ulong)puVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h_0);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelfRef__0269fb58,0);
          local_44 = 1;
          goto LAB_00f31898;
        }
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emoticonMD5_026abfa8);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatVC_026abfb0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,local_70,uStack_68,puVar4,PTR_s_performResizeScale_size_md5_chat_026abfc8,
                   IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar7);
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      else {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
        if (uVar2 < 2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h__Y__);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelfRef__0269fb58,0);
          local_44 = 1;
        }
        else {
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,0)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,1)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_88 = uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_floatValue_026a5b48);
          local_50 = (double)fVar8;
          if (((local_50 < dVar1) || (100.0 < local_50)) ||
             (puVar6 = PTR_WCRefineEmoticonToolsHelper_026ce448,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefineEmoticonToolsHelper_026ce448,
                        PTR_s_parseResizeInput_scale_size__026abfc0,local_80,&local_58,&local_70),
             dVar1 = local_50, uVar9 = local_58, puVar4 = PTR_WCRefineEmoticonToolsHelper_026ce448,
             ((ulong)puVar6 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h__Y__);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelfRef__0269fb58,0);
            local_44 = 1;
          }
          else {
            IVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emoticonMD5_026abfa8);
            _objc_retainAutoreleasedReturnValue();
            IVar7 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatVC_026abfb0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,local_70,uStack_68,dVar1,puVar4,
                       PTR_s_performResizeScale_size_speed_md_026abfd0,IVar5);
            (*(code *)PTR__objc_release_02578630)(IVar7);
            (*(code *)PTR__objc_release_02578630)(IVar5);
            local_44 = 0;
          }
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_78,0);
        if (local_44 != 0) goto LAB_00f31898;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelfRef__0269fb58,0);
    local_44 = 0;
  }
LAB_00f31898:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

