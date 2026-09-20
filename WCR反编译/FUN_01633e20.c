// FUN_01633e20 @ 01633e20

void FUN_01633e20(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WAWebViewController";
  _objc_getClass();
  local_c0 = pcVar1;
  _memset(auStack_108,0,0x40);
  local_b8 = &cf_canShowCopyMPShortLinkMenuItem;
  local_b0 = &cf_canCopyMPShortLinkMenuItemBeSelected;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != (undefined *)0x0) {
    lVar3 = *local_f8;
    local_138 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,puVar2);
        }
        pcVar1 = local_c0;
        uVar4 = *(undefined8 *)(local_100 + (long)local_138 * 8);
        local_c8 = uVar4;
        _NSSelectorFromString(uVar4);
        _class_getInstanceMethod(pcVar1,uVar4);
        if (pcVar1 != (char *)0x0) {
          _method_setImplementation(pcVar1,FUN_01634020);
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_138 = (undefined *)0x0;
    } while (local_130 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

