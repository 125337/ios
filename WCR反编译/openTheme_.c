// openTheme: @ 0175c1cc

/* Function Stack Size: 0x18 bytes */

void ThemeExchangeViewController::openTheme_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  ID IVar8;
  cfstringStruct *local_290;
  cfstringStruct *local_280;
  cfstringStruct *local_268;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  cfstringStruct *local_200;
  undefined *local_170;
  undefined *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  undefined1 local_131;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_48;
  local_50 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_box);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_77Theme);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_ThemePro);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_xg_N);
        if ((uVar1 & 1) == 0) {
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_131 = SUB81(puVar5,0);
          if (((ulong)puVar5 & 1) != 0) {
            pcVar6 = "MMServiceCenter";
            _objc_getClass();
            local_140 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_s_getService__0269d170;
            pcVar7 = "CContactMgr";
            local_148 = pcVar6;
            _objc_getClass("CContactMgr");
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar7);
            _objc_retainAutoreleasedReturnValue();
            local_150 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_158 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
            _objc_retainAutoreleasedReturnValue();
            local_160 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
              _objc_retainAutoreleasedReturnValue();
              local_168 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setString__0269ccf8,local_160);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                         &cf__OS_Y6R0R_4_g);
              _objc_storeStrong(&local_168,0);
            }
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_158,0);
            _objc_storeStrong(&local_150,0);
            _objc_storeStrong(&local_148,0);
          }
          puVar5 = PTR_WebViewController_026cef88;
          _objc_alloc();
          puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_initWithURL_title__026b4308,puVar4,local_50);
          local_170 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          IVar8 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar8);
          _objc_storeStrong(&local_170,0);
        }
        else {
          pcVar6 = "MMServiceCenter";
          _objc_getClass();
          local_f8 = (cfstringStruct *)pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_s_getService__0269d170;
          pcVar7 = "CContactMgr";
          local_100 = (cfstringStruct *)pcVar6;
          _objc_getClass("CContactMgr");
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar7);
          _objc_retainAutoreleasedReturnValue();
          local_108 = (cfstringStruct *)pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_110 = (cfstringStruct *)pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
          local_268 = (cfstringStruct *)pcVar6;
          if ((cfstringStruct *)pcVar6 == (cfstringStruct *)0x0) {
            local_268 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = local_268;
          local_280 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
          if (local_280 == (cfstringStruct *)0x0) {
            local_280 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_280;
          pcVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_290 = local_120;
          }
          else {
            local_290 = local_118;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_290;
          (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0);
          if (local_290 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                       &cf_elSS_MR_SOo_zTQ);
          }
          else {
            puVar4 = PTR_SuanGuoRedeemViewController_026cef80;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            IVar8 = local_28;
            local_130 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar8);
            pcVar3 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
            if ((pcVar3 == (cfstringStruct *)0x0) &&
               (pcVar3 = local_120,
               (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0),
               pcVar3 != (cfstringStruct *)0x0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0R_OS_RV
                        );
            }
            _objc_storeStrong(&local_130,0);
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(&local_118,0);
          _objc_storeStrong(&local_110,0);
          _objc_storeStrong(&local_108,0);
          _objc_storeStrong(&local_100,0);
        }
      }
      else {
        pcVar6 = "MMServiceCenter";
        _objc_getClass();
        local_b8 = (cfstringStruct *)pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_s_getService__0269d170;
        pcVar7 = "CContactMgr";
        local_c0 = (cfstringStruct *)pcVar6;
        _objc_getClass("CContactMgr");
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar7);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = (cfstringStruct *)pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = (cfstringStruct *)pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
        local_200 = (cfstringStruct *)pcVar6;
        if ((cfstringStruct *)pcVar6 == (cfstringStruct *)0x0) {
          local_200 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = local_200;
        local_218 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
        if (local_218 == (cfstringStruct *)0x0) {
          local_218 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = local_218;
        pcVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_228 = local_e0;
        }
        else {
          local_228 = local_d8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
        if (local_228 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MR_SOo_zTQ
                    );
        }
        else {
          puVar4 = PTR_ThemeProRedeemViewController_026cef78;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          IVar8 = local_28;
          local_f0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar8);
          pcVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
          if ((pcVar3 == (cfstringStruct *)0x0) &&
             (pcVar3 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
             pcVar3 != (cfstringStruct *)0x0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0R_OS_RV);
          }
          _objc_storeStrong(&local_f0,0);
        }
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_e0,0);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_c0,0);
      }
    }
    else {
      pcVar6 = "MMServiceCenter";
      _objc_getClass();
      local_88 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_s_getService__0269d170;
      pcVar7 = "CContactMgr";
      local_90 = pcVar6;
      _objc_getClass("CContactMgr");
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar7);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar6;
      if ((pcVar6 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0), pcVar6 == (char *)0x0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_v_OSzTQ);
      }
      else {
        puVar4 = PTR_RX77ThemeRedeemViewController_026cef70;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar8 = local_28;
        local_b0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
  }
  else {
    pcVar6 = "MMServiceCenter";
    _objc_getClass();
    local_58 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_getService__0269d170;
    pcVar7 = "CContactMgr";
    local_60 = pcVar6;
    _objc_getClass("CContactMgr");
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar7);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar6;
    if ((pcVar6 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0), pcVar6 == (char *)0x0))
    {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_vW);
    }
    else {
      puVar4 = PTR_ThemeBoxRedeemViewController_026cef68;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar8 = local_28;
      local_80 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar8);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

