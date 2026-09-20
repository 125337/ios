// FUN_00082894 @ 00082894

void FUN_00082894(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  double local_448;
  ulong local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  cfstringStruct *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  cfstringStruct *local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  undefined8 local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined8 local_170;
  ulong local_168;
  cfstringStruct *local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_12c [4];
  undefined8 local_128;
  undefined8 local_120;
  ulong local_118;
  byte local_109;
  undefined8 local_108;
  undefined8 local_100;
  byte local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  byte local_db;
  byte local_da;
  byte local_d9;
  ulong local_d8;
  ulong local_d0;
  byte local_c1;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined1 local_79;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  byte local_49;
  byte local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  undefined1 local_41;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  dVar13 = DAT_02323cc0;
  dVar7 = DAT_02323ca0;
  local_28 = 0;
  dVar6 = DAT_02323cc0;
  _objc_storeStrong(&local_28,param_5);
  uVar5 = local_28;
  if (local_28 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_28;
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar2;
      FUN_00078a1c();
      local_41 = (undefined1)uVar2;
      if ((DAT_028c7e78 & 1) == 0) {
        FUN_0006e628();
      }
      local_42 = 0;
      local_43 = 0;
      local_44 = 0;
      local_45 = 0;
      local_46 = 0;
      local_47 = 0;
      local_48 = 0;
      local_49 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      FUN_00083a88(local_40,&local_68,&local_42,&local_43,&local_44,&local_45,&local_46,&local_47,
                   &local_48,&local_70,&local_49);
      _objc_storeStrong(&local_58,local_68);
      _objc_storeStrong(&local_60,local_70);
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_headImageView);
      _objc_retainAutoreleasedReturnValue();
      local_79 = false;
      dVar12 = param_2;
      dVar11 = param_3;
      dVar14 = param_4;
      local_78 = uVar5;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_bounds_026ca548);
        local_79 = false;
        dVar12 = param_3;
        dVar11 = param_2;
        dVar14 = dVar6;
        local_a0 = dVar6;
        local_98 = param_2;
        local_90 = param_3;
        local_88 = param_4;
        if (0.0 < param_3) {
          dVar11 = param_3;
          dVar12 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
          local_79 = 0.0 < dVar6;
          dVar14 = param_3;
          local_c0 = param_3;
          local_b8 = dVar11;
          local_b0 = dVar12;
          local_a8 = dVar6;
        }
      }
      if ((bool)local_79 == false) {
        local_38 = 1;
      }
      else {
        local_c1 = 0;
        uVar5 = local_40;
        FUN_0007eb2c(local_40,local_58,local_42 & 1,local_60,&local_c1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_d0 = uVar5;
        FUN_0007e51c();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = uVar2;
        if ((uVar2 == 0) && ((local_c1 & 1) != 0)) {
          uVar2 = local_d0;
          FUN_0007b310();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_d8;
          local_d8 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        uVar5 = local_d8;
        FUN_00084088(local_d8,local_58,local_40,local_60,local_c1 & 1);
        if ((uVar5 & 1) == 0) {
          local_d9 = 0;
          local_da = 1;
          if (((local_42 & 1) != 0) && ((DAT_028c7e7b & 1) != 0)) {
            local_db = 0;
            local_e8 = 0;
            local_f0 = 0;
            local_100 = 0;
            local_108 = 0;
            uVar5 = local_28;
            FUN_000842cc(local_28,&local_db,&local_100,&local_108);
            _objc_storeStrong(&local_e8,local_100);
            _objc_storeStrong(&local_f0,local_108);
            local_f1 = (byte)uVar5;
            if ((local_db & 1) == 0) {
              local_da = 0;
              local_d9 = 0;
            }
            else {
              local_d9 = local_f1 & 1;
            }
            _objc_storeStrong(&local_f0);
            _objc_storeStrong(&local_e8,0);
          }
          local_109 = local_42 & 1;
          FUN_00084574(local_109,local_43 & 1,local_da & 1);
          local_118 = 0;
          local_120 = 0;
          local_128 = 0;
          local_12c = (undefined1  [4])0x0;
          dVar6 = 0.0;
          local_138 = 0.0;
          pdVar15 = &local_140;
          local_140 = 0.0;
          local_148 = 0.0;
          local_150 = 0;
          local_158 = 0;
          FUN_0008499c(local_42 & 1,local_43 & 1,local_d9 & 1,&local_150,&local_158,&local_128,
                       local_12c,&local_138,pdVar15,&local_148);
          _objc_storeStrong(&local_118,local_150);
          _objc_storeStrong(&local_120,local_158);
          if ((DAT_028c7f30 & 1) != 0) {
            if ((local_43 & 1) == 0) {
              uVar5 = local_28;
              FUN_00085798();
              _objc_retainAutoreleasedReturnValue();
              local_178 = uVar5;
              FUN_00085a54();
              _objc_retainAutoreleasedReturnValue();
              local_180 = uVar5;
              if ((uVar5 != 0) &&
                 ((((local_42 & 1) == 0 || ((DAT_028c7e7b & 1) == 0)) || ((local_da & 1) != 0)))) {
                local_188 = local_118;
                local_190 = local_120;
                pdVar15 = (double *)local_12c;
                FUN_00085d74(uVar5,local_42 & 1,local_43 & 1,local_d9 & 1,&local_109,&local_188,
                             &local_190,&local_128,pdVar15,&local_138,&local_140,&local_148);
                _objc_storeStrong(&local_118,local_188);
                _objc_storeStrong(&local_120,local_190);
              }
              _objc_storeStrong(&local_180);
              _objc_storeStrong(&local_178,0);
            }
            else {
              puVar1 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar1);
              if (((ulong)puVar3 & 1) == 0) {
                pcVar4 = &cf___wcr_af_my_page__;
                FUN_00084d6c();
                _objc_retainAutoreleasedReturnValue();
                local_160 = pcVar4;
                if (pcVar4 != (cfstringStruct *)0x0) {
                  local_168 = local_118;
                  local_170 = local_120;
                  pdVar15 = &local_148;
                  FUN_00085018(pcVar4,&local_109,&local_168,&local_170,&local_128,local_12c,
                               &local_138,&local_140,pdVar15);
                  _objc_storeStrong(&local_118,local_168);
                  _objc_storeStrong(&local_120,local_170);
                }
                _objc_storeStrong(&local_160,0);
              }
              else {
                local_109 = 0;
              }
            }
          }
          uVar5 = local_40;
          _WCRAvatarExternalOverlayForContainer();
          _objc_retainAutoreleasedReturnValue();
          local_198 = uVar5;
          if ((local_109 & 1) == 0) {
            FUN_00086ba0(local_40,local_d8,uVar5,local_d0,local_c1 & 1);
            local_38 = 1;
          }
          else {
            FUN_00086dec(local_40,local_42 & 1,local_48 & 1,local_109 & 1,local_60);
            uVar2 = local_40;
            FUN_00074404(local_40,local_118,local_120);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_118;
            local_118 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = (ulong)(local_42 & 1);
            FUN_00086ffc(uVar5,local_43 & 1,local_d9 & 1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_40;
            local_1a0 = uVar5;
            FUN_00074564(local_40,local_128,local_118,uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_118;
            local_118 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_118;
            FUN_00074b64();
            _objc_retainAutoreleasedReturnValue();
            local_1a8 = uVar5;
            if ((uVar5 == 0) ||
               ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0), uVar5 == 0)) {
              FUN_00086ba0(local_40,local_d8,local_198,local_d0,local_c1 & 1);
              local_38 = 1;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = &cf_head;
              local_1d8 = &cf_head;
              uVar5 = CONCAT71((int7)((ulong)pdVar15 >> 8),local_47) & 0xffffffffffffff01;
              FUN_000870ec(local_28,local_40,local_78,local_60,local_42 & 1,local_48 & 1,
                           local_49 & 1,local_44 & 1,
                           CONCAT62((int6)(uVar5 >> 0x10),CONCAT11(local_46,(char)uVar5)) &
                           0xffffffffffff01ff,&local_1d8);
              _objc_storeStrong(&local_1b0,local_1d8);
              if ((local_148 <= 0.0) || (5.0 < local_148)) {
                local_448 = 1.5;
              }
              else {
                local_448 = local_148;
              }
              local_1f0 = local_448;
              if (local_448 < dVar7) {
                local_1f0 = dVar7;
              }
              dVar7 = dVar11 * local_1f0;
              dVar8 = dVar14 * local_1f0;
              dVar9 = dVar6 + (dVar11 - dVar7) / 2.0 + local_138;
              dVar10 = (dVar12 + (dVar14 - dVar8) / 2.0) - local_140;
              local_210 = dVar10;
              local_208 = dVar9;
              local_200 = dVar8;
              local_1f8 = dVar7;
              local_1e8 = dVar14;
              local_1e0 = dVar11;
              local_1d0 = dVar6;
              dStack_1c8 = dVar12;
              local_1c0 = dVar11;
              dStack_1b8 = dVar14;
              FUN_00074be0();
              dStack_248 = dStack_1c8;
              local_250 = local_1d0;
              dStack_238 = dStack_1b8;
              local_240 = local_1c0;
              uVar5 = local_d8;
              local_230 = dVar9;
              dStack_228 = dVar10;
              local_220 = dVar7;
              dStack_218 = dVar8;
              FUN_00087728(local_1d0,dStack_1c8,local_1c0,dStack_1b8,local_d8,local_60,local_40,
                           local_78);
              if ((uVar5 & 1) == 0) {
                dStack_288 = dStack_228;
                local_290 = local_230;
                dStack_278 = dStack_218;
                local_280 = local_220;
                dVar7 = local_230;
                dVar13 = dStack_228;
                dVar6 = local_220;
                dVar11 = dStack_218;
                FUN_00087de4(local_40,local_d0);
                uVar5 = local_d8;
                local_270 = dVar7;
                dStack_268 = dVar13;
                local_260 = dVar6;
                dStack_258 = dVar11;
                (*(code *)PTR__objc_retain_02578638)();
                local_298 = uVar5;
                if (uVar5 == 0) {
                  uVar2 = local_1a8;
                  FUN_00087f6c(local_270,dStack_268,local_260,dStack_258);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = local_298;
                  local_298 = uVar2;
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  FUN_00088270(local_298,local_d0,local_40,local_78,local_12c,local_198,local_c1 & 1
                              );
                  if ((local_49 & 1) != 0) {
                    FUN_00088570(local_58,local_28);
                  }
                  local_38 = 1;
                }
                else {
                  FUN_000889e0(local_270,dStack_268,local_260,dStack_258,uVar5,local_d0,local_1a8);
                  if ((uVar5 & 1) == 0) {
                    FUN_00089580(local_298,local_d0,local_40,local_78,local_12c,local_198,
                                 local_c1 & 1);
                    if ((local_49 & 1) != 0) {
                      FUN_00088570(local_58,local_28);
                    }
                    local_38 = 0;
                  }
                  else {
                    FUN_00089090(local_298,local_d0,local_40,local_78,local_12c,local_198,
                                 local_c1 & 1);
                    if ((local_49 & 1) != 0) {
                      FUN_00088570(local_58,local_28);
                    }
                    local_38 = 1;
                  }
                }
                _objc_storeStrong(&local_298,0);
              }
              else {
                if ((local_58 != 0) && (uVar5 = local_58, FUN_0007ba68(dVar13), (uVar5 & 1) != 0)) {
                  FUN_0007bc8c(local_58);
                }
                local_38 = 1;
              }
              _objc_storeStrong(&local_1b0,0);
            }
            _objc_storeStrong(&local_1a8);
            _objc_storeStrong(&local_1a0,0);
          }
          _objc_storeStrong(&local_198);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(&local_118,0);
        }
        else {
          if ((local_58 != 0) && (uVar5 = local_58, FUN_0007ba68(dVar13), (uVar5 & 1) != 0)) {
            FUN_0007bc8c(local_58);
          }
          local_38 = 1;
        }
        _objc_storeStrong(&local_d8);
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_40,0);
      goto LAB_00083994;
    }
  }
  local_38 = 1;
LAB_00083994:
  _objc_storeStrong(&local_28,0);
  return;
}

