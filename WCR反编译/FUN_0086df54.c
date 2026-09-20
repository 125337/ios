// FUN_0086df54 @ 0086df54

void FUN_0086df54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1e0;
  undefined *local_1d8;
  uint local_1a8;
  uint local_198;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  byte local_109;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  long local_e0 [3];
  byte local_c1;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028cd708)(param_1,param_2);
  if ((DAT_028cd864 & 1) != 0) {
    lVar3 = local_b0;
    FUN_00873154();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = lVar3;
    FUN_00873420();
    local_c1 = (byte)lVar3;
    lVar3 = local_b0;
    FUN_0088cddc();
    _objc_retainAutoreleasedReturnValue();
    local_e0[0] = lVar3;
    if (((local_c1 & 1) == 0) && (lVar3 == 0)) {
      local_e4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      while (puVar1 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0)
            , puVar1 != (undefined *)0x0) {
        puVar1 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_removeLastObject_0269e830);
        puVar1 = local_f8;
        puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = local_f8;
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_100 = puVar2;
          local_109 = 0;
          local_198 = 0;
          if (local_e0[0] == 0) {
            FUN_0087d624();
            local_1a8 = 1;
            if (((ulong)puVar2 & 1) == 0) {
              puVar1 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_109 = 1;
              local_108 = puVar1;
              FUN_0087bdc8();
              local_1a8 = (uint)puVar1;
            }
            local_198 = local_1a8;
          }
          if ((local_109 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_108);
          }
          if ((local_198 & 1) != 0) {
            _objc_storeStrong(local_e0,local_100);
          }
          FUN_0087b4e4(local_100,&cf_MMTitleView_layout);
          _objc_storeStrong(&local_100,0);
        }
        _memset(auStack_158,0,0x40);
        puVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1d8 != (undefined *)0x0) {
          lVar3 = *local_148;
          local_1e0 = (undefined *)0x0;
          do {
            do {
              if (*local_148 - lVar3 != 0) {
                _objc_enumerationMutation(*local_148 - lVar3,puVar1);
              }
              local_118 = *(undefined8 *)(local_150 + (long)local_1e0 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_118);
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8
                       ,0x10);
            local_1e0 = (undefined *)0x0;
          } while (local_1d8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_f8,0);
      }
      if (local_e0[0] != 0) {
        FUN_0087c13c(local_e0[0],&cf_MMTitleView_layout_pass);
      }
      _objc_storeStrong(&local_f0,0);
      local_e4 = 0;
    }
    _objc_storeStrong(local_e0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

