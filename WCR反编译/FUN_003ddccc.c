// FUN_003ddccc @ 003ddccc

void FUN_003ddccc(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,long param_6,byte param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined1 *local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  long local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_31 = param_7;
  local_30 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    FUN_003ddbe0(local_28);
    if (local_30 == 0) {
      local_38 = 1;
    }
    else {
      lVar7 = local_30;
      FUN_003de250(local_30,local_31 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar7;
      if (lVar7 == 0) {
        local_38 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_setTag__026caa80,DAT_02324068);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAutoresizingMask__026ca878,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_40);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        local_70 = param_1;
        local_68 = param_2;
        local_60 = param_3;
        local_58 = param_4;
        _CGRectGetWidth(param_1,param_2);
        local_78 = 0x4074000000000000;
        local_a0 = 0x4074000000000000;
        local_1e8 = param_1;
        if (param_1 < 320.0) {
          local_1e8 = 320.0;
        }
        local_80 = local_1e8;
        local_48 = local_1e8;
        local_50 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        local_a8 = local_1e8;
        local_98 = param_3;
        local_90 = param_4;
        _CGRectGetHeight(local_1e8,local_a0);
        uVar6 = 0x3ff0000000000000;
        if (local_1e8 <= 1.0) {
          FUN_003cb0c8();
          local_1f0 = local_1e8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          local_c8 = local_1e8;
          local_c0 = uVar6;
          local_b8 = param_3;
          local_b0 = param_4;
          _CGRectGetHeight(local_1e8,uVar6);
          local_1f0 = local_1e8;
        }
        local_88 = local_1f0;
        local_d0 = 0.0;
        FUN_003cbad4(0,0,&local_d0);
        local_108 = 0x3ff0000000000000;
        if (local_d0 <= 1.0) {
          local_1f8 = 42.0;
        }
        else {
          local_1f8 = local_d0;
        }
        local_d8 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
        dVar4 = param_3;
        local_110 = local_1f8;
        local_100 = param_3;
        dStack_f8 = param_4;
        local_f0 = param_3;
        dStack_e8 = param_4;
        if ((param_3 < 1.0) || (dVar4 = param_4, param_4 < 1.0)) {
          uVar6 = 0x3ff0000000000000;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
          local_130 = dVar4;
          local_128 = uVar6;
          local_120 = param_3;
          dStack_118 = param_4;
          local_f0 = param_3;
          dStack_e8 = param_4;
        }
        if ((local_f0 < 1.0) || (dStack_e8 < 1.0)) {
          local_138 = 8.0;
          if ((local_31 & 1) == 0) {
            local_138 = 18.0;
          }
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__llu);
          _objc_retainAutoreleasedReturnValue();
          local_140 = puVar1;
          if ((local_31 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
            if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar1) {
              puVar3 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
              local_210 = (double)puVar3 * 8.0 + 12.0;
              if (44.0 < local_210) {
                local_210 = 44.0;
              }
              local_208 = local_210;
            }
            else {
              local_208 = local_138;
            }
            local_200 = local_208;
          }
          else {
            local_200 = 8.0;
          }
          dVar4 = local_138;
          FUN_003ae5d4();
          local_f0 = local_200;
          dStack_e8 = dVar4;
          _objc_storeStrong(&local_140,0);
        }
        dVar5 = (local_48 - local_d8) - local_f0;
        lVar7 = (long)((local_88 - dStack_e8) * 0.5);
        dVar4 = local_f0;
        dVar8 = dStack_e8;
        FUN_00360240();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,lVar7,dVar4,dVar8,local_40,PTR_s_setFrame__026ca960);
        local_38 = 0;
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

