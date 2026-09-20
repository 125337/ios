// FUN_003c94dc @ 003c94dc

void FUN_003c94dc(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double local_210;
  double local_200;
  ulong local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined1 local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar5 = local_40;
  if (((ulong)puVar4 & 1) == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar5;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar5 & 1) == 0) || (uVar5 = local_50, FUN_003cbd38(), (uVar5 & 1) == 0)) {
      local_44 = 1;
    }
    else {
      uVar6 = local_50;
      FUN_003b3da8(local_50,"m_nameLabel");
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_58 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar5 = local_58;
      if ((uVar6 & 1) == 0) {
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        local_71 = 0;
        bVar2 = true;
        uVar1 = uVar5 != 0;
        if ((bool)uVar1) {
          uVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_font_0269ea00);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = uVar5 == 0;
          local_71 = uVar1;
          local_70 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar1 = local_71;
        }
        local_71 = uVar1;
        uVar5 = local_68;
        if (bVar2) {
          local_44 = 1;
        }
        else {
          local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
          uVar6 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_font_0269ea00);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_sizeWithAttributes__026cab08);
          uVar9 = 0x3ff0000000000000;
          dVar7 = (double)(long)param_1 + 1.0;
          local_90 = param_1;
          local_88 = param_2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_80 = dVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
          local_b0 = dVar7;
          uStack_a8 = uVar9;
          local_a0 = param_3;
          uStack_98 = param_4;
          if (param_3 < local_80) {
            dVar7 = local_80;
            dVar8 = param_3;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
            local_d8 = param_3;
            local_d0 = dVar7;
            local_c8 = dVar8;
            local_c0 = param_4;
            _CGRectGetWidth(param_3,dVar7);
            uVar9 = 0x4028000000000000;
            param_3 = param_3 - 12.0;
            uVar5 = local_50;
            local_b8 = param_3;
            FUN_003b3da8(local_50,"m_timeLabel");
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_e0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
              _CGRectGetMinX(param_3,uVar9,dVar8,param_4);
              dVar7 = local_b0;
              _CGRectGetMinX(local_b0,uStack_a8,local_a0,uStack_98);
              if (dVar7 < param_3) {
                local_200 = param_3 - 8.0;
                if (local_b8 < local_200) {
                  local_200 = local_b8;
                }
                local_b8 = local_200;
              }
            }
            dVar7 = local_80;
            local_210 = local_b8;
            dVar8 = local_b0;
            _CGRectGetMinX(local_b0,uStack_a8,local_a0,uStack_98);
            local_210 = local_210 - dVar8;
            if (dVar7 < local_210) {
              local_210 = dVar7;
            }
            if (local_a0 < local_210) {
              local_a0 = local_210;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,uStack_a8,local_210,uStack_98,local_60,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setNeedsDisplay_026a3050);
            }
            _objc_storeStrong(&local_e0,0);
            local_44 = 0;
          }
          else {
            local_44 = 1;
          }
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

