// FUN_00871894 @ 00871894

byte FUN_00871894(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_398;
  undefined *local_390;
  undefined *local_328;
  undefined *local_320;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  undefined8 local_248;
  undefined *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  ulong local_1e8;
  ulong local_1e0 [3];
  byte local_1c5;
  int local_1c4;
  ulong local_1c0;
  byte local_1b1;
  undefined1 auStack_1b0 [128];
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [128];
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_1);
  if (local_1c0 == 0) {
    local_1b1 = 0;
    local_1c4 = 1;
    goto LAB_008722bc;
  }
  uVar1 = local_1c0;
  FUN_00872aa4();
  local_1c5 = (byte)uVar1;
  uVar1 = local_1c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_1e0[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_TitleControl);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = local_1e0[0],
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0[0],PTR_s_containsString__0269d0b0,&cf_NavigationBarTitle),
      (uVar1 & 1) == 0)) &&
     (uVar1 = local_1e0[0],
     (*(code *)PTR__objc_msgSend_02578628)
               (local_1e0[0],PTR_s_isEqualToString__0269ccc8,&cf_MMTitleView), (uVar1 & 1) == 0)) {
    uVar1 = local_1e0[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0[0],PTR_s_containsString__0269d0b0,&cf_MainFrameLeftBarView);
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = local_1e0[0],
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1e0[0],PTR_s_containsString__0269d0b0,&cf_RightTopMenu), (uVar1 & 1) == 0))
       && ((uVar1 = local_1e0[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1e0[0],PTR_s_containsString__0269d0b0,&cf_NavigationBarButton),
           (uVar1 & 1) == 0 &&
           (uVar2 = local_1e0[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1e0[0],PTR_s_containsString__0269d0b0,&cf_MMBarButton),
           uVar1 = local_1c0, (uVar2 & 1) == 0)))) {
      if ((local_1c5 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___UIControl_026ce2d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar1 & 1) != 0) {
          local_1b1 = 1;
          local_1c4 = 1;
          goto LAB_0087229c;
        }
      }
      uVar1 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_00872b3c();
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
LAB_00871f0c:
        uVar1 = local_1c0;
        if ((local_1c5 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___UIControl_026ce2d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar1 & 1) != 0) && (uVar1 = local_1c0, FUN_008715a0(), (uVar1 & 1) != 0)) {
            local_130 = &cf_search;
            local_128 = &cf_more;
            local_120 = &cf_back;
            local_118 = &cf_add;
            local_110 = &cf_star;
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_130,5);
            _objc_retainAutoreleasedReturnValue();
            local_240 = puVar3;
            _memset(auStack_288,0,0x40);
            puVar3 = local_240;
            (*(code *)PTR__objc_retain_02578638)();
            local_390 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,
                       auStack_1b0,0x10);
            if (local_390 != (undefined *)0x0) {
              lVar4 = *local_278;
              local_398 = (undefined *)0x0;
              do {
                do {
                  if (*local_278 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_278 - lVar4,puVar3);
                  }
                  local_248 = *(undefined8 *)(local_280 + (long)local_398 * 8);
                  uVar1 = local_1e0[0];
                  (*(code *)PTR__objc_msgSend_02578628)(local_1e0[0],PTR_s_lowercaseString_0269d9c0)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar1);
                  if ((uVar2 & 1) != 0) {
                    local_1b1 = 1;
                    local_1c4 = 1;
                    goto LAB_008721fc;
                  }
                  local_398 = local_398 + 1;
                } while (local_398 < local_390);
                local_390 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,
                           auStack_1b0,0x10);
                local_398 = (undefined *)0x0;
              } while (local_390 != (undefined *)0x0);
            }
            local_1c4 = 0;
LAB_008721fc:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_1c4 == 0) {
              local_1c4 = 0;
            }
            _objc_storeStrong(&local_240,0);
            if (local_1c4 != 0) goto LAB_0087227c;
          }
        }
        local_1b1 = 0;
        local_1c4 = 1;
      }
      else {
        local_88 = &cf_d__;
        local_80 = &cf_search;
        local_78 = &cf_fY;
        local_70 = &cf_more;
        local_68 = &cf_V;
        local_60 = &cf_back;
        local_58 = &cf__wcd_O;
        local_50 = &cf_fh;
        local_48 = &cf_star;
        local_40 = &cf___;
        local_38 = &cf___;
        local_30 = &cf_xiaowei;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_88,0xc);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = puVar3;
        _memset(auStack_238,0,0x40);
        puVar3 = local_1f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_320 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_108,
                   0x10);
        if (local_320 != (undefined *)0x0) {
          lVar4 = *local_228;
          local_328 = (undefined *)0x0;
          do {
            do {
              if (*local_228 - lVar4 != 0) {
                _objc_enumerationMutation(*local_228 - lVar4,puVar3);
              }
              local_1f8 = *(undefined8 *)(local_230 + (long)local_328 * 8);
              uVar1 = local_1e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e8,PTR_s_containsString__0269d0b0,local_1f8);
              if ((uVar1 & 1) != 0) {
                local_1b1 = 1;
                local_1c4 = 1;
                goto LAB_00871ec8;
              }
              local_328 = local_328 + 1;
            } while (local_328 < local_320);
            local_320 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                       auStack_108,0x10);
            local_328 = (undefined *)0x0;
          } while (local_320 != (undefined *)0x0);
        }
        local_1c4 = 0;
LAB_00871ec8:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_1c4 == 0) {
          local_1c4 = 0;
        }
        _objc_storeStrong(&local_1f0,0);
        if (local_1c4 == 0) goto LAB_00871f0c;
      }
LAB_0087227c:
      _objc_storeStrong(&local_1e8,0);
    }
    else {
      local_1b1 = 1;
      local_1c4 = 1;
    }
  }
  else {
    local_1b1 = 0;
    local_1c4 = 1;
  }
LAB_0087229c:
  _objc_storeStrong(local_1e0,0);
LAB_008722bc:
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_1b1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

