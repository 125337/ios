// wcr_rebuild @ 01d8fc74

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSSDonutView::wcr_rebuild(ID param_1,SEL param_2)

{
  double dVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 in_d1;
  double dVar16;
  double in_d2;
  double dVar17;
  double in_d3;
  undefined8 uVar18;
  double local_bc8;
  cfstringStruct *local_b98;
  cfstringStruct *local_ac8;
  cfstringStruct *local_a80;
  cfstringStruct *local_a78;
  cfstringStruct *local_a30;
  cfstringStruct *local_a28;
  undefined *local_9e0;
  undefined *local_9d8;
  cfstringStruct *local_9a0;
  cfstringStruct *local_998;
  cfstringStruct *local_950;
  cfstringStruct *local_948;
  double local_8e8;
  undefined *local_8c0;
  undefined *local_8b8;
  cfstringStruct *local_870;
  cfstringStruct *local_868;
  undefined *local_7d0;
  byte local_7c1;
  cfstringStruct *local_7c0;
  undefined *local_7b8;
  bool local_7a9;
  cfstringStruct *local_7a8;
  byte local_799;
  cfstringStruct *local_798;
  cfstringStruct *local_790;
  undefined *local_788;
  undefined *local_780;
  double local_778;
  double local_770;
  byte local_761;
  double local_760;
  double local_758;
  double local_750;
  double local_748;
  double local_740;
  double local_738;
  double local_730;
  double dStack_728;
  double local_720;
  double dStack_718;
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  byte local_6e1;
  cfstringStruct *local_6e0;
  byte local_6d1;
  cfstringStruct *local_6d0;
  byte local_6c1;
  cfstringStruct *local_6c0;
  cfstringStruct *local_6b8;
  undefined *local_6b0;
  undefined *local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  undefined1 auStack_688 [8];
  long local_680;
  long *local_678;
  undefined8 local_648;
  undefined1 auStack_640 [8];
  long local_638;
  long *local_630;
  ulong local_600;
  undefined1 auStack_5f8 [8];
  long local_5f0;
  long *local_5e8;
  undefined8 local_5b8;
  undefined1 auStack_5b0 [8];
  long local_5a8;
  long *local_5a0;
  long local_570;
  undefined *local_568;
  cfstringStruct *local_560;
  double local_558;
  undefined1 auStack_550 [8];
  long local_548;
  long *local_540;
  undefined8 local_510;
  double local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  undefined8 uStack_4e8;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  undefined *local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  undefined4 local_474;
  double local_470;
  undefined8 local_468;
  double local_460;
  double local_458;
  undefined1 auStack_450 [8];
  long local_448;
  long *local_440;
  undefined8 local_410;
  undefined1 auStack_408 [8];
  long local_400;
  long *local_3f8;
  ulong local_3c8;
  undefined *local_3c0;
  SEL local_3b8;
  cfstringStruct *local_3b0;
  undefined1 auStack_3a8 [128];
  undefined1 auStack_328 [128];
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02324200;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  dVar14 = DAT_02324200;
  local_3b8 = param_2;
  local_3b0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_3c0 = puVar2;
  _memset(auStack_408,0,0x40);
  pcVar3 = local_3b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_868 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_408,auStack_a8,0x10);
  if (local_868 != (cfstringStruct *)0x0) {
    lVar10 = *local_3f8;
    local_870 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_3f8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_3f8 - lVar10,pcVar4);
        }
        uVar11 = *(ulong *)(local_400 + (long)local_870 * 8);
        local_3c8 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar11);
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_addObject__0269d180,local_3c8);
        }
        local_870 = (cfstringStruct *)((long)&local_870->field0_0x0 + 1);
      } while (local_870 < local_868);
      local_868 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_408,auStack_a8,0x10)
      ;
      local_870 = (cfstringStruct *)0x0;
    } while (local_868 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _memset(auStack_450,0,0x40);
  puVar2 = local_3c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_8b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_450,auStack_128,0x10);
  if (local_8b8 != (undefined *)0x0) {
    lVar10 = *local_440;
    local_8c0 = (undefined *)0x0;
    do {
      do {
        if (*local_440 - lVar10 != 0) {
          _objc_enumerationMutation(*local_440 - lVar10,puVar2);
        }
        local_410 = *(undefined8 *)(local_448 + (long)local_8c0 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_removeFromSuperlayer_026ca7f8);
        local_8c0 = local_8c0 + 1;
      } while (local_8c0 < local_8b8);
      local_8b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_450,auStack_128,0x10
                );
      local_8c0 = (undefined *)0x0;
    } while (local_8b8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_bounds_026ca548);
  local_470 = dVar14;
  if ((in_d2 < 8.0) || (in_d3 < 8.0)) {
    local_474 = 1;
  }
  else {
    local_480 = 26.0;
    local_468 = in_d1;
    local_460 = in_d2;
    local_458 = in_d3;
    _CGRectGetMidX(dVar14,in_d1,in_d2,in_d3);
    dVar15 = local_470;
    _CGRectGetMidY(local_470,local_468,local_460,local_458);
    FUN_01d8ebbc();
    local_4a0 = local_460;
    local_4a8 = local_458;
    if (local_458 <= local_460) {
      local_8e8 = local_458;
    }
    else {
      local_8e8 = local_460;
    }
    local_4b0 = local_8e8;
    dVar13 = (local_8e8 / 2.0 - local_480 / 2.0) - 4.0;
    uVar18 = 0;
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    local_498 = dVar13;
    local_490 = dVar14;
    local_488 = dVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar14,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithArcCenter_radius_s_026c4dd0,1);
    _objc_retainAutoreleasedReturnValue();
    local_4b8 = puVar2;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
    pcVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_trackLayer_026c4dd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    dVar14 = local_480;
    pcVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_trackLayer_026c4dd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_bounds_026ca548);
    pcVar3 = local_3b0;
    local_4d8 = dVar14;
    dStack_4d0 = dVar15;
    local_4c8 = dVar13;
    uStack_4c0 = uVar18;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_trackLayer_026c4dd8);
    _objc_retainAutoreleasedReturnValue();
    dStack_4f8 = dStack_4d0;
    local_500 = local_4d8;
    uStack_4e8 = uStack_4c0;
    local_4f0 = local_4c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d8,dStack_4d0,local_4c8,uStack_4c0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    dVar14 = 0.0;
    local_508 = 0.0;
    _memset(auStack_550,0,0x40);
    pcVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_values_026c4de0);
    _objc_retainAutoreleasedReturnValue();
    local_948 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_948 != (cfstringStruct *)0x0) {
      lVar10 = *local_540;
      local_950 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_540 - lVar10 != 0) {
            _objc_enumerationMutation(*local_540 - lVar10,pcVar3);
          }
          local_510 = *(undefined8 *)(local_548 + (long)local_950 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_510,PTR_s_doubleValue_026ca608);
          dVar14 = local_508 + dVar14;
          local_950 = (cfstringStruct *)((long)&local_950->field0_0x0 + 1);
          local_508 = dVar14;
        } while (local_950 < local_948);
        local_948 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_550,auStack_1a8,
                   0x10);
        local_950 = (cfstringStruct *)0x0;
      } while (local_948 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_trackLayer_026c4dd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (0.0 < local_508) {
      local_558 = DAT_02323e28;
      local_560 = (cfstringStruct *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      dVar14 = DAT_02323e28;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_568 = puVar2;
      _memset(auStack_5b0,0,0x40);
      pcVar3 = local_3b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_998 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_998 != (cfstringStruct *)0x0) {
        lVar10 = *local_5a0;
        local_9a0 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_5a0 - lVar10 != 0) {
              _objc_enumerationMutation(*local_5a0 - lVar10,pcVar3);
            }
            lVar12 = *(long *)(local_5a8 + (long)local_9a0 * 8);
            local_570 = lVar12;
            (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_tag_026cab98);
            if (lVar12 == 0x3d) {
              (*(code *)PTR__objc_msgSend_02578628)(local_568,PTR_s_addObject__0269d180,local_570);
            }
            local_9a0 = (cfstringStruct *)((long)&local_9a0->field0_0x0 + 1);
          } while (local_9a0 < local_998);
          local_998 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5b0,auStack_228,
                     0x10);
          local_9a0 = (cfstringStruct *)0x0;
        } while (local_998 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _memset(auStack_5f8,0,0x40);
      puVar2 = local_568;
      (*(code *)PTR__objc_retain_02578638)();
      local_9d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5f8,auStack_2a8,0x10
                );
      if (local_9d8 != (undefined *)0x0) {
        lVar10 = *local_5e8;
        local_9e0 = (undefined *)0x0;
        do {
          do {
            if (*local_5e8 - lVar10 != 0) {
              _objc_enumerationMutation(*local_5e8 - lVar10,puVar2);
            }
            local_5b8 = *(undefined8 *)(local_5f0 + (long)local_9e0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_5b8,PTR_s_removeFromSuperview_026ca800);
            local_9e0 = local_9e0 + 1;
          } while (local_9e0 < local_9d8);
          local_9d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5f8,auStack_2a8,
                     0x10);
          local_9e0 = (undefined *)0x0;
        } while (local_9d8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _memset(auStack_640,0,0x40);
      pcVar3 = local_3b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_a28 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_640,auStack_328,0x10
                );
      if (local_a28 != (cfstringStruct *)0x0) {
        lVar10 = *local_630;
        local_a30 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_630 - lVar10 != 0) {
              _objc_enumerationMutation(*local_630 - lVar10,pcVar6);
            }
            uVar11 = *(ulong *)(local_638 + (long)local_a30 * 8);
            local_600 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar11);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_600,PTR_s_removeFromSuperlayer_026ca7f8);
            }
            local_a30 = (cfstringStruct *)((long)&local_a30->field0_0x0 + 1);
          } while (local_a30 < local_a28);
          local_a28 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_640,auStack_328,
                     0x10);
          local_a30 = (cfstringStruct *)0x0;
        } while (local_a28 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      _memset(auStack_688,0,0x40);
      pcVar3 = local_3b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_values_026c4de0);
      _objc_retainAutoreleasedReturnValue();
      local_a78 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_a78 != (cfstringStruct *)0x0) {
        lVar10 = *local_678;
        local_a80 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_678 - lVar10 != 0) {
              _objc_enumerationMutation(*local_678 - lVar10,pcVar3);
            }
            local_648 = *(undefined8 *)(local_680 + (long)local_a80 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_648,PTR_s_doubleValue_026ca608);
            dVar14 = dVar14 / local_508;
            local_690 = dVar14;
            if (0.0 < dVar14) {
              local_698 = dVar14 * dVar1;
              local_6a0 = local_558 + local_698;
              puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
              dVar14 = local_488;
              dVar15 = local_498;
              dVar13 = local_558;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_490,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                         PTR_s_bezierPathWithArcCenter_radius_s_026c4dd0,1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
              local_6a8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_6b0 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_wcrss_slice__lu);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_setName__0269e0c8);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              puVar7 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_setFillColor__026ca948,puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              pcVar4 = local_560;
              pcVar6 = local_3b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_colors_026b09b0);
              _objc_retainAutoreleasedReturnValue();
              local_ac8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_6c1 = 0;
              local_6d1 = 0;
              local_6e1 = 0;
              if (pcVar4 < local_ac8) {
                local_ac8 = local_3b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_colors_026b09b0);
                _objc_retainAutoreleasedReturnValue();
                local_6c1 = 1;
                local_6c0 = local_ac8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_6d1 = 1;
                local_6d0 = local_ac8;
              }
              else {
                FUN_01d91918((long)pcVar4 - (long)local_ac8);
                _objc_retainAutoreleasedReturnValue();
                local_6e1 = 1;
                local_6e0 = local_ac8;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_6b8 = local_ac8;
              if ((local_6e1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_6e0);
              }
              if ((local_6d1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_6d0);
              }
              if ((local_6c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_6c0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar4 = local_6b8;
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_setStrokeColor__026caa78,pcVar4)
              ;
              dVar16 = local_480;
              (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_setLineWidth__026ca9b0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_6b0,PTR_s_setLineCap__026ca990,
                         *(undefined8 *)PTR__kCALineCapButt_02578400);
              puVar2 = local_6a8;
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
              (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_setPath__026caa08,puVar2);
              (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_bounds_026ca548);
              local_730 = dVar16;
              dStack_728 = dVar14;
              local_720 = dVar15;
              dStack_718 = dVar13;
              local_708 = dVar16;
              dStack_700 = dVar14;
              local_6f8 = dVar15;
              dStack_6f0 = dVar13;
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar16,dVar14,dVar15,dVar13,local_6b0,PTR_s_setFrame__026ca960);
              pcVar4 = local_3b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_6b0;
              pcVar6 = local_3b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_trackLayer_026c4dd8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_insertSublayer_above__026c4de8,puVar2);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              pcVar4 = local_3b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_showLeaders_026c4df0);
              dVar14 = local_490;
              if ((((ulong)pcVar4 & 1) != 0) && (DAT_02323ee0 <= local_690)) {
                dVar15 = local_558 + local_698 / 2.0;
                local_740 = local_498 + local_480 / 2.0 + 2.0;
                local_738 = dVar15;
                _cos();
                dVar13 = local_488;
                dVar14 = dVar14 + local_740 * dVar15;
                dVar15 = local_738;
                _sin();
                dVar13 = dVar13 + local_740 * dVar15;
                FUN_01d8ebbc();
                dVar15 = local_490;
                dVar16 = local_738;
                local_750 = dVar14;
                local_748 = dVar13;
                _cos();
                dVar14 = local_488;
                dVar15 = dVar15 + (local_740 + 14.0) * dVar16;
                dVar13 = local_738;
                _sin();
                dVar17 = local_740 + 14.0;
                dVar16 = dVar14 + dVar17 * dVar13;
                FUN_01d8ebbc();
                dVar13 = local_738;
                local_760 = dVar15;
                local_758 = dVar16;
                _cos();
                local_761 = 0.0 <= dVar13;
                iVar9 = 0x12;
                if (!(bool)local_761) {
                  iVar9 = -0x12;
                }
                dVar13 = local_760 + (double)iVar9;
                dVar15 = local_758;
                FUN_01d8ebbc();
                puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
                local_778 = dVar13;
                local_770 = dVar15;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
                _objc_retainAutoreleasedReturnValue();
                local_780 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_750,local_748,puVar2,PTR_s_moveToPoint__026a01b0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_760,local_758,local_780,PTR_s_addLineToPoint__026a01b8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_778,local_770,local_780,PTR_s_addLineToPoint__026a01b8);
                puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_788 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_wcrss_lead__lu);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_788,PTR_s_setName__0269e0c8);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                _objc_retainAutoreleasedReturnValue();
                _objc_retainAutorelease();
                puVar7 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
                (*(code *)PTR__objc_msgSend_02578628)(local_788,PTR_s_setFillColor__026ca948,puVar7)
                ;
                (*(code *)PTR__objc_release_02578630)(puVar2);
                pcVar4 = local_6b8;
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_CGColor_026ca470);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_788,PTR_s_setStrokeColor__026caa78,pcVar4);
                (*(code *)PTR__objc_msgSend_02578628)
                          (0x3ff0000000000000,local_788,PTR_s_setLineWidth__026ca9b0);
                puVar2 = local_780;
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
                (*(code *)PTR__objc_msgSend_02578628)(local_788,PTR_s_setPath__026caa08,puVar2);
                pcVar4 = local_3b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                pcVar4 = local_560;
                pcVar6 = local_3b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_sliceTitles_026c4df8);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_799 = 0;
                local_7a9 = false;
                if (pcVar8 <= pcVar4) {
                  local_b98 = &::cf___;
                }
                else {
                  local_b98 = local_3b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_sliceTitles_026c4df8);
                  _objc_retainAutoreleasedReturnValue();
                  local_799 = 1;
                  local_798 = local_b98;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_7a8 = local_b98;
                }
                local_7a9 = pcVar8 > pcVar4;
                (*(code *)PTR__objc_retain_02578638)();
                local_790 = local_b98;
                if ((local_7a9 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_7a8);
                }
                if ((local_799 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_798);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                pcVar4 = local_790;
                (*(code *)PTR__objc_msgSend_02578628)(local_790,PTR_s_length_0269cca0);
                local_7c1 = 0;
                if (pcVar4 != (cfstringStruct *)0x0) {
                  pcVar6 = local_790;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_790,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
                  _objc_retainAutoreleasedReturnValue();
                  local_7c0 = pcVar6;
                }
                local_7c1 = pcVar4 != (cfstringStruct *)0x0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____0f__);
                _objc_retainAutoreleasedReturnValue();
                local_7b8 = puVar2;
                if ((local_7c1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_7c0);
                }
                puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                _objc_alloc_init();
                local_7d0 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x3d);
                puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60
                          );
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_7d0,PTR_s_setFont__026ca958);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_7d0,PTR_s_setTextColor__026caa98,local_6b8);
                (*(code *)PTR__objc_msgSend_02578628)(local_7d0,PTR_s_setText__026caa88,local_7b8);
                (*(code *)PTR__objc_msgSend_02578628)(local_7d0,PTR_s_sizeToFit_0269ec08);
                (*(code *)PTR__objc_msgSend_02578628)(local_7d0,PTR_s_frame_026ca640);
                if ((local_761 & 1) == 0) {
                  local_bc8 = (local_778 - dVar17) - 3.0;
                }
                else {
                  local_bc8 = local_778 + 3.0;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_bc8,local_770 - dVar14 / 2.0,dVar17,dVar14,local_7d0,
                           PTR_s_setFrame__026ca960);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3b0,PTR_s_addSubview__026ca4c0,local_7d0);
                _objc_storeStrong(&local_7d0);
                _objc_storeStrong(&local_7b8,0);
                _objc_storeStrong(&local_790,0);
                _objc_storeStrong(&local_788,0);
                _objc_storeStrong(&local_780,0);
              }
              local_558 = local_6a0;
              local_560 = (cfstringStruct *)((long)&local_560->field0_0x0 + 1);
              dVar14 = local_6a0;
              _objc_storeStrong(&local_6b8);
              _objc_storeStrong(&local_6b0,0);
              _objc_storeStrong(&local_6a8,0);
            }
            else {
              local_560 = (cfstringStruct *)((long)&local_560->field0_0x0 + 1);
            }
            local_a80 = (cfstringStruct *)((long)&local_a80->field0_0x0 + 1);
          } while (local_a80 < local_a78);
          local_a78 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_688,auStack_3a8,
                     0x10);
          local_a80 = (cfstringStruct *)0x0;
        } while (local_a78 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_568,0);
      local_474 = 0;
    }
    else {
      local_474 = 1;
    }
    _objc_storeStrong(&local_4b8,0);
  }
  _objc_storeStrong(&local_3c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

