// FUN_00660108 @ 00660108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00660108(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double local_490;
  double local_488;
  double local_480;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  ulong local_2c8;
  ulong local_1a0;
  ulong local_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  double dStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  byte local_99;
  ulong local_98;
  ulong local_90;
  double local_88;
  ulong local_80;
  long local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  ulong local_48;
  double local_40 [3];
  long local_28;
  ulong *puVar4;
  
  dVar9 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar4,param_5);
  uVar3 = (uint)puVar4;
  if ((local_48 == 0) || (FUN_0064cd38(), uVar6 = local_48, (uVar3 & 1) == 0)) {
    local_58 = 1;
  }
  else {
    local_69 = 0;
    puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar6 & 1) == 0) {
      local_2c8 = 0;
    }
    else {
      local_2c8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_2c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_2c8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (local_60 == 0) {
      local_58 = 1;
    }
    else {
      local_78 = 0;
      local_40[1] = (double)_UNK_02324238;
      local_40[0] = _DAT_02324230;
      local_3b0 = _DAT_02324230;
      for (local_80 = 0; local_80 < 2; local_80 = local_80 + 1) {
        dVar8 = local_40[local_80];
        local_88 = dVar8;
        FUN_0064d8b4();
        uVar6 = local_48;
        if (((ulong)dVar8 & 1) != 0) {
          dVar8 = local_88;
          FUN_006549cc(local_88);
          _objc_getAssociatedObject(uVar6,dVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_90 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar7 = local_90;
          if ((uVar6 & 1) == 0) {
            local_58 = 4;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            if (uVar7 != 0) {
              uVar6 = local_98;
              (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isHidden_026ca768);
              bVar1 = false;
              if ((uVar6 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_alpha_026ca4d8);
                bVar1 = dVar9 < local_3b0;
                param_2 = dVar9;
              }
            }
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar6 = local_90;
            local_99 = bVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_isShowing_0269ec18);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isShowing_0269ec18);
              local_99 = (local_99 & 1) != 0 || (int)uVar6 != 0;
            }
            if ((local_99 & 1) == 0) {
              local_58 = 4;
            }
            else {
              local_3a0 = 34.0;
              local_b8 = 34.0;
              (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
              local_e8 = local_3a0;
              local_e0 = param_2;
              local_d8 = param_3;
              local_d0 = param_4;
              _CGRectGetHeight(local_3a0,param_2);
              uVar10 = 0x3ff0000000000000;
              if (local_3a0 <= 1.0) {
                local_3a0 = 40.0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
                local_108 = local_3a0;
                local_100 = uVar10;
                local_f8 = param_3;
                local_f0 = param_4;
                _CGRectGetHeight(local_3a0,uVar10);
              }
              local_c8 = local_3a0;
              local_110 = 0x4046000000000000;
              if (44.0 <= local_3a0) {
                local_3a8 = 44.0;
              }
              else {
                local_3a8 = local_3a0;
              }
              local_118 = local_3a8;
              local_c0 = local_3a8;
              if (local_3a8 <= local_b8) {
                local_3b0 = local_b8;
              }
              else {
                local_3b0 = local_3a8;
              }
              local_120 = local_3b0;
              local_b0 = local_3b0;
              FUN_00657ae0(local_48,local_60,local_78);
              uVar6 = local_90;
              local_128 = local_3b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setY__026a62d0);
              if ((uVar6 & 1) != 0) {
                local_3b0 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setY__026a62d0);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_frame_026ca640);
              dStack_148 = local_128;
              dStack_168 = local_128;
              dStack_188 = local_128;
              param_2 = local_128;
              local_190 = local_3b0;
              local_180 = param_3;
              uStack_178 = param_4;
              local_170 = local_3b0;
              local_160 = param_3;
              uStack_158 = param_4;
              local_150 = local_3b0;
              local_140 = param_3;
              uStack_138 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFrame__026ca960);
              local_78 = local_78 + 1;
              local_58 = 0;
            }
            _objc_storeStrong(&local_98,0);
          }
          _objc_storeStrong(&local_90,0);
        }
      }
      uVar6 = local_48;
      _objc_getAssociatedObject(local_80 - 2,local_48,&DAT_028cbc08);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      local_198 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar1 = false;
      if ((uVar6 & 1) != 0) {
        local_1a0 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar1 = false;
        if (local_1a0 != 0) {
          uVar6 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isHidden_026ca768);
          bVar1 = false;
          if ((uVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_alpha_026ca4d8);
            bVar1 = dVar9 < local_3b0;
            param_2 = dVar9;
          }
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_1a0);
      }
      if (bVar1) {
        local_480 = 34.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_bounds_026ca548);
        _CGRectGetHeight(local_480,param_2);
        uVar10 = 0x3ff0000000000000;
        if (local_480 <= 1.0) {
          local_480 = 40.0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_bounds_026ca548);
          _CGRectGetHeight(local_480,uVar10);
        }
        if (44.0 <= local_480) {
          local_488 = 44.0;
        }
        else {
          local_488 = local_480;
        }
        if (local_488 <= 34.0) {
          local_490 = 34.0;
        }
        else {
          local_490 = local_488;
        }
        FUN_00657ae0(local_48,local_60,0);
        dVar9 = local_490;
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_frame_026ca640);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar9,local_490,param_3,param_4,local_198,PTR_s_setFrame__026ca960);
      }
      _objc_storeStrong(&local_198,0);
      local_58 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

