// FUN_008748a4 @ 008748a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_008748a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  ulong uVar8;
  uint local_308;
  uint local_2ec;
  uint local_2d0;
  uint local_2b4;
  uint local_298;
  uint local_27c;
  uint local_274;
  uint local_250;
  uint local_234;
  cfstringStruct *local_210;
  undefined *local_1c8;
  undefined *local_1b8;
  undefined *local_1a8;
  undefined *local_198;
  undefined *local_188;
  undefined *local_178;
  undefined *local_168;
  undefined *local_158;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_128;
  long local_120;
  ulong local_118;
  long local_110;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
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
  local_108 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_108,param_1);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_2);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_3);
  local_141 = local_108 == (cfstringStruct *)0x0;
  local_120 = param_4;
  if (local_141) {
    local_210 = &cf___;
  }
  else {
    local_210 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_140 = local_210;
  }
  local_141 = !local_141;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = local_210;
  if (local_141) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  bVar3 = (byte)local_108;
  FUN_00872aa4();
  pcVar6 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_containsString__0269d0b0,&cf_TitleControl);
  if (((((ulong)pcVar6 & 1) == 0) &&
      (pcVar6 = local_128,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_containsString__0269d0b0,&cf_NavigationBarTitle),
      ((ulong)pcVar6 & 1) == 0)) &&
     (pcVar6 = local_128,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_128,PTR_s_isEqualToString__0269ccc8,&cf_MMTitleView), ((ulong)pcVar6 & 1) == 0
     )) {
    if ((local_110 == 0) || (local_120 == 0)) {
      local_f9 = 0;
    }
    else {
      uVar4 = (uint)local_110;
      FUN_008732dc();
      uVar5 = (uint)local_110;
      FUN_00873420();
      uVar7 = local_118;
      if ((uVar4 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          local_f9 = 0;
        }
        else if ((DAT_028cd863 & 1) == 0) {
          local_f9 = 0;
        }
        else {
          bVar2 = false;
          bVar1 = false;
          local_2b4 = 0;
          if (local_120 == 1) {
            local_b0 = &cf_arrow_left_regular;
            local_198 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_b0,1);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            FUN_008770ec();
            uVar8 = local_118;
            local_2d0 = 1;
            bVar1 = (uVar7 & 1) == 0;
            if (bVar1) {
              local_c0 = &cf_V;
              local_b8 = &cf_back;
              local_1a8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_c0,2);
              _objc_retainAutoreleasedReturnValue();
              FUN_008775a4();
              local_2d0 = (uint)uVar8;
            }
            local_2b4 = local_2d0;
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_1a8);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_198);
          }
          uVar7 = local_118;
          if ((local_2b4 & 1) == 0) {
            bVar2 = false;
            bVar1 = false;
            local_2ec = 0;
            if (local_120 == 2) {
              local_d8 = &cf_icons_filled_search;
              local_d0 = &cf_icons_outlined_search;
              local_c8 = &cf_dot_3_regular;
              local_1b8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_d8,3);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = true;
              FUN_008770ec();
              uVar8 = local_118;
              local_308 = 1;
              bVar1 = (uVar7 & 1) == 0;
              if (bVar1) {
                local_f8 = &cf_d__;
                local_f0 = &cf_search;
                local_e8 = &cf_fY;
                local_e0 = &cf_more;
                local_1c8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_f8,4);
                _objc_retainAutoreleasedReturnValue();
                FUN_008775a4();
                local_308 = (uint)uVar8;
              }
              local_2ec = local_308;
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_1c8);
            }
            if (bVar2) {
              (*(code *)PTR__objc_release_02578630)(local_1b8);
            }
            if ((local_2ec & 1) == 0) {
              local_f9 = 0;
            }
            else {
              local_f9 = 1;
            }
          }
          else {
            local_f9 = 1;
          }
        }
      }
      else {
        bVar2 = false;
        bVar1 = false;
        local_234 = 0;
        if (local_120 == 1) {
          local_40 = &cf_star_3_line_regular;
          local_38 = &cf_ai_filled;
          local_30 = &cf_xiaowei_filled;
          local_158 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          FUN_008770ec();
          uVar8 = local_118;
          local_250 = 1;
          if ((uVar7 & 1) == 0) {
            local_78 = &cf_fh;
            local_70 = &cf_star;
            local_68 = &cf__nm;
            local_60 = &cf_nmz;
            local_58 = &cf___;
            local_50 = &cf___;
            local_48 = &cf_xiaowei;
            local_168 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_78,7);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            FUN_008775a4();
            local_250 = 1;
            if ((uVar8 & 1) == 0) {
              pcVar6 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_containsString__0269d0b0,&cf_MainFrameLeftBarView);
              local_250 = (uint)pcVar6;
            }
          }
          local_234 = local_250;
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_168);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_158);
        }
        if (((local_234 & 1) == 0) || (((DAT_028cd85f & 1) == 0 && ((DAT_028cd85e & 1) == 0)))) {
          if ((DAT_028cd85e & 1) == 0) {
            local_f9 = 0;
          }
          else if ((local_120 == 1) && ((bVar3 & 1) != 0)) {
            local_f9 = 1;
          }
          else {
            pcVar6 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_containsString__0269d0b0,&cf_RightTopMenu);
            local_274 = 1;
            if (((ulong)pcVar6 & 1) == 0) {
              pcVar6 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_containsString__0269d0b0,&cf_MMBarButton);
              local_274 = (uint)pcVar6;
            }
            uVar7 = local_118;
            bVar2 = false;
            bVar1 = false;
            local_27c = 0;
            if (((local_120 == 2) && (local_27c = 0, (bVar3 & 1) != 0)) &&
               (local_27c = 0, (local_274 & 1) != 0)) {
              local_88 = &cf_icons_outlined_addoutline;
              local_80 = &cf_icons_outlined_search;
              local_178 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_88,2);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = true;
              FUN_008770ec();
              uVar8 = local_118;
              local_298 = 1;
              bVar1 = (uVar7 & 1) == 0;
              if (bVar1) {
                local_a8 = &cf_d__;
                local_a0 = &cf_search;
                local_98 = &cf__wcd_O;
                local_90 = &cf_quickaction;
                local_188 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_a8,4);
                _objc_retainAutoreleasedReturnValue();
                FUN_008775a4();
                local_298 = (uint)uVar8;
              }
              local_27c = local_298;
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_188);
            }
            if (bVar2) {
              (*(code *)PTR__objc_release_02578630)(local_178);
            }
            if ((local_27c & 1) == 0) {
              local_f9 = 0;
            }
            else {
              local_f9 = 1;
            }
          }
        }
        else {
          local_f9 = 1;
        }
      }
    }
  }
  else {
    local_f9 = 0;
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_f9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

