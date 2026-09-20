// onChipLongPress: @ 01b65d50

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::onChipLongPress_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double in_d2;
  double dVar16;
  undefined *local_498;
  undefined *local_490;
  ulong local_458;
  ulong local_450;
  undefined1 auStack_3a0 [8];
  long local_398;
  long *local_390;
  long local_360;
  undefined *local_358;
  ulong local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  ulong local_308;
  undefined *local_300;
  undefined1 auStack_2f8 [48];
  undefined1 auStack_2c8 [55];
  byte local_291;
  double local_290;
  undefined8 uStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  undefined8 uStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  double local_210;
  double local_200;
  ID local_1f0;
  ID local_1e8;
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [48];
  double local_180;
  undefined4 local_15c;
  ID local_158;
  ID local_150;
  ulong local_148;
  long local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02324188;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  dVar12 = DAT_02324188;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar4 = *(ulong *)(local_130 + (long)_chipBar);
  (*(code *)PTR__objc_retain_02578638)();
  lVar9 = local_140;
  local_148 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
  if (lVar9 == 1) {
    IVar5 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipAtGesture__026bf930,local_140);
    _objc_retainAutoreleasedReturnValue();
    local_150 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar5;
    if (((local_150 == 0) ||
        ((*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isEqualToString__0269ccc8,&cf___new__),
        (IVar5 & 1) != 0)) ||
       (IVar5 = local_158,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_158,PTR_s_isEqualToString__0269ccc8,&cf___manage__), (IVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setChipDragView__026bf970,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setChipIgnoreTap__026bf928,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setChipDragView__026bf970,local_150);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setChipDidDrag__026bf978,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_frame_026ca640);
      local_180 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(dVar12,local_130,PTR_s_setChipDragOriginX__026bf980);
      IVar5 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId);
      if (((IVar5 & 1) == 0) &&
         (puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
                    local_158), ((ulong)puVar6 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_bringSubviewToFront__026ca550,local_150);
        (*(code *)PTR__objc_msgSend_02578628)(0x3feb333333333333,local_150,PTR_s_setAlpha__026ca860)
        ;
        _CGAffineTransformMakeScale(dVar1);
        IVar5 = local_150;
        _memcpy(auStack_1e0,auStack_1b0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setTransform__026caad0,auStack_1e0);
      }
      else {
        IVar3 = local_130;
        IVar5 = local_158;
        IVar7 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_presentPackManageSheet_name__026bf988,IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar7);
      }
    }
    local_15c = 1;
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_150,0);
  }
  else {
    IVar5 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipDragView_026bf990);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = IVar5;
    if (IVar5 == 0) {
      local_15c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_accessibilityIdentifier_0269ec20);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_locationInView__026ca798,local_148);
      local_200 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_contentOffset_0269dd18);
      local_200 = local_200 + dVar12;
      lVar9 = local_140;
      local_210 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
      if (lVar9 == 2) {
        IVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId);
        if (((IVar5 & 1) == 0) &&
           (puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440,
           (*(code *)PTR__objc_msgSend_02578628)
                     (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
                      local_1f0), dVar1 = local_200, ((ulong)puVar6 & 1) == 0)) {
          dVar13 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipDragOriginX_026bf998);
          dVar14 = dVar13;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_frame_026ca640);
          dVar16 = 0.5;
          uVar15 = 0x4028000000000000;
          local_230 = dVar14;
          local_228 = dVar12;
          if (12.0 < ABS(dVar1 - (dVar13 + in_d2 * 0.5))) {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setChipDidDrag__026bf978,1);
          }
          IVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipDidDrag_026bf9a0);
          if ((IVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_frame_026ca640);
            local_290 = local_200 - dVar16 * 0.5;
            uStack_288 = uVar15;
            local_280 = dVar16;
            dStack_278 = dVar13;
            local_270 = local_290;
            uStack_268 = uVar15;
            local_260 = dVar16;
            dStack_258 = dVar13;
            local_250 = local_290;
            uStack_248 = uVar15;
            local_240 = dVar16;
            dStack_238 = dVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_290,uVar15,dVar16,dVar13,local_1e8,PTR_s_setFrame__026ca960);
          }
          local_15c = 1;
        }
        else {
          local_15c = 1;
        }
      }
      else {
        lVar9 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
        if ((lVar9 == 3) ||
           (lVar9 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20)
           , lVar9 == 4)) {
          IVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipDidDrag_026bf9a0);
          local_291 = (byte)IVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_1e8,PTR_s_setAlpha__026ca860);
          _memcpy(auStack_2c8,PTR__CGAffineTransformIdentity_025782d8,0x30);
          IVar5 = local_1e8;
          _memcpy(auStack_2f8,auStack_2c8,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setTransform__026caad0,auStack_2f8);
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setChipDragView__026bf970,0);
          IVar5 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId);
          if (((IVar5 & 1) == 0) &&
             (puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
                        local_1f0), IVar3 = local_130, IVar5 = local_1f0, ((ulong)puVar6 & 1) == 0))
          {
            if ((local_291 & 1) == 0) {
              IVar7 = local_1e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_accessibilityLabel_0269e1c8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar3,PTR_s_presentPackManageSheet_name__026bf988,IVar5);
              (*(code *)PTR__objc_release_02578630)(IVar7);
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadChipBar_026bf908);
              local_15c = 1;
            }
            else {
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_300 = puVar6;
              _memset(auStack_348,0,0x40);
              uVar4 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_450 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_450 != 0) {
                lVar9 = *local_338;
                local_458 = 0;
                do {
                  do {
                    if (*local_338 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_338 - lVar9,uVar4);
                    }
                    uVar10 = *(ulong *)(local_340 + local_458 * 8);
                    local_308 = uVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar10,PTR_s_accessibilityIdentifier_0269ec20);
                    _objc_retainAutoreleasedReturnValue();
                    local_350 = uVar10;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_length_0269cca0);
                    if ((((uVar10 == 0) ||
                         (uVar10 = local_350,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_350,PTR_s_isEqualToString__0269ccc8,
                                    _WCRLocalEmoticonGroupAllId), (uVar10 & 1) != 0)) ||
                        (uVar10 = local_350,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_350,PTR_s_isEqualToString__0269ccc8,&cf___new__),
                        (uVar10 & 1) != 0)) ||
                       ((uVar10 = local_350,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_350,PTR_s_isEqualToString__0269ccc8,&cf___manage__),
                        (uVar10 & 1) != 0 ||
                        (puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineLocalEmoticonStore_026ce440,
                                   PTR_s_isUngroupedPackRel__026a3aa8,local_350),
                        ((ulong)puVar6 & 1) != 0)))) {
                      local_15c = 3;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_300,PTR_s_addObject__0269d180,local_308);
                      local_15c = 0;
                    }
                    _objc_storeStrong(&local_350,0);
                    local_458 = local_458 + 1;
                  } while (local_458 < local_450);
                  local_450 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,
                             auStack_a8,0x10);
                  local_458 = 0;
                } while (local_450 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_300,PTR_s_sortUsingComparator__0269d168,
                         &PTR___NSConcreteGlobalBlock_0258b338);
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_358 = puVar6;
              _memset(auStack_3a0,0,0x40);
              puVar6 = local_300;
              (*(code *)PTR__objc_retain_02578638)();
              local_490 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,
                         auStack_128,0x10);
              if (local_490 != (undefined *)0x0) {
                lVar9 = *local_390;
                local_498 = (undefined *)0x0;
                do {
                  do {
                    if (*local_390 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_390 - lVar9,puVar6);
                    }
                    lVar11 = *(long *)(local_398 + (long)local_498 * 8);
                    local_360 = lVar11;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (lVar11,PTR_s_accessibilityIdentifier_0269ec20);
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = lVar11;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(lVar11);
                    puVar2 = local_358;
                    if (lVar8 != 0) {
                      lVar8 = local_360;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_360,PTR_s_accessibilityIdentifier_0269ec20);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                      (*(code *)PTR__objc_release_02578630)(lVar8);
                    }
                    local_498 = local_498 + 1;
                  } while (local_498 < local_490);
                  local_490 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,
                             auStack_128,0x10);
                  local_498 = (undefined *)0x0;
                } while (local_490 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_reorderPackRels__026a3e08,
                         local_358);
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadChipBar_026bf908);
              _objc_storeStrong(&local_358);
              _objc_storeStrong(&local_300,0);
              local_15c = 0;
            }
          }
          else {
            local_15c = 1;
          }
        }
        else {
          local_15c = 1;
        }
      }
      _objc_storeStrong(&local_1f0,0);
    }
    _objc_storeStrong(&local_1e8,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

