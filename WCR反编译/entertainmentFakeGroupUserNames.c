// entertainmentFakeGroupUserNames @ 0016a3e0

/* Function Stack Size: 0x10 bytes */

ID WCRefineClearSessionHook::entertainmentFakeGroupUserNames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong local_290;
  ulong local_288;
  ID local_270;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ID local_1a0;
  cfstringStruct *local_198;
  ID local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  _memset(auStack_188,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_allSessionUserNames_0269f818);
  _objc_retainAutoreleasedReturnValue();
  local_220 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_220 != 0) {
    lVar6 = *local_178;
    local_228 = 0;
    do {
      do {
        if (*local_178 - lVar6 != 0) {
          _objc_enumerationMutation(*local_178 - lVar6,IVar2);
        }
        local_148 = *(undefined8 *)(local_180 + local_228 * 8);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_isEntertainmentFakeGroupUserName_0269f820,local_148);
        if ((IVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_148);
        }
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_228 = 0;
    } while (local_220 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_130;
  pcVar4 = "CContactMgr";
  _objc_getClass("CContactMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_serviceOfClass__0269f7e0,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_getAllContactUserNameFromCache;
  local_190 = IVar2;
  _NSSelectorFromString();
  local_198 = pcVar5;
  if ((local_190 != 0) &&
     (IVar2 = local_190,
     (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_respondsToSelector__026ca818,pcVar5),
     (IVar2 & 1) != 0)) {
    IVar2 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,local_198);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = IVar2;
    _memset(auStack_1f8,0,0x40);
    IVar2 = local_1a0;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((IVar2 & 1) == 0) {
      local_270 = *(ID *)PTR____NSArray0___02578280;
    }
    else {
      local_270 = local_1a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_270,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
               0x10);
    if (local_288 != 0) {
      lVar6 = *local_1e8;
      local_290 = 0;
      do {
        do {
          if (*local_1e8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar6,local_270);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + local_290 * 8);
          IVar2 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_isEntertainmentFakeGroupUserName_0269f820,local_1b8);
          if ((IVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1b8);
          }
          local_290 = local_290 + 1;
        } while (local_290 < local_288);
        local_288 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_270,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128
                   ,0x10);
        local_290 = 0;
      } while (local_288 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_270);
    _objc_storeStrong(&local_1a0,0);
  }
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

