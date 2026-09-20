// tikTokBestCleanURLFromList: @ 010595f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::tikTokBestCleanURLFromList_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_198;
  undefined *local_190;
  undefined *local_168;
  undefined *local_158;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  SEL local_c8;
  ID local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (undefined *)0x0;
  local_c8 = param_2;
  local_c0 = param_1;
  _objc_storeStrong(&local_d0,param_3);
  puVar4 = local_d0;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = local_d0;
  local_e1 = 0;
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) == 0) {
      local_168 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_30 = local_d0;
      local_168 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_168;
    }
    local_158 = local_168;
  }
  else {
    local_158 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_158;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  _memset(auStack_130,0,0x40);
  puVar4 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_b0,0x10);
  if (local_190 != (undefined *)0x0) {
    lVar7 = *local_120;
    local_198 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,puVar4);
        }
        uVar8 = *(ulong *)(local_128 + (long)local_198 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_f0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar8 & 1) != 0) &&
           (IVar5 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c0,PTR_s_tikTokWatermarkSurvivesCleaning__026ae098,local_f0),
           (IVar5 & 1) == 0)) {
          IVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_tikTokCleanVideoURL__026ae0a0,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_hasPrefix__0269d320,&cf_http);
          if (((IVar5 & 1) == 0) ||
             (IVar6 = local_c0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c0,PTR_s_tikTokURLLooksWatermarked__026ae0a8,local_138),
             IVar5 = local_138, (IVar6 & 1) != 0)) {
            bVar1 = false;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b8 = IVar5;
            bVar1 = true;
          }
          _objc_storeStrong(&local_138,0);
          bVar2 = true;
          if (bVar1) goto LAB_010599ec;
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_b0,0x10)
      ;
      local_198 = (undefined *)0x0;
    } while (local_190 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_010599ec:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (!bVar2) {
    local_b8 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

