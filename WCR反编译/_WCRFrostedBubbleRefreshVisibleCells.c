// _WCRFrostedBubbleRefreshVisibleCells @ 00f86848

void _WCRFrostedBubbleRefreshVisibleCells(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_248;
  undefined *local_240;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined4 local_18c;
  undefined *local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_CommonMessageCellView;
  _NSClassFromString();
  local_130 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    _memset(auStack_178,0,0x40);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_200 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_200 != (undefined *)0x0) {
      lVar4 = *local_168;
      local_208 = (undefined *)0x0;
      do {
        do {
          if (*local_168 - lVar4 != 0) {
            _objc_enumerationMutation(*local_168 - lVar4,puVar3);
          }
          local_138 = *(undefined8 *)(local_170 + (long)local_208 * 8);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                     local_138);
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar2;
          while (puVar2 = local_180,
                (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0),
                puVar2 != (undefined *)0x0) {
            puVar2 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            local_188 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_removeLastObject_0269e830);
            puVar2 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_130)
            ;
            if (((ulong)puVar2 & 1) == 0) {
              _memset(auStack_1d8,0,0x40);
              puVar2 = local_188;
              (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_240 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_240 != (undefined *)0x0) {
                lVar5 = *local_1c8;
                local_248 = (undefined *)0x0;
                do {
                  do {
                    if (*local_1c8 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_1c8 - lVar5,puVar2);
                    }
                    local_198 = *(undefined8 *)(local_1d0 + (long)local_248 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_180,PTR_s_addObject__0269d180,local_198);
                    local_248 = local_248 + 1;
                  } while (local_248 < local_240);
                  local_240 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                             auStack_128,0x10);
                  local_248 = (undefined *)0x0;
                } while (local_240 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar2);
              local_18c = 0;
            }
            else {
              _WCRFrostedBubbleApplyToCell(local_188);
              local_18c = 4;
            }
            _objc_storeStrong(&local_188,0);
          }
          _objc_storeStrong(0,&local_180,0);
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        local_208 = (undefined *)0x0;
      } while (local_200 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

