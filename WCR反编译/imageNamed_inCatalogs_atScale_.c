// imageNamed:inCatalogs:atScale: @ 015ce454

/* Function Stack Size: 0x28 bytes */

ID WCRefineWechatThemeStore::imageNamed_inCatalogs_atScale_
             (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  double local_220;
  double local_1e0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_158;
  uint local_14c;
  double local_148;
  undefined8 local_140;
  double local_138;
  ulong local_130;
  cfstringStruct *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  double local_d8;
  ulong local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = param_5;
  _memset(auStack_120,0,0x40);
  uVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1a0 != 0) {
    lVar9 = *local_110;
    local_1a8 = 0;
    do {
      do {
        if (*local_110 - lVar9 != 0) {
          _objc_enumerationMutation(*local_110 - lVar9,uVar2);
        }
        local_e0 = *(ulong *)(local_118 + local_1a8 * 8);
        pcVar4 = &cf_imageWithName_scaleFactor_deviceIdiom_;
        _NSSelectorFromString();
        uVar5 = local_e0;
        local_128 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar4);
        uVar3 = local_c8;
        uVar8 = local_e0;
        pcVar4 = local_128;
        if ((uVar5 & 1) != 0) {
          local_138 = local_d8;
          local_140 = 0x3ff0000000000000;
          if (1.0 <= local_d8) {
            local_1e0 = local_d8;
          }
          else {
            local_1e0 = 1.0;
          }
          local_148 = local_1e0;
          puVar6 = PTR__OBJC_CLASS___UIDevice_026ce400;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIDevice_026ce400,PTR_s_currentDevice_026ca5d0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,uVar8,pcVar4,uVar3,puVar7);
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar8;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar8 = local_130;
          puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar6);
          uVar5 = local_130;
          bVar1 = (uVar8 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
          }
          local_14c = (uint)bVar1;
          _objc_storeStrong(&local_130,0);
          if (local_14c != 0) goto LAB_015ce928;
        }
        pcVar4 = &cf_imageWithName_scaleFactor_deviceIdiom_deviceSubtype_;
        _NSSelectorFromString();
        uVar5 = local_e0;
        local_128 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar4);
        uVar3 = local_c8;
        uVar8 = local_e0;
        pcVar4 = local_128;
        if ((uVar5 & 1) != 0) {
          if (1.0 <= local_d8) {
            local_220 = local_d8;
          }
          else {
            local_220 = 1.0;
          }
          puVar6 = PTR__OBJC_CLASS___UIDevice_026ce400;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIDevice_026ce400,PTR_s_currentDevice_026ca5d0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_220,uVar8,pcVar4,uVar3,puVar7,0);
          _objc_retainAutoreleasedReturnValue();
          local_158 = uVar8;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar8 = local_158;
          puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar6);
          uVar5 = local_158;
          bVar1 = (uVar8 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
          }
          local_14c = (uint)bVar1;
          _objc_storeStrong(&local_158,0);
          if (local_14c != 0) goto LAB_015ce928;
        }
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1a8 = 0;
    } while (local_1a0 != 0);
  }
  local_14c = 0;
LAB_015ce928:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_14c == 0) {
    local_b0 = 0;
    local_14c = 1;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}

