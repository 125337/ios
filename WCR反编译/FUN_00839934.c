// FUN_00839934 @ 00839934

void FUN_00839934(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 uVar8;
  undefined8 ****local_280;
  double local_258;
  double local_250;
  undefined8 ****local_210;
  double local_1b8;
  double local_1b0;
  undefined8 ****local_190;
  undefined8 ****local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_c8;
  double local_c0;
  undefined8 ****local_b8;
  bool local_a9;
  undefined8 ****local_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 ****local_80;
  byte local_71;
  double local_70;
  undefined8 ****local_68;
  undefined8 ****local_60;
  undefined8 ****local_58 [3];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  
  local_30 = (undefined8 *****)0x0;
  _objc_storeStrong(&local_30,param_3);
  puVar5 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar5,param_4);
  ppppuVar2 = local_30;
  uVar4 = (uint)puVar5;
  if ((undefined8 *****)local_30 == (undefined8 *****)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = ppppuVar2;
    local_3c = 1;
  }
  else if ((((DAT_028cd232 & 1) == 0) && ((DAT_028cd233 & 1) == 0)) &&
          (_WCRFrostedBubbleEnabled(), ppppuVar2 = local_30, (uVar4 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = ppppuVar2;
    local_3c = 1;
  }
  else {
    _WCRFrostedBubbleEnabled();
    if ((uVar4 & 1) == 0) {
      if ((DAT_028cd233 & 1) == 0) {
        local_1b8 = 1.0;
      }
      else {
        FUN_0083a3a8();
        if ((uVar4 & 1) == 0) {
          local_1b0 = DAT_026f4850;
        }
        else {
          local_1b0 = DAT_026f4848;
        }
        local_1b8 = local_1b0;
      }
      ppppuVar2 = local_30;
      local_70 = local_1b8;
      bVar1 = (DAT_028cd233 & 1) != 0;
      if (bVar1) {
        param_2 = DAT_02324348;
      }
      local_71 = bVar1 && local_1b8 < DAT_02324348;
      if (((DAT_028cd232 & 1) != 0) || ((bool)local_71)) {
        pppppuVar6 = (undefined8 *****)local_30;
        FUN_0083a65c(local_30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pppppuVar6;
        FUN_0083aac4();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar7 = pppppuVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_88 = pppppuVar7;
        (*(code *)PTR__objc_release_02578630)(pppppuVar6);
        local_210 = local_30;
        ppppuVar2 = local_88;
        if ((undefined8 *****)local_88 == (undefined8 *****)0x0) {
          local_99 = 0;
          local_a9 = false;
          bVar1 = (DAT_028cd232 & 1) == 0;
          if (bVar1) {
          }
          else {
            uVar8 = local_38;
            FUN_0083ae68();
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = uVar8;
            FUN_0080d088();
            _objc_retainAutoreleasedReturnValue();
            local_a8 = local_210;
          }
          local_a9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = local_210;
          if ((local_a9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          ppppuVar3 = local_30;
          ppppuVar2 = local_90;
          if ((undefined8 *****)local_90 == (undefined8 *****)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = ppppuVar3;
            local_3c = 1;
          }
          else {
            pppppuVar6 = (undefined8 *****)local_90;
            (*(code *)PTR__objc_retain_02578638)();
            local_b8 = ppppuVar2;
            if ((local_71 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_size_026cab00);
              local_c8 = local_1b8;
              local_c0 = param_2;
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_scale_026ca830);
              _UIGraphicsBeginImageContextWithOptions(local_c8,local_c0,param_2,0);
              uStack_d8 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
              local_e0 = *(undefined8 *)PTR__CGPointZero_025782e0;
              local_e8 = 0;
              local_f8 = 0x3ff0000000000000;
              local_100 = local_70;
              if (local_70 <= 1.0) {
                local_250 = local_70;
              }
              else {
                local_250 = 1.0;
              }
              local_108 = local_250;
              local_f0 = local_250;
              if (local_250 <= 0.0) {
                local_258 = 0.0;
              }
              else {
                local_258 = local_250;
              }
              local_110 = local_258;
              pppppuVar6 = (undefined8 *****)local_90;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,uStack_d8,local_258,local_90,
                         PTR_s_drawAtPoint_blendMode_alpha__026a8c98,0);
              _UIGraphicsGetImageFromCurrentImageContext();
              _objc_retainAutoreleasedReturnValue();
              local_118 = pppppuVar6;
              _UIGraphicsEndImageContext();
              if ((undefined8 *****)local_118 != (undefined8 *****)0x0) {
                pppppuVar6 = (undefined8 *****)local_118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_imageWithRenderingMode__026ca690,1);
                _objc_retainAutoreleasedReturnValue();
                ppppuVar2 = local_b8;
                local_b8 = pppppuVar6;
                (*(code *)PTR__objc_release_02578630)(ppppuVar2);
              }
              pppppuVar6 = &local_118;
              _objc_storeStrong(pppppuVar6,0);
            }
            if ((undefined8 *****)local_b8 != (undefined8 *****)0x0) {
              FUN_0083aac4();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pppppuVar6);
            }
            if ((undefined8 *****)local_b8 == (undefined8 *****)0x0) {
              local_280 = &local_90;
            }
            else {
              local_280 = &local_b8;
            }
            local_280 = (undefined8 ****)*local_280;
            (*(code *)PTR__objc_retain_02578638)();
            local_3c = 1;
            local_28 = local_280;
            _objc_storeStrong(&local_b8,0);
          }
          _objc_storeStrong(&local_90,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = ppppuVar2;
          local_3c = 1;
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = ppppuVar2;
        local_3c = 1;
      }
    }
    else {
      pppppuVar6 = (undefined8 *****)local_30;
      FUN_0083a65c(local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = pppppuVar6;
      FUN_0083aac4();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar7 = pppppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pppppuVar7;
      (*(code *)PTR__objc_release_02578630)(pppppuVar6);
      ppppuVar2 = local_60;
      if ((undefined8 *****)local_60 == (undefined8 *****)0x0) {
        pppppuVar6 = (undefined8 *****)local_30;
        FUN_0083ab38();
        _objc_retainAutoreleasedReturnValue();
        local_68 = pppppuVar6;
        if (pppppuVar6 != (undefined8 *****)0x0) {
          FUN_0083aac4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pppppuVar6);
        }
        if ((undefined8 *****)local_68 == (undefined8 *****)0x0) {
          local_190 = &local_30;
        }
        else {
          local_190 = &local_68;
        }
        local_190 = (undefined8 ****)*local_190;
        (*(code *)PTR__objc_retain_02578638)();
        local_3c = 1;
        local_28 = local_190;
        _objc_storeStrong(&local_68,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = ppppuVar2;
        local_3c = 1;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

