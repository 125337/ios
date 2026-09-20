// panelItems @ 01131a18

/* Function Stack Size: 0x10 bytes */

ID WCRefineQuickReplyStore::panelItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong local_460;
  ulong local_458;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined *local_368;
  undefined *local_360;
  undefined *local_338;
  undefined1 auStack_320 [8];
  long local_318;
  long *local_310;
  undefined8 local_2e0;
  long local_2d8;
  undefined *local_2d0;
  long local_2c8;
  undefined4 local_2bc;
  long local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  long local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  SEL local_208;
  ID local_200;
  undefined1 auStack_1f8 [128];
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  long local_150;
  cfstringStruct *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_208 = param_2;
  local_200 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_210 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_338 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_338 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = local_338;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar1;
  _memset(auStack_268,0,0x40);
  puVar1 = local_218;
  (*(code *)PTR__objc_retain_02578638)();
  local_360 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,0x10);
  if (local_360 != (undefined *)0x0) {
    lVar8 = *local_258;
    local_368 = (undefined *)0x0;
    do {
      do {
        if (*local_258 - lVar8 != 0) {
          _objc_enumerationMutation(*local_258 - lVar8,puVar1);
        }
        uVar9 = *(ulong *)(local_260 + (long)local_368 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_228 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar9 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_addObject__0269d180,local_228);
        }
        local_368 = local_368 + 1;
      } while (local_368 < local_360);
      local_360 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,0x10)
      ;
      local_368 = (undefined *)0x0;
    } while (local_360 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_220;
  FUN_011323c4(local_220,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar1 = local_220;
  local_220 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_2b0,0,0x40);
  puVar1 = local_220;
  (*(code *)PTR__objc_retain_02578638)();
  local_3b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10);
  if (local_3b0 != (undefined *)0x0) {
    lVar8 = *local_2a0;
    local_3b8 = (undefined *)0x0;
    do {
      do {
        if (*local_2a0 - lVar8 != 0) {
          _objc_enumerationMutation(*local_2a0 - lVar8,puVar1);
        }
        lVar10 = *(long *)(local_2a8 + (long)local_3b8 * 8);
        local_270 = lVar10;
        (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
        ;
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar10;
        FUN_01130f58();
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar10);
        lVar4 = local_2b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0);
        if (lVar4 == 0) {
          local_2bc = 5;
        }
        else {
          lVar4 = local_270;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_270,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar4;
          FUN_01130f58();
          _objc_retainAutoreleasedReturnValue();
          local_2c8 = lVar10;
          (*(code *)PTR__objc_release_02578630)(lVar4);
          lVar4 = local_2c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_length_0269cca0);
          if (lVar4 == 0) {
            _objc_storeStrong(&local_2c8,&cf_text);
          }
          local_178 = &cf_id;
          local_150 = local_2b8;
          local_170 = &cf_type;
          local_148 = &cf_repository;
          local_168 = &cf_payload;
          local_140 = local_2b8;
          local_160 = &cf_repoType;
          local_138 = local_2c8;
          local_158 = &cf_autoRepo;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_130 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_150,&local_178,5);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2d0 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          lVar4 = local_270;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_270,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar4;
          FUN_01130f58();
          _objc_retainAutoreleasedReturnValue();
          local_2d8 = lVar10;
          (*(code *)PTR__objc_release_02578630)(lVar4);
          lVar4 = local_2d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_length_0269cca0);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d8,&cf_remark);
          }
          puVar2 = local_210;
          puVar3 = local_2d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_2d8);
          _objc_storeStrong(&local_2d0,0);
          _objc_storeStrong(&local_2c8,0);
          local_2bc = 0;
        }
        _objc_storeStrong(&local_2b8,0);
        local_3b8 = local_3b8 + 1;
      } while (local_3b8 < local_3b0);
      local_3b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10
                );
      local_3b8 = (undefined *)0x0;
    } while (local_3b0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_320,0,0x40);
  IVar6 = local_200;
  (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_customItems_026af318);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  FUN_011323c4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  local_458 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_1f8,0x10);
  if (local_458 != 0) {
    lVar8 = *local_310;
    local_460 = 0;
    do {
      do {
        if (*local_310 - lVar8 != 0) {
          _objc_enumerationMutation(*local_310 - lVar8,IVar7);
        }
        local_2e0 = *(undefined8 *)(local_318 + local_460 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_2e0);
        local_460 = local_460 + 1;
      } while (local_460 < local_458);
      local_458 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_1f8,0x10)
      ;
      local_460 = 0;
    } while (local_458 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar7);
  puVar1 = local_210;
  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_copy_0269d150);
  local_2bc = 1;
  _objc_storeStrong(&local_220);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(&local_210,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

