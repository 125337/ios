// wcrIsPresetPersonaName: @ 009af998

/* Function Stack Size: 0x18 bytes */

bool WCRefineAIStore::wcrIsPresetPersonaName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined8 local_c8;
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
  _memset(auStack_110,0,0x40);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_personaPresets_026aac50);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != (undefined *)0x0) {
    lVar4 = *local_100;
    local_140 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,puVar2);
        }
        uVar5 = *(ulong *)(local_108 + (long)local_140 * 8);
        local_d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar3 & 1) != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_009afb88;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_140 = (undefined *)0x0;
    } while (local_138 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_009afb88:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

