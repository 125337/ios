// FUN_0020696c @ 0020696c

void FUN_0020696c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar5 = local_b0;
  if (local_b0 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar5 & 1) != 0) {
      if (DAT_028c9188 == (cfstringStruct *)0x0) {
        pcVar2 = &cf_UIVisualEffectView;
        _NSClassFromString();
        DAT_028c9188 = pcVar2;
      }
      if (DAT_028c9188 == (cfstringStruct *)0x0) {
        local_c0 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_b0);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar1;
        while (puVar1 = local_c8,
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
              puVar1 != (undefined *)0x0) {
          puVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeObjectAtIndex__0269d530,0);
          _memset(auStack_118,0,0x40);
          puVar1 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_170 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_170 != (undefined *)0x0) {
            lVar4 = *local_108;
            local_178 = (undefined *)0x0;
            do {
              do {
                if (*local_108 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_108 - lVar4,puVar1);
                }
                uVar5 = *(ulong *)(local_110 + (long)local_178 * 8);
                local_d8 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_isKindOfClass__0269cd68,DAT_028c9188);
                if (((uVar5 & 1) != 0) &&
                   (uVar5 = local_d8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isHidden_026ca768),
                   (uVar5 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setHidden__026ca970,1);
                }
                uVar5 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                if (uVar3 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d8)
                  ;
                }
                local_178 = local_178 + 1;
              } while (local_178 < local_170);
              local_170 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,
                         auStack_a8,0x10);
              local_178 = (undefined *)0x0;
            } while (local_170 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_d0,0);
        }
        _objc_storeStrong(0,&local_c8,0);
        local_c0 = 0;
      }
      goto LAB_00206e3c;
    }
  }
  local_c0 = 1;
LAB_00206e3c:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

