// ensureOverlayOnHost: @ 010e3040

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::ensureOverlayOnHost_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (undefined *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = local_c0;
  _objc_getAssociatedObject(local_c0,DAT_0280e1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98),
     puVar1 != (undefined *)0x24f6f8)) {
    _objc_storeStrong(&local_c8,0);
    _memset(auStack_110,0,0x40);
    puVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != (undefined *)0x0) {
      lVar3 = *local_100;
      local_148 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,puVar1);
          }
          lVar4 = *(long *)(local_108 + (long)local_148 * 8);
          local_d0 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_tag_026cab98);
          if (lVar4 == 0x24f6f8) {
            _objc_storeStrong(0,&local_c8,local_d0);
            goto LAB_010e328c;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_148 = (undefined *)0x0;
      } while (local_140 != (undefined *)0x0);
    }
LAB_010e328c:
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (local_c8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar1 = local_c8;
    local_c8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_VIEW_TAG);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setUserInteractionEnabled__026caad8,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c0;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar2 != puVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_c8);
  }
  _objc_setAssociatedObject(local_c0,DAT_0280e1b8,local_c8,1);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

