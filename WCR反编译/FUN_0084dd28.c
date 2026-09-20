// FUN_0084dd28 @ 0084dd28

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0084dd28(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double local_ce0;
  double local_cd8;
  double local_ca8;
  double local_ca0;
  double local_c00;
  double local_b58;
  double local_b18;
  double local_ac8;
  double local_ac0;
  double local_a90;
  double local_a60;
  double local_9e0;
  double local_9b8;
  double local_658;
  double local_4f0;
  double local_400;
  double local_3d0;
  double local_388;
  double local_330;
  long lStack_300;
  double local_298;
  double local_e0;
  double local_d8;
  undefined *local_80;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50 [3];
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  if ((((local_28 == 0) || (local_30 == 0)) || (DAT_028cd2c0 < 0)) || (2 < DAT_028cd2c0)) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar5 = local_30;
      FUN_00820a50();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_30;
      local_50[0] = lVar5;
      FUN_0084c170();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_30;
      local_58 = lVar6;
      FUN_0084c4f8();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_30;
      local_60 = lVar5;
      FUN_0084cb28();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_30;
      local_68 = lVar6;
      FUN_0084ce38();
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar5;
      if (((local_50[0] == 0) || (local_58 == 0)) || (local_60 == 0)) {
        local_34 = 1;
      }
      else {
        FUN_0084d604(local_58,DAT_028cd0b8,DAT_026f48a8);
        FUN_0084d604(local_60,DAT_028cd0c0,DAT_026f48b0);
        local_71 = DAT_028cd2c0 == 0;
        lVar5 = DAT_028cd0b8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd0b8,PTR_s_length_0269cca0);
        bVar2 = 1;
        if (lVar5 == 0) {
          lVar5 = DAT_028cd0c0;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd0c0,PTR_s_length_0269cca0);
          bVar2 = 1;
          if (lVar5 == 0) {
            bVar2 = DAT_028cd2c8;
          }
        }
        local_72 = bVar2 & 1;
        if ((DAT_028cd2c0 == 0) && ((bVar2 & 1) == 0)) {
          FUN_0084d910(local_28,local_30);
          local_34 = 1;
        }
        else {
          lVar5 = local_68;
          FUN_0085835c();
          local_73 = (byte)lVar5;
          lVar5 = local_70;
          FUN_0085835c();
          local_74 = (byte)lVar5;
          bVar1 = false;
          if ((local_71 & 1) != 0) {
            lVar5 = DAT_028cd0b8;
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd0b8,PTR_s_length_0269cca0);
            bVar1 = lVar5 != 0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setNumberOfLines__026ca9d8,!bVar1);
          lVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_numberOfLines_026a8e70);
          uVar12 = 4;
          if (lVar5 != 1) {
            uVar12 = 0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLineBreakMode__026ca988,uVar12);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setNumberOfLines__026ca9d8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setLineBreakMode__026ca988,0);
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_80 = puVar3;
          if (((DAT_028cd2c8 & 1) == 0) && ((local_73 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_68);
          }
          if (((DAT_028cd2c8 & 1) == 0) && ((local_74 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addObject__0269d180,local_70);
          }
          if (local_68 != 0) {
            bVar2 = 1;
            if ((local_73 & 1) != 0) {
              bVar2 = DAT_028cd2c8;
            }
            FUN_00853910(local_68,bVar2 & 1);
          }
          if (local_70 != 0) {
            bVar2 = 1;
            if ((local_74 & 1) != 0) {
              bVar2 = DAT_028cd2c8;
            }
            FUN_00853910(local_70,bVar2 & 1);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          _CGRectGetWidth();
          dVar7 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          _CGRectGetHeight();
          if (DAT_028cd2c0 == 1) {
            local_e0 = 24.0;
            dVar8 = 16.0;
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
            _CGRectGetWidth(dVar8,param_2,param_3,param_4);
            dVar8 = (double)(long)((param_1 - dVar8) * 0.5);
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar8,0x4030000000000000,param_3,param_4,local_50[0],PTR_s_setFrame__026ca960
                      );
            local_9b8 = param_1 - 48.0;
            uVar12 = 0x4054000000000000;
            if (local_9b8 < 80.0) {
              local_9b8 = 80.0;
            }
            FUN_008584c8(local_58,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextAlignment__026caa90,1);
            _CGRectGetMaxY(dVar8,0x4030000000000000,param_3,param_4);
            dVar8 = dVar8 + 18.0;
            dVar14 = local_e0;
            FUN_0081e864();
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar14,dVar8,local_9b8,local_58,PTR_s_setFrame__026ca960);
            local_9e0 = param_1 - 48.0;
            uVar13 = 0x4054000000000000;
            if (local_9e0 < 80.0) {
              local_9e0 = 80.0;
            }
            dVar8 = local_9e0;
            dVar15 = param_1;
            FUN_008584c8(local_60,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,1);
            dVar14 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
            _CGRectGetMaxY(dVar14,dVar8,dVar15,uVar12);
            dVar14 = dVar14 + 12.0;
            FUN_0081e864();
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
            _CGRectGetMaxY(local_e0,dVar14,local_9e0,uVar13);
            puVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            local_298 = local_e0;
            if (puVar3 != (undefined *)0x0) {
              local_298 = local_e0 + 18.0;
              FUN_008588e4(local_298,0x4038000000000000,param_1,local_80,1);
            }
            local_a60 = dVar7;
            if (dVar7 < local_298 + 18.0) {
              local_a60 = local_298 + 18.0;
            }
            local_d8 = local_a60;
          }
          else if (DAT_028cd2c0 == 2) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
            local_330 = 60.0;
            _CGRectGetMaxX(0x404e000000000000,param_2,param_3,param_4);
            local_330 = local_330 + 18.0;
            local_a90 = (param_1 - local_330) - 24.0;
            dVar8 = 80.0;
            if (local_a90 < 80.0) {
              local_a90 = 80.0;
            }
            dVar14 = local_a90;
            FUN_008584c8(local_58,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextAlignment__026caa90,1);
            FUN_008584c8(local_60,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,1);
            local_388 = (double)(long)(((dVar7 - dVar14) - 16.0) * 0.5);
            if (local_388 < dVar8 + 12.0) {
              local_388 = dVar8 + 12.0;
            }
            local_ac0 = dVar14 + local_388 * 2.0 + 16.0;
            local_3d0 = 60.0;
            _CGRectGetHeight(0x404e000000000000,param_2,param_3,param_4);
            if (local_ac0 < local_3d0 + 32.0) {
              local_ac0 = local_3d0 + 32.0;
            }
            local_ac8 = dVar7;
            if (dVar7 < local_ac0) {
              local_ac8 = local_ac0;
            }
            local_d8 = local_ac8;
            local_400 = 60.0;
            _CGRectGetHeight(0x404e000000000000,param_2,param_3,param_4);
            lStack_300 = (long)((local_ac8 - local_400) * 0.5);
            dVar9 = local_388 - dVar8;
            dVar10 = (local_ac8 - local_388) - dVar14;
            dVar15 = local_330;
            dVar11 = local_a90;
            FUN_0081e864();
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar15,dVar9,dVar11,dVar8,local_58,PTR_s_setFrame__026ca960);
            local_b18 = local_330;
            FUN_0081e864();
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
            _CGRectGetMaxY(local_b18,dVar10,local_a90,dVar14);
            puVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            if (puVar3 != (undefined *)0x0) {
              local_b18 = local_b18 + 18.0;
              FUN_008588e4(local_b18,local_330,param_1,local_80,1);
              local_b18 = local_b18 + 20.0;
              if (local_b18 <= local_ac8) {
                local_b18 = local_ac8;
              }
              local_d8 = local_b18;
              local_4f0 = 60.0;
              _CGRectGetHeight(0x404e000000000000,lStack_300,param_3,param_4);
              lStack_300 = (long)((local_b18 - local_4f0) * 0.5);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x404e000000000000,lStack_300,param_3,param_4,local_50[0],
                       PTR_s_setFrame__026ca960);
          }
          else {
            dVar8 = dVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
            dVar14 = dVar8;
            _CGRectGetMinX(dVar8,param_2,param_3,param_4);
            local_b58 = (param_1 - dVar14) - 24.0;
            dVar15 = 80.0;
            if (local_b58 < 80.0) {
              local_b58 = 80.0;
            }
            bVar1 = false;
            if ((local_71 & 1) != 0) {
              lVar5 = DAT_028cd0b8;
              (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd0b8,PTR_s_length_0269cca0);
              bVar1 = lVar5 != 0;
            }
            FUN_008584c8(local_58,!bVar1);
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextAlignment__026caa90,0);
            dVar11 = dVar8;
            _CGRectGetMinY(dVar8,param_2,param_3,param_4);
            dVar9 = dVar14;
            dVar18 = local_b58;
            dVar20 = dVar15;
            FUN_0081e864();
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
            dVar16 = dVar18;
            FUN_008584c8(local_60,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,0);
            local_658 = dVar9;
            _CGRectGetMinY(dVar9,dVar11,dVar18,dVar20);
            dVar10 = dVar8;
            _CGRectGetMaxY(dVar8,param_2,param_3,param_4);
            local_658 = local_658 - dVar10;
            if (local_658 < 8.0) {
              local_658 = 8.0;
            }
            local_c00 = dVar9;
            dVar17 = dVar11;
            dVar19 = dVar18;
            dVar21 = dVar20;
            _CGRectGetMinY();
            dVar10 = local_c00;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
            _CGRectGetMaxY(dVar10,dVar17,dVar19,dVar21);
            if (local_c00 < dVar10 + local_658) {
              local_c00 = dVar10 + local_658;
            }
            local_ca0 = dVar14;
            dVar10 = local_c00;
            dVar17 = dVar16;
            FUN_0081e864();
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFrame__026ca960);
            bVar1 = true;
            if ((DAT_028cd2c8 & 1) == 0) {
              _CGRectGetHeight(dVar8,param_2,param_3);
              local_b58 = 1.0;
              dVar10 = dVar8 + 1.0;
              bVar1 = true;
              local_ca0 = dVar15;
              dVar17 = param_4;
              if (dVar15 <= dVar10) {
                dVar10 = dVar9;
                dVar17 = dVar20;
                _CGRectGetMinY(dVar9,dVar11,dVar18);
                local_b58 = 1.0;
                dVar10 = dVar10 + 1.0;
                bVar1 = true;
                local_ca0 = local_c00;
                if (local_c00 <= dVar10) {
                  _CGRectGetHeight(dVar9,dVar11,dVar18);
                  local_b58 = 1.0;
                  dVar10 = dVar9 + 1.0;
                  bVar1 = dVar10 < dVar16;
                  local_ca0 = dVar16;
                  dVar17 = dVar20;
                }
              }
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
            _CGRectGetMaxY();
            puVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            if ((puVar3 == (undefined *)0x0) || (!bVar1)) {
              local_cd8 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
              _CGRectGetMaxY(local_cd8,dVar10,local_b58,dVar17);
              local_cd8 = local_cd8 + 16.0;
              if (local_cd8 < local_ca0 + 16.0) {
                local_cd8 = local_ca0 + 16.0;
              }
              local_ce0 = dVar7;
              if (dVar7 < local_cd8) {
                local_ce0 = local_cd8;
              }
              local_d8 = local_ce0;
            }
            else {
              local_ca0 = local_ca0 + 14.0;
              FUN_008588e4(local_ca0,dVar14,local_80,0);
              uVar12 = 0x4032000000000000;
              local_ca0 = local_ca0 + 18.0;
              dVar8 = local_ca0;
              (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
              _CGRectGetMaxY(dVar8,uVar12,param_1,dVar17);
              if (local_ca0 < dVar8 + 16.0) {
                local_ca0 = dVar8 + 16.0;
              }
              local_ca8 = dVar7;
              if (dVar7 < local_ca0) {
                local_ca8 = local_ca0;
              }
              local_d8 = local_ca8;
            }
          }
          FUN_00854074(dVar7,local_d8,local_28,local_30,0);
          _objc_storeStrong(&local_80,0);
          local_34 = 0;
        }
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(local_50,0);
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

