// movePackRel:byOffset: @ 01088e80

/* Function Stack Size: 0x20 bytes */

bool WCRefineLocalEmoticonStore::movePackRel_byOffset_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_178;
  ulong local_170;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  long_long local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
      uVar2 == 0)) || (local_d0 == 0)) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf___all__);
    if (((uVar2 & 1) == 0) && (uVar2 = local_c8, FUN_01085b64(), (uVar2 & 1) == 0)) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar1;
      _memset(auStack_128,0,0x40);
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_listPacksSortMode__026ac360,0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_170 != 0) {
        lVar6 = *local_118;
        local_178 = 0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,IVar3);
            }
            lVar7 = *(long *)(local_120 + local_178 * 8);
            local_e8 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar7);
            puVar1 = local_e0;
            if (lVar4 != 0) {
              lVar4 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_relativePath_026ac370);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar4);
            }
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_indexOfObject__0269e870,local_c8);
      local_130 = puVar1;
      if (puVar1 == (undefined *)0x7fffffffffffffff) {
        local_a9 = 0;
        local_d4 = 1;
      }
      else {
        puVar1 = puVar1 + local_d0;
        local_138 = puVar1;
        if (((long)puVar1 < 0) ||
           (puVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
           (long)puVar5 <= (long)puVar1)) {
          local_a9 = 0;
          local_d4 = 1;
        }
        else {
          puVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
          _objc_retainAutoreleasedReturnValue();
          local_140 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_removeObjectAtIndex__0269d530,local_130);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_insertObject_atIndex__0269eac0,local_140,local_138);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_reorderPackRels__026a3e08,local_e0);
          local_a9 = (byte)IVar3 & 1;
          local_d4 = 1;
          _objc_storeStrong(&local_140,0);
        }
      }
      _objc_storeStrong(&local_e0,0);
    }
    else {
      local_a9 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

