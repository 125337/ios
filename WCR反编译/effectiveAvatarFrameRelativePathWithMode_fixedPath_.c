// effectiveAvatarFrameRelativePathWithMode:fixedPath: @ 01819584

/* Function Stack Size: 0x20 bytes */

ID WCRefineAvatarCornerBeautifyViewController::effectiveAvatarFrameRelativePathWithMode_fixedPath_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong local_2b8;
  ulong local_2b0;
  undefined *local_258;
  undefined *local_250;
  ID local_218;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168;
  undefined4 local_15c;
  ID local_158;
  ID local_150;
  long_long local_148;
  SEL local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = 0;
  local_148 = param_3;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_150,param_4);
  if (((long)local_148 < 0) || (2 < (long)local_148)) {
    local_148 = 0;
  }
  IVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_resolvedAvatarFrameImagePathForP_026b6098,local_150);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar2 == 0) {
    local_218 = 0;
  }
  else {
    local_218 = local_150;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = local_218;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_158;
  if (local_148 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = IVar1;
    local_15c = 1;
  }
  else if (local_148 == 1) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar4;
    _memset(auStack_1b8,0,0x40);
    puVar4 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_250 != (undefined *)0x0) {
      lVar6 = *local_1a8;
      local_258 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar6,puVar4);
          }
          local_178 = *(undefined8 *)(local_1b0 + (long)local_258 * 8);
          IVar1 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_resolvedAvatarFrameImagePathForP_026b6098,local_178);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar1);
          if (IVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_178);
          }
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_258 = (undefined *)0x0;
      } while (local_250 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_randomAvatarFrameRelativePathFro_026b60f8,local_170,local_158);
    _objc_retainAutoreleasedReturnValue();
    local_15c = 1;
    local_130 = IVar1;
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar4;
    _memset(auStack_208,0,0x40);
    IVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allAvatarFrameRelativePathsForPr_026b6100)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2b0 != 0) {
      lVar6 = *local_1f8;
      local_2b8 = 0;
      do {
        do {
          if (*local_1f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar6,IVar1);
          }
          local_1c8 = *(undefined8 *)(local_200 + local_2b8 * 8);
          IVar2 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_resolvedAvatarFrameImagePathForP_026b6098,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
          if (IVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_1c8);
          }
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_randomAvatarFrameRelativePathFro_026b60f8,local_1c0,local_158);
    _objc_retainAutoreleasedReturnValue();
    local_15c = 1;
    local_130 = IVar1;
    _objc_storeStrong(&local_1c0,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

