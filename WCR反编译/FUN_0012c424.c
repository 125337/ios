// FUN_0012c424 @ 0012c424

void FUN_0012c424(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5,
                 undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double local_550;
  double local_548;
  cfstringStruct *local_340;
  ulong local_148;
  ulong local_140;
  byte local_132;
  byte local_131;
  ulong local_128 [2];
  ulong local_118;
  ulong local_110 [2];
  ulong local_100 [2];
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined1 *local_d0;
  ulong local_c8;
  undefined4 local_c0;
  bool local_b9;
  cfstringStruct *local_b8;
  undefined1 local_aa;
  undefined1 local_a9;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  uint local_8c;
  ulong local_88;
  byte local_79;
  ulong local_78;
  uint local_6c;
  ulong local_68;
  ulong local_60 [3];
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_6;
  local_40 = param_5;
  (*DAT_028c8648)(param_5,param_6);
  uVar8 = local_40;
  FUN_0012e2f4();
  uVar2 = (uint)uVar8;
  if ((uVar8 & 1) != 0) goto LAB_0012dd80;
  FUN_0012e3fc();
  if ((uVar2 & 1) == 0) {
    uVar8 = local_40;
    FUN_0012f0c4();
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = uVar8;
    if (uVar8 != 0) {
      FUN_0012f148(uVar8,1);
    }
    _objc_storeStrong(local_60,0);
    goto LAB_0012dd80;
  }
  uVar8 = local_40;
  FUN_0012f0c4();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar8;
  if (uVar8 == 0) {
    local_6c = 1;
  }
  else {
    uVar8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar8;
    if ((uVar8 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
       (uVar8 & 1) == 0)) {
      FUN_0012f148(local_68,1);
      local_6c = 1;
    }
    else {
      uVar8 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isSender_0269d1b0);
      local_79 = (byte)uVar8;
      uVar8 = local_78;
      FUN_0012f220();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar8 == 0) {
        uVar8 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
        if ((uVar8 & 1) == 0) {
          uVar8 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_createTime_0269f088);
          if ((uVar8 & 1) != 0) {
            uVar8 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_valueForKey__0269d128,&cf_createTime);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_78;
            uVar7 = uVar9 & 0xffffffff;
            local_c0 = (int)uVar9;
            FUN_0012f354();
            _objc_retainAutoreleasedReturnValue();
            FUN_0012f2a4(uVar8);
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
        }
        else {
          uVar8 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_messageWrap_0269d070);
          _objc_retainAutoreleasedReturnValue();
          local_88 = uVar8;
          if ((uVar8 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiCreateTime_0269d208),
             (uVar8 & 1) != 0)) {
            uVar9 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiCreateTime_0269d208);
            uVar8 = local_78;
            local_8c = (uint)uVar9;
            pcVar4 = &cf_TextMessageSubViewModel;
            _NSClassFromString();
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,pcVar4);
            uVar9 = local_78;
            if ((uVar8 & 1) == 0) {
              uVar8 = (ulong)local_8c;
              FUN_0012f354();
              _objc_retainAutoreleasedReturnValue();
              FUN_0012f2a4(uVar9);
              (*(code *)PTR__objc_release_02578630)(uVar8);
            }
            else {
              uVar8 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_valueForKey__0269d128,&cf_parentModel);
              _objc_retainAutoreleasedReturnValue();
              local_98 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_valueForKey__0269d128,&cf_subViewModels);
              _objc_retainAutoreleasedReturnValue();
              local_a0 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_count_0269cfe0);
              if (uVar8 != 0) {
                uVar8 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_indexOfObject__0269e870,local_78);
                puVar5 = PTR_WCRefineConfig_026cdf58;
                local_a8 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar1 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                uVar8 = local_a8;
                local_a9 = bVar1;
                if (bVar1) {
                  local_aa = local_a8 == 0;
                }
                else {
                  uVar9 = local_a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
                  local_aa = uVar8 == uVar9 - 1;
                }
                uVar8 = local_78;
                local_b9 = false;
                bVar1 = (bool)local_aa == false;
                if (bVar1) {
                  local_340 = &cf__1;
                }
                else {
                  local_340 = (cfstringStruct *)(ulong)local_8c;
                  FUN_0012f354();
                  _objc_retainAutoreleasedReturnValue();
                  local_b8 = local_340;
                }
                local_b9 = !bVar1;
                FUN_0012f2a4(uVar8,local_340);
                if ((local_b9 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_b8);
                }
              }
              _objc_storeStrong(&local_a0);
              _objc_storeStrong(&local_98,0);
            }
          }
          _objc_storeStrong(&local_88,0);
        }
      }
      uVar8 = local_78;
      FUN_0012f220();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
      if ((uVar8 == 0) ||
         (uVar8 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf__1),
         (uVar8 & 1) != 0)) {
        FUN_0012f148(local_68,1);
        local_6c = 1;
      }
      else {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_chatTimePlacement_0269f080);
        if ((puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) &&
           (puVar6 = local_d0,
           (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_chatTimeCompatMergeEnabled_0269f090)
           , ((ulong)puVar6 & 1) != 0)) {
          uVar8 = local_40;
          FUN_0012f5e4();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = local_40;
          local_d8 = uVar8;
          FUN_0012fb18(local_40,uVar8);
          bVar1 = (uVar9 & 1) == 0;
          if (bVar1) {
            FUN_0012f148(local_68,1);
          }
          local_6c = (uint)bVar1;
          _objc_storeStrong(&local_d8,0);
          if (local_6c == 0) goto LAB_0012ce54;
        }
        else {
LAB_0012ce54:
          uVar8 = local_c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = uVar8;
          uVar8 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_<STATUS_PLACEHOLDER>);
          if ((uVar8 & 1) == 0) {
            uVar8 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsString__0269d0b0,&cf__O_);
            if ((uVar8 & 1) != 0) {
              uVar8 = local_78;
              FUN_0012fe84();
              _objc_retainAutoreleasedReturnValue();
              local_110[0] = uVar8;
              if (uVar8 == 0) {
                local_118 = 0;
                uVar8 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
                if ((uVar8 & 1) != 0) {
                  uVar9 = local_78;
                  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_messageWrap_0269d070);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = local_118;
                  local_118 = uVar9;
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                }
                if (local_118 == 0) {
                  uVar9 = local_e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__O_,&cf__)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = local_e0;
                  local_e0 = uVar9;
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  FUN_00131590(local_78,&cf__);
                }
                else {
                  uVar8 = local_118;
                  FUN_0012ff08();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = local_e0;
                  local_128[0] = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__O_,uVar8)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = local_e0;
                  local_e0 = uVar9;
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  FUN_00131590(local_78,local_128[0]);
                  _objc_storeStrong(local_128,0);
                }
                _objc_storeStrong(&local_118,0);
              }
              else {
                uVar9 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__O_,uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = local_e0;
                local_e0 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar8);
              }
              _objc_storeStrong(local_110,0);
            }
          }
          else {
            uVar8 = local_78;
            FUN_0012fe84();
            _objc_retainAutoreleasedReturnValue();
            local_e8 = uVar8;
            if (uVar8 == 0) {
              local_f0 = 0;
              uVar8 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
              if ((uVar8 & 1) != 0) {
                uVar9 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_messageWrap_0269d070);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = local_f0;
                local_f0 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar8);
              }
              if (local_f0 == 0) {
                _objc_storeStrong(&local_e0);
                FUN_00131590(local_78,&cf__);
              }
              else {
                uVar8 = local_f0;
                FUN_0012ff08();
                _objc_retainAutoreleasedReturnValue();
                local_100[0] = uVar8;
                _objc_storeStrong(&local_e0,uVar8);
                FUN_00131590(local_78,local_100[0]);
                _objc_storeStrong(local_100,0);
              }
              _objc_storeStrong(&local_f0,0);
            }
            else {
              _objc_storeStrong(&local_e0,uVar8);
            }
            _objc_storeStrong(&local_e8,0);
          }
          uVar8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_text_0269ce68);
          uVar3 = (uint)uVar8;
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)();
          local_131 = (byte)(uVar2 ^ 1) & 1;
          if (((uVar2 ^ 1) & 1) != 0) {
            uVar8 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setText__026caa88,local_e0);
            uVar3 = (uint)uVar8;
          }
          FUN_0012e4e4();
          local_132 = (byte)uVar3;
          uVar8 = (ulong)(local_79 & 1);
          FUN_0012e5bc(uVar8,uVar3 & 1);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = (ulong)(local_79 & 1);
          local_140 = uVar8;
          FUN_0012eae8(uVar9,local_132 & 1);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_68;
          local_148 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textColor_0269f098);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar9 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextColor__026caa98,local_140);
          }
          uVar8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_backgroundColor_026ca518);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar9 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_setBackgroundColor__026ca888,local_148);
          }
          if ((local_131 & 1) != 0) {
            uVar10 = 0x4054000000000000;
            FUN_00131640();
            uVar8 = local_e0;
            local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
            uVar9 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_font_0269ea00);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar5,0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            local_548 = (double)(long)param_3 + 10.0;
            uVar14 = 0x1e;
            if (local_548 < 30.0) {
              local_548 = 30.0;
            }
            if (90.0 <= local_548) {
              local_550 = 90.0;
            }
            else {
              local_550 = local_548;
            }
            dVar11 = (double)(long)param_4 + 8.0;
            uVar8 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
            uVar2 = (uint)uVar8;
            dVar12 = local_550;
            dVar13 = dVar11;
            FUN_00131640();
            FUN_0013166c(uVar14,uVar10,dVar12,dVar13);
            if ((uVar2 & 1) == 0) {
              uVar14 = 0;
              uVar10 = 0;
              FUN_0012e498();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar10,uVar14,local_550,dVar11,local_68,PTR_s_setFrame__026ca960);
            }
          }
          FUN_0012f148(local_68,0);
          uVar8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_isDescendantOfView__026ca760,local_40);
          if ((uVar8 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_68);
          }
          uVar9 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_68;
          (*(code *)PTR__objc_release_02578630)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if (uVar7 != uVar8) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_bringSubviewToFront__026ca550,local_68);
          }
          FUN_001316c4(local_40,local_68,local_79 & 1);
          _objc_storeStrong(&local_148);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_e0,0);
          local_6c = 0;
        }
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68,0);
LAB_0012dd80:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

