// FUN_0032d4b8 @ 0032d4b8

/* WARNING: Removing unreachable block (ram,0x0032e5dc) */

void FUN_0032d4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  cfstringStruct *local_338;
  uint local_310;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2b0;
  uint local_264;
  cfstringStruct *local_258;
  cfstringStruct *local_238;
  cfstringStruct *local_208;
  cfstringStruct *local_1e0;
  uint local_11c;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d2;
  char local_d1;
  cfstringStruct *local_d0;
  char local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  char local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined1 local_79;
  cfstringStruct *local_78;
  char local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  char local_41;
  undefined *local_40;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  ppuVar4 = &PTR___tlv_bootstrap_028c7908;
  (*(code *)PTR___tlv_bootstrap_028c7908)();
  local_41 = '\0';
  local_11c = 1;
  if (((ulong)*ppuVar4 & 1) == 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    _objc_msgSend(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = '\x01';
    local_40 = puVar5;
    _objc_msgSend();
    pcVar7 = local_28;
    local_11c = 1;
    if (((ulong)puVar5 & 1) != 0) {
      pcVar6 = &cf_ContactsViewController;
      _NSClassFromString();
      _objc_msgSend(pcVar7,PTR_s_isKindOfClass__0269cd68,pcVar6);
      local_11c = (uint)pcVar7 ^ 1;
    }
  }
  if (local_41 == '\x01') {
    _objc_release(0,local_40);
  }
  if ((local_11c & 1) == 0) {
    pcVar7 = local_28;
    FUN_0032e724();
    local_50 = pcVar7;
    if ((long)pcVar7 < 0) {
      local_48 = 1;
    }
    else {
      pcVar7 = local_28;
      _objc_msgSend(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar7;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar6;
      _objc_release(pcVar7);
      pcVar7 = local_58;
      FUN_0032ed50();
      _objc_retainAutoreleasedReturnValue();
      local_69 = '\0';
      local_79 = 0;
      bVar3 = false;
      uVar1 = pcVar7 == (cfstringStruct *)0x0;
      local_60 = pcVar7;
      if ((bool)uVar1) {
        pcVar7 = local_28;
        _objc_msgSend(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_69 = '\x01';
        local_68 = pcVar7;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        bVar3 = pcVar7 != (cfstringStruct *)0x0;
        local_79 = uVar1;
        local_78 = pcVar7;
        _objc_release(0,pcVar7);
        uVar1 = local_79;
      }
      local_79 = uVar1;
      if (local_69 == '\x01') {
        _objc_release(0,local_68);
      }
      if (bVar3) {
        pcVar6 = local_28;
        _objc_msgSend(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar6;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar8;
        FUN_0032ed50();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_60;
        local_60 = pcVar9;
        _objc_release(pcVar7);
        _objc_release(pcVar8);
        _objc_release(pcVar6);
      }
      pcVar7 = local_28;
      _objc_msgSend(local_28,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar7;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_1e0 = &cf___;
      }
      _objc_retain();
      local_88 = local_1e0;
      _objc_release(pcVar6);
      _objc_release(pcVar7);
      pcVar7 = local_88;
      _objc_msgSend(local_88,PTR_s_length_0269cca0);
      if (pcVar7 == (cfstringStruct *)0x0) {
        pcVar7 = local_28;
        _objc_msgSend(local_28,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        local_208 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_208 = &cf___;
        }
        _objc_storeStrong(&local_88,local_208);
        _objc_release(pcVar7);
      }
      pcVar7 = local_88;
      _objc_msgSend(local_88,PTR_s_length_0269cca0);
      if (pcVar7 == (cfstringStruct *)0x0) {
        pcVar7 = local_28;
        _objc_msgSend(local_28,PTR_s_tabBarItem_026a20c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar7;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        local_238 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_238 = &cf___;
        }
        _objc_storeStrong(&local_88,local_238);
        _objc_release(pcVar6);
        _objc_release(pcVar7);
      }
      pcVar7 = local_88;
      _objc_msgSend(local_88,PTR_s_length_0269cca0);
      if (pcVar7 == (cfstringStruct *)0x0) {
        pcVar7 = local_60;
        _objc_msgSend(local_60,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_258 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_258 = &cf___;
        }
        _objc_storeStrong(&local_88,local_258);
        _objc_release(pcVar7);
      }
      local_91 = '\0';
      pcVar7 = local_88;
      _objc_msgSend(local_88,PTR_s_length_0269cca0);
      local_264 = 0;
      if (pcVar7 == (cfstringStruct *)0x0) {
        pcVar7 = local_60;
        _objc_msgSend(local_60,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        local_91 = '\x01';
        puVar5 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
        local_90 = pcVar7;
        _objc_msgSend(PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
        _objc_msgSend(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_264 = (uint)pcVar7;
      }
      if (local_91 == '\x01') {
        _objc_release(0,local_90);
      }
      if ((local_264 & 1) != 0) {
        pcVar7 = local_60;
        _objc_msgSend(local_60,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar7;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_2b0 = &cf___;
        }
        _objc_storeStrong(&local_88,local_2b0);
        _objc_release(pcVar6);
        _objc_release(pcVar7);
      }
      pcVar7 = local_88;
      _objc_msgSend(local_88,PTR_s_length_0269cca0);
      if (pcVar7 == (cfstringStruct *)0x0) {
        pcVar7 = (cfstringStruct *)PTR__OBJC_CLASS___NSLocale_026ce0a0;
        _objc_msgSend(PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_preferredLanguages_026a20c8);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar7;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        local_2e0 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_2e0 = &cf___;
        }
        _objc_retain();
        local_a0 = local_2e0;
        _objc_release(pcVar6);
        _objc_release(pcVar7);
        pcVar6 = local_a0;
        _objc_msgSend(local_a0,PTR_s_hasPrefix__0269d320,&cf_en);
        pcVar7 = &cf_Contacts;
        if (((ulong)pcVar6 & 1) == 0) {
          pcVar7 = &cf_U_;
        }
        _objc_storeStrong(&local_88,pcVar7);
        _objc_storeStrong(&local_a0,0);
      }
      pcVar7 = local_88;
      FUN_0032f548();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_a8 = pcVar7;
      _objc_msgSend(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld_
                   );
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_60;
      local_b0 = puVar5;
      FUN_0032f8b8();
      _objc_retainAutoreleasedReturnValue();
      local_c1 = '\0';
      local_d1 = '\0';
      puVar10 = local_b0;
      local_b8 = pcVar7;
      _objc_msgSend(local_b0,PTR_s_isEqualToString__0269ccc8,local_88);
      puVar5 = local_b0;
      local_310 = 0;
      if (((ulong)puVar10 & 1) != 0) {
        pcVar7 = local_28;
        _objc_msgSend(local_28,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        local_c1 = '\x01';
        local_c0 = pcVar7;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        local_d1 = '\x01';
        local_338 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_338 = &cf___;
        }
        local_d0 = pcVar7;
        _objc_msgSend(puVar5,PTR_s_isEqualToString__0269ccc8,local_338);
        local_310 = 0;
        if ((((ulong)puVar5 & 1) != 0) && (local_310 = 0, local_60 != (cfstringStruct *)0x0)) {
          pcVar7 = local_b8;
          _objc_msgSend(local_b8,PTR_s_isEqualToString__0269ccc8,local_b0);
          local_310 = (uint)pcVar7;
        }
      }
      if (local_d1 == '\x01') {
        _objc_release(0,local_d0);
      }
      if (local_c1 == '\x01') {
        _objc_release(0,local_c0);
      }
      if ((local_310 & 1) == 0) {
        local_d2 = '\0';
        ppuVar4 = &PTR___tlv_bootstrap_028c7908;
        (*(code *)PTR___tlv_bootstrap_028c7908)();
        *(undefined1 *)ppuVar4 = 1;
        pcVar7 = local_28;
        _objc_msgSend(local_28,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend();
        _objc_release(pcVar7);
        FUN_0032fc90(local_58,local_a8,local_b0);
        pcVar7 = local_28;
        _objc_msgSend(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar7;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(pcVar7);
        if (pcVar6 != (cfstringStruct *)0x0) {
          pcVar7 = local_28;
          _objc_msgSend(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar7;
          _objc_msgSend();
          _objc_retainAutoreleasedReturnValue();
          FUN_0032fc90();
          _objc_release(pcVar6);
          _objc_release(pcVar7);
        }
        pcVar7 = local_60;
        _objc_msgSend(local_60,PTR_s_respondsToSelector__026ca818,
                      PTR_s_invalidateIntrinsicContentSize_026a20d0);
        if (((ulong)pcVar7 & 1) != 0) {
          _objc_msgSend(local_60,PTR_s_invalidateIntrinsicContentSize_026a20d0);
        }
        pcVar7 = local_60;
        puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_msgSend(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        _objc_msgSend(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)pcVar7 & 1) != 0) {
          _objc_msgSend(local_60,PTR_s_center_026ca560);
          local_e8 = param_1;
          uStack_e0 = param_2;
          _objc_msgSend(local_60,PTR_s_sizeToFit_0269ec08);
          uStack_f8 = uStack_e0;
          local_100 = local_e8;
          uStack_108 = uStack_e0;
          local_110 = local_e8;
          _objc_msgSend(local_e8,uStack_e0,local_60,PTR_s_setCenter__026ca8c0);
        }
        pcVar7 = local_60;
        _objc_msgSend(local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
        if (((ulong)pcVar7 & 1) != 0) {
          _objc_msgSend(local_60,PTR_s_setNeedsLayout_0269deb8);
        }
        pcVar7 = local_60;
        _objc_msgSend(local_60,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar7;
        _objc_msgSend(pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
        if (((ulong)pcVar7 & 1) != 0) {
          _objc_msgSend(local_118,PTR_s_setNeedsLayout_0269deb8);
        }
        pcVar7 = local_58;
        _objc_msgSend(local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
        if (((ulong)pcVar7 & 1) != 0) {
          _objc_msgSend(local_58,PTR_s_setNeedsLayout_0269deb8);
        }
        pcVar7 = local_58;
        _objc_msgSend(local_58,PTR_s_respondsToSelector__026ca818,PTR_s_layoutIfNeeded_026ca790);
        if (((ulong)pcVar7 & 1) != 0) {
          _objc_msgSend(local_58,PTR_s_layoutIfNeeded_026ca790);
        }
        _objc_storeStrong(&local_118,0);
        local_48 = 0;
        ppuVar4 = &PTR___tlv_bootstrap_028c7908;
        (*(code *)PTR___tlv_bootstrap_028c7908)();
        *(undefined1 *)ppuVar4 = 0;
        if (local_d2 == '\x01') {
          _objc_exception_rethrow(0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x32e5cc);
          (*pcVar2)();
        }
        local_48 = 0;
      }
      else {
        local_48 = 1;
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

