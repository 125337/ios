// controllerSuggestionsForPluginName: @ 01c948f0

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::controllerSuggestionsForPluginName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_2c0;
  undefined *local_2b8;
  ulong local_278;
  ulong local_270;
  ID local_228;
  ID local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined *local_1d0;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  undefined *local_178;
  ulong local_170;
  undefined4 local_164;
  ulong local_160;
  ID local_158;
  ulong local_150;
  SEL local_148;
  ID local_140;
  undefined *local_138;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [128];
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = 0;
  local_148 = param_2;
  local_140 = param_1;
  _objc_storeStrong(&local_150,param_3);
  IVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_150;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_158 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar6;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
  if ((IVar1 == 0) ||
     (uVar6 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
     uVar6 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_164 = 1;
    local_138 = puVar2;
  }
  else {
    uVar6 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_160;
    local_170 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsString__0269d0b0,&cf_mo_O__);
    if (((uVar3 & 1) == 0) &&
       (uVar6 = local_170,
       (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_containsString__0269d0b0,&cf_msgfilt),
       (uVar6 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar2;
      _memset(auStack_1c0,0,0x40);
      IVar1 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_270 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_270 != 0) {
        lVar5 = *local_1b0;
        local_278 = 0;
        do {
          do {
            if (*local_1b0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar5,IVar1);
            }
            uVar6 = *(ulong *)(local_1b8 + local_278 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_180 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_1c8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8,local_170)
              ;
              if ((uVar6 & 1) == 0) {
                uVar6 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c8,PTR_s_containsString__0269d0b0,local_170);
                if (((uVar6 & 1) != 0) ||
                   (uVar6 = local_170,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_170,PTR_s_containsString__0269d0b0,local_1c8), (uVar6 & 1) != 0)
                   ) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_addObject__0269d180,local_180);
                }
                local_164 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_insertObject_atIndex__0269eac0,local_180,0);
                local_164 = 3;
              }
              _objc_storeStrong(&local_1c8,0);
            }
            local_278 = local_278 + 1;
          } while (local_278 < local_270);
          local_270 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_b0,
                     0x10);
          local_278 = 0;
        } while (local_270 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = puVar2;
      _memset(auStack_218,0,0x40);
      puVar2 = local_178;
      (*(code *)PTR__objc_retain_02578638)();
      local_2b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_130,0x10
                );
      if (local_2b8 != (undefined *)0x0) {
        lVar5 = *local_208;
        local_2c0 = (undefined *)0x0;
        do {
          do {
            if (*local_208 - lVar5 != 0) {
              _objc_enumerationMutation(*local_208 - lVar5,puVar2);
            }
            local_1d8 = *(undefined8 *)(local_210 + (long)local_2c0 * 8);
            IVar1 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_1d8);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = local_140;
            local_220 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_preferredMainControllerForPlugin_026c2bd0,local_1d8,IVar1);
            _objc_retainAutoreleasedReturnValue();
            local_228 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
            if (IVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_228);
            }
            _objc_storeStrong(&local_228);
            _objc_storeStrong(&local_220,0);
            local_2c0 = local_2c0 + 1;
          } while (local_2c0 < local_2b8);
          local_2b8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_130,
                     0x10);
          local_2c0 = (undefined *)0x0;
        } while (local_2b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
      if ((puVar2 == (undefined *)0x0) &&
         (uVar6 = local_160,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_160,PTR_s_rangeOfString_options__0269d118,&cf_Controller,1),
         uVar6 != 0x7fffffffffffffff)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_160);
      }
      puVar2 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_164 = 1;
      local_138 = puVar2;
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_178,0);
    }
    else {
      local_30 = &cf_MsgFiltViewController;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_164 = 1;
      local_138 = puVar2;
    }
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_138;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

