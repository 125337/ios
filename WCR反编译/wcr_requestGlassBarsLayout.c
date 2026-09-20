// wcr_requestGlassBarsLayout @ 01f32c00

/* Function Stack Size: 0x10 bytes */

void WCRefineUIBeautifyViewController::wcr_requestGlassBarsLayout(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  undefined *local_250;
  undefined *local_248;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  _memset(auStack_180,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_208 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_208 != (undefined *)0x0) {
    lVar4 = *local_170;
    local_210 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar4 != 0) {
          _objc_enumerationMutation(*local_170 - lVar4,puVar2);
        }
        local_140 = *(undefined8 *)(local_178 + (long)local_210 * 8);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_140);
        _objc_retainAutoreleasedReturnValue();
        local_188 = puVar1;
        while (puVar1 = local_188,
              (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0),
              puVar1 != (undefined *)0x0) {
          puVar1 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_190 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_removeLastObject_0269e830);
          IVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_wcr_isGlassBeautifyHostView__026c88b0,local_190);
          if ((IVar3 & 1) == 0) {
            _memset(auStack_1e0,0,0x40);
            puVar1 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_248 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_248 != (undefined *)0x0) {
              lVar5 = *local_1d0;
              local_250 = (undefined *)0x0;
              do {
                do {
                  if (*local_1d0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1d0 - lVar5,puVar1);
                  }
                  local_1a0 = *(undefined8 *)(local_1d8 + (long)local_250 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_188,PTR_s_addObject__0269d180,local_1a0);
                  local_250 = local_250 + 1;
                } while (local_250 < local_248);
                local_248 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                           auStack_128,0x10);
                local_250 = (undefined *)0x0;
              } while (local_248 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar1);
            local_194 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setNeedsLayout_0269deb8);
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_layoutIfNeeded_026ca790);
            local_194 = 4;
          }
          _objc_storeStrong(&local_190,0);
        }
        _objc_storeStrong(0,&local_188,0);
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_210 = (undefined *)0x0;
    } while (local_208 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

