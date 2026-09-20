// themeBoxChatSessionWxidFromViewController: @ 00fa4d04

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::themeBoxChatSessionWxidFromViewController_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_1c8;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  uint local_cc;
  cfstringStruct *local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_cc = 1;
  }
  else {
    pcVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    pcVar3 = local_b8;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_themeBoxChatSessionWxidFromViewC_026ace58);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      pcVar3 = local_d8;
      bVar1 = pcVar2 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar3;
      }
      local_cc = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_d8,0);
      if (local_cc != 0) goto LAB_00fa5670;
    }
    pcVar3 = local_c8;
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_c8;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 0;
      local_1c8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1c8 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_1c8;
      }
      local_f1 = pcVar2 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_1c8;
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      bVar1 = local_e8 != (cfstringStruct *)0x0;
      if (bVar1) {
        pcVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_themeBoxChatSessionWxidFromViewC_026ace58,local_e8);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar3;
      }
      local_cc = (uint)bVar1;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      if (local_cc != 0) goto LAB_00fa5670;
    }
    pcVar3 = local_c8;
    puVar4 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar3;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_themeBoxChatSessionWxidFromViewC_026ace58,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar2;
      }
      local_cc = (uint)(pcVar3 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_100,0);
      if (local_cc != 0) goto LAB_00fa5670;
    }
    pcVar3 = &cf_BaseMsgContentViewController;
    _NSClassFromString();
    local_108 = pcVar3;
    if ((pcVar3 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isKindOfClass__0269cd68,pcVar3),
       ((ulong)pcVar2 & 1) != 0)) {
      local_110 = (cfstringStruct *)0x0;
      pcVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_110;
        local_110 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((local_110 == (cfstringStruct *)0x0) &&
         (pcVar3 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_110;
        local_110 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_118 = (cfstringStruct *)0x0;
      pcVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar2 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_118;
        local_118 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar3 = local_118;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)pcVar3 & 1) == 0) ||
         (pcVar3 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0)
         , pcVar3 == (cfstringStruct *)0x0)) {
        pcVar2 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_118;
        local_118 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar3 = local_118;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)pcVar3 & 1) == 0) ||
         (pcVar2 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0)
         , pcVar3 = local_118, pcVar2 == (cfstringStruct *)0x0)) {
        local_cc = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar3;
        local_cc = 1;
      }
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
      if (local_cc != 0) goto LAB_00fa5670;
    }
    _memset(auStack_178,0,0x40);
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_230 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_230 != (cfstringStruct *)0x0) {
      lVar6 = *local_168;
      local_238 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_168 - lVar6 != 0) {
            _objc_enumerationMutation(*local_168 - lVar6,pcVar3);
          }
          local_138 = *(undefined8 *)(local_170 + (long)local_238 * 8);
          pcVar5 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_themeBoxChatSessionWxidFromViewC_026ace58,local_138);
          _objc_retainAutoreleasedReturnValue();
          local_180 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
          pcVar2 = local_180;
          bVar1 = pcVar5 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar2;
          }
          local_cc = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_180,0);
          if (local_cc != 0) goto LAB_00fa5624;
          local_238 = (cfstringStruct *)((long)&local_238->field0_0x0 + 1);
        } while (local_238 < local_230);
        local_230 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        local_238 = (cfstringStruct *)0x0;
      } while (local_230 != (cfstringStruct *)0x0);
    }
    local_cc = 0;
LAB_00fa5624:
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &::cf___;
      local_cc = 1;
    }
  }
LAB_00fa5670:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

