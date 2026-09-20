// loadAndDisplayCFGFromFile: @ 01d45fd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::loadAndDisplayCFGFromFile_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  cfstringStruct *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined8 uVar10;
  float fVar11;
  double in_d0;
  double dVar12;
  double in_d1;
  double dVar13;
  undefined8 in_d2;
  ID local_218;
  ID local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  int local_1c4;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_160;
  double dStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  byte local_111;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  int local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_89;
  undefined *local_88;
  ID local_80;
  ID local_78;
  byte local_69;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  long local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if ((local_38 == 0) ||
     (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_3c = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_3c = 1;
    }
    else {
      local_50 = 0;
      local_60 = 0;
      puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,puVar5,0,&local_60);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_50,local_60);
      local_58 = puVar6;
      if ((puVar6 == (undefined *)0x0) || (local_50 != 0)) {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar9 = local_28;
        local_208 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar9);
        _objc_storeStrong(&local_208,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isEqualToString__0269ccc8,&cf_double);
        local_69 = (byte)puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsDoubleMode__026c47b0,local_69 & 1)
        ;
        IVar9 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_78 = IVar7;
        (*(code *)PTR__objc_release_02578630)(IVar9);
        IVar9 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x4e22);
        _objc_retainAutoreleasedReturnValue();
        local_80 = IVar9;
        if (IVar9 != 0) {
          IVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
          pcVar2 = &cf_SV_j_;
          if ((IVar7 & 1) == 0) {
            pcVar2 = &cf_USV_j_;
          }
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_setTitle_forState__026caab8,pcVar2,0);
        }
        puVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 0;
        bVar3 = false;
        uVar1 = puVar5 != (undefined *)0x0;
        if ((bool)uVar1) {
          puVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = puVar6 != (undefined *)0x0;
          local_89 = uVar1;
          local_88 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar1 = local_89;
        }
        local_89 = uVar1;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        fVar11 = SUB84(in_d0,0);
        if (bVar3) {
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_a0 = dVar12;
          local_98 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          fVar11 = SUB84(dVar12,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_b0 = dVar12;
          local_a8 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          fVar11 = SUB84(dVar12,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_c0 = dVar12;
          local_b8 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          fVar11 = SUB84(dVar12,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_d0 = dVar12;
          local_c8 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,local_98,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,local_a8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,local_b8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          in_d0 = local_d0;
          in_d1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          for (local_d4 = 0; IVar9 = local_28, local_d4 < 4; local_d4 = local_d4 + 1) {
            IVar7 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
            _objc_retainAutoreleasedReturnValue();
            IVar8 = IVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_f8 = in_d0;
            local_f0 = in_d1;
            (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_displayPointFromImagePoint__026c47b8);
            local_e8 = in_d0;
            local_e0 = in_d1;
            (*(code *)PTR__objc_release_02578630)(IVar8);
            (*(code *)PTR__objc_release_02578630)(IVar7);
            in_d0 = local_e8;
            in_d1 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_createPointMarkerAtLocation_inde_026c47c0,(long)local_d4,0);
          }
        }
        fVar11 = SUB84(in_d0,0);
        local_101 = 0;
        local_111 = 0;
        bVar3 = false;
        if ((local_69 & 1) != 0) {
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
          _objc_retainAutoreleasedReturnValue();
          local_101 = 1;
          bVar3 = false;
          local_100 = puVar5;
          if (puVar5 != (undefined *)0x0) {
            puVar5 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y2);
            _objc_retainAutoreleasedReturnValue();
            local_111 = 1;
            bVar3 = puVar5 != (undefined *)0x0;
            local_110 = puVar5;
          }
        }
        if ((local_111 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_110);
        }
        if ((local_101 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_100);
        }
        if (bVar3) {
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
          if ((IVar9 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSecondSetFields_026c4768);
            uVar10 = 0x4076800000000000;
            local_120 = 0x4076800000000000;
            IVar9 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_coordinatePanel_026c4718);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_140 = uVar10;
            dStack_138 = in_d1;
            local_130 = in_d2;
            (*(code *)PTR__objc_release_02578630)(IVar9);
            uStack_128 = local_120;
            dStack_158 = dStack_138;
            local_160 = local_140;
            uStack_148 = local_120;
            local_150 = local_130;
            IVar9 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_coordinatePanel_026c4718);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,dStack_158,local_150,uStack_148);
            fVar11 = (float)uVar10;
            (*(code *)PTR__objc_release_02578630)(IVar9);
          }
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y2);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_190 = dVar12;
          local_188 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          fVar11 = SUB84(dVar12,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y2);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_1a0 = dVar12;
          local_198 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          fVar11 = SUB84(dVar12,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y2);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_1b0 = dVar12;
          local_1a8 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          fVar11 = SUB84(dVar12,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = (double)fVar11;
          puVar6 = local_58;
          dVar13 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y2);
          fVar11 = SUB84(dVar13,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = (double)fVar11;
          FUN_01d47748();
          local_1c0 = dVar12;
          local_1b8 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_190,local_188,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,local_198,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,local_1a8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          dVar13 = local_1c0;
          dVar12 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          for (local_1c4 = 0; IVar9 = local_28, local_1c4 < 4; local_1c4 = local_1c4 + 1) {
            IVar7 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
            _objc_retainAutoreleasedReturnValue();
            IVar8 = IVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1e8 = dVar13;
            local_1e0 = dVar12;
            (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_displayPointFromImagePoint__026c47b8);
            local_1d8 = dVar13;
            local_1d0 = dVar12;
            (*(code *)PTR__objc_release_02578630)(IVar8);
            (*(code *)PTR__objc_release_02578630)(IVar7);
            dVar13 = local_1d8;
            dVar12 = local_1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_createPointMarkerAtLocation_inde_026c47c0,(long)local_1c4,1);
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updatePointCount_026c47c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateCoordinateFields_026c47d0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redrawCanvas_026c47d8);
        puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_dataWithJSONObject_options_error_026a64a8,local_58,1,0);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = puVar5;
        if (puVar5 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          IVar9 = local_28;
          local_200 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar9);
          _objc_storeStrong(&local_200,0);
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          IVar9 = local_28;
          local_1f8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar9);
          _objc_storeStrong(&local_1f8,0);
        }
        _objc_storeStrong(&local_1f0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_68,0);
      }
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_210 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar9 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_viewWithTag__026cabe0,0x4e23);
      _objc_retainAutoreleasedReturnValue();
      local_218 = IVar9;
      if (IVar9 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_setTitle_forState__026caab8,&cf_C,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_adjustLayout_026c47e0);
      _objc_storeStrong(&local_218);
      _objc_storeStrong(&local_210,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

