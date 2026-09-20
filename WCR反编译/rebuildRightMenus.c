// rebuildRightMenus @ 01bd6024

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheViewController::rebuildRightMenus(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  byte local_99;
  ID local_98;
  byte local_89;
  ID local_88;
  byte local_79;
  ID local_78;
  undefined1 local_59;
  undefined1 auStack_58 [8];
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  _objc_initWeak(auStack_58,param_1);
  local_79 = 0;
  local_89 = 0;
  local_99 = 0;
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedKind_026c07f8);
  bVar1 = true;
  if ((long)IVar3 < 1) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedCountIndex_026c0800);
    bVar1 = true;
    if ((long)IVar3 < 1) {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedUsername_026c0810);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if (IVar3 == 0) {
        IVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedTagName_026c0808);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = true;
        if (IVar3 == 0) {
          IVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_statusControl_026c07a0);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = 0 < (long)IVar3;
        }
      }
    }
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar2 = &cf_line_3_horizontal_decrease_circle_fill;
  if (!bVar1) {
    pcVar2 = &cf_line_3_horizontal_decrease_circle;
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_59 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_a8 = puVar4;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithImage_style_target_actio_026b47e8,local_a8,0,0);
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setAccessibilityLabel__0269e968,&cf___);
  puVar5 = PTR__OBJC_CLASS___UIDeferredMenuElement_026cf440;
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_01bd6794;
  local_c8 = &DAT_0258b7f0;
  _objc_copyWeak(auStack_c0,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_elementWithProvider__026c0820,&local_e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIMenu_026ce388;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b8 = puVar5;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_menuWithTitle_children__0269fb28,&cf____g0WgSW)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setMenu__026c0828);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_trash);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_initWithImage_style_target_actio_026b47e8,puVar5,0,local_48,
             PTR_s_presentKeepUsersCleanup_026c0830);
  local_e8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAccessibilityLabel__0269e968,&cf_nt_X_);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTintColor__026caab0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_40 = local_b0;
  local_38 = local_e8;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,2);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_b8,0);
  _objc_destroyWeak(auStack_c0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_destroyWeak(auStack_58);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

