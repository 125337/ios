// collectionView:viewForSupplementaryElementOfKind:atIndexPath: @ 01990368

/* Function Stack Size: 0x28 bytes */

ID WCRefineFileManagerViewController::collectionView_viewForSupplementaryElementOfKind_atIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_180;
  ulong local_178;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ID local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_dequeueReusableSupplementaryView_026b4ee0,local_c8,&cf_WCRFileGridFooter
             ,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar1;
  _memset(auStack_120,0,0x40);
  IVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_178 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != 0) {
    lVar3 = *local_110;
    local_180 = 0;
    do {
      do {
        if (*local_110 - lVar3 != 0) {
          _objc_enumerationMutation(*local_110 - lVar3,IVar1);
        }
        local_e0 = *(undefined8 *)(local_118 + local_180 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeFromSuperview_026ca800);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,in_d2,in_d3,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_128 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,0x12);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setTextAlignment__026caa90,2);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_footerStatsText_026ba530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addSubview__026ca4c0,local_128);
  IVar1 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

