// usageLabelsForMediaFileName:configuration: @ 015d9990

/* Function Stack Size: 0x20 bytes */

ID WCRGlobalPageBackgroundStore::usageLabelsForMediaFileName_configuration_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  ulong local_1e0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_188;
  ID local_168;
  bool local_159;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  bool local_f1;
  ulong local_f0;
  ulong local_e8;
  undefined4 local_dc;
  long local_d8;
  ulong local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  lVar8 = local_c8;
  FUN_015d5afc();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = lVar8;
  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar2;
  }
  else {
    uVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_f1 = false;
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      local_188 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    else {
      local_188 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_188;
    }
    local_f1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_188;
    if ((local_f1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar2;
    _memset(auStack_148,0,0x40);
    IVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_supportedScenes_026a8e20);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b0 != 0) {
      lVar8 = *local_138;
      local_1b8 = 0;
      do {
        do {
          if (*local_138 - lVar8 != 0) {
            _objc_enumerationMutation(*local_138 - lVar8,IVar5);
          }
          local_108 = *(undefined8 *)(local_140 + local_1b8 * 8);
          uVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_108);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_159 = false;
          bVar1 = (uVar4 & 1) == 0;
          if (bVar1) {
            local_1e0 = *(ulong *)PTR____NSDictionary0___02578288;
          }
          else {
            local_1e0 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_108);
            _objc_retainAutoreleasedReturnValue();
            local_158 = local_1e0;
          }
          local_159 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_1e0;
          if ((local_159 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          IVar6 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_displayNameForScene__026b0fe8,local_108);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_150;
          local_168 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_day);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          puVar2 = local_100;
          if ((uVar4 & 1) != 0) {
            puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          uVar3 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_night);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          puVar2 = local_100;
          if ((uVar4 & 1) != 0) {
            puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          _objc_storeStrong(&local_168);
          _objc_storeStrong(&local_150,0);
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1b8 = 0;
      } while (local_1b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    puVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_copy_0269d150);
    local_dc = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

