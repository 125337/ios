// wcr_styleChips @ 01d8a0fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsActivityViewController::wcr_styleChips(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_170;
  bool local_161;
  undefined *local_160;
  undefined *local_150;
  undefined *local_140;
  bool local_131;
  undefined *local_130;
  undefined *local_120;
  ID local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ID local_c8;
  byte local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar3 = DAT_02323da8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_dark_026c4ca0);
  local_b9 = (byte)param_1;
  _memset(auStack_108,0,0x40);
  IVar7 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterBar_026c4cd8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar7);
  local_1b0 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_1b0 != 0) {
    lVar9 = *local_f8;
    local_1b8 = 0;
    do {
      do {
        if (*local_f8 - lVar9 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar9,IVar5);
        }
        uVar10 = *(ID *)(local_100 + local_1b8 * 8);
        puVar6 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_c8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar6);
        IVar7 = local_c8;
        if ((uVar10 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = IVar7;
          (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_tag_026cab98);
          IVar8 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filter_026c4d50);
          bVar2 = false;
          local_131 = false;
          bVar1 = false;
          if (IVar7 != IVar8) {
            bVar1 = (local_b9 & 1) == 0;
            local_1f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
            if (bVar1) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_02332e50,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithWhite_alpha__0269cf30);
              _objc_retainAutoreleasedReturnValue();
              local_140 = local_1f8;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithWhite_alpha__0269cf30);
              _objc_retainAutoreleasedReturnValue();
              local_130 = local_1f8;
            }
            local_131 = !bVar1;
            local_1f0 = local_1f8;
          }
          else {
            local_1f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,DAT_02323f80,DAT_02324040,0x3ff0000000000000,
                       PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            local_120 = local_1f0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_setBackgroundColor__026ca888,local_1f0);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if (local_131) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          IVar4 = local_110;
          bVar2 = false;
          local_161 = false;
          bVar1 = false;
          if (IVar7 != IVar8) {
            bVar1 = (local_b9 & 1) == 0;
            local_210 = PTR__OBJC_CLASS___UIColor_026cdf78;
            if (bVar1) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3fc3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithWhite_alpha__0269cf30);
              _objc_retainAutoreleasedReturnValue();
              local_170 = local_210;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
              _objc_retainAutoreleasedReturnValue();
              local_160 = local_210;
            }
            local_161 = !bVar1;
            local_208 = local_210;
          }
          else {
            local_208 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            local_150 = local_208;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_setTitleColor_forState__026caac0,local_208,0);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          if (local_161) {
            (*(code *)PTR__objc_release_02578630)(local_160);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          _objc_storeStrong(&local_110,0);
        }
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_1b8 = 0;
    } while (local_1b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

