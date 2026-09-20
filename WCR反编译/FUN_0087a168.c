// FUN_0087a168 @ 0087a168

void FUN_0087a168(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  if (local_b0 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewIfLoaded_026a1fc8);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar2;
      if (uVar2 == 0) {
        local_c0 = 1;
      }
      else {
        pcVar3 = &cf_MMTableViewIndexView;
        _NSClassFromString();
        local_d0 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_c0 = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                     local_c8);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = puVar1;
          while (puVar1 = local_d8,
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
                puVar1 != (undefined *)0x0) {
            puVar1 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeLastObject_0269e830);
            puVar1 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,local_d0);
            if (((ulong)puVar1 & 1) == 0) {
              _memset(auStack_128,0,0x40);
              puVar1 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_190 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_190 != (undefined *)0x0) {
                lVar4 = *local_118;
                local_198 = (undefined *)0x0;
                do {
                  do {
                    if (*local_118 - lVar4 != 0) {
                      _objc_enumerationMutation(*local_118 - lVar4,puVar1);
                    }
                    local_e8 = *(undefined8 *)(local_120 + (long)local_198 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_addObject__0269d180,local_e8);
                    local_198 = local_198 + 1;
                  } while (local_198 < local_190);
                  local_190 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                             auStack_a8,0x10);
                  local_198 = (undefined *)0x0;
                } while (local_190 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar1);
              local_c0 = 0;
            }
            else {
              FUN_0087a644(local_e0);
              FUN_0087a754(local_e0);
              local_c0 = 2;
            }
            _objc_storeStrong(&local_e0,0);
          }
          _objc_storeStrong(0,&local_d8,0);
          local_c0 = 0;
        }
      }
      _objc_storeStrong(&local_c8,0);
      goto LAB_0087a5d0;
    }
  }
  local_c0 = 1;
LAB_0087a5d0:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

