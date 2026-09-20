// FUN_000e1b18 @ 000e1b18

void FUN_000e1b18(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0 [3];
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  undefined **ppuVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar2 = &local_80;
  local_80 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  uVar1 = (uint)ppuVar2;
  if (local_80 == (undefined *)0x0) {
    local_84 = 1;
  }
  else {
    FUN_000d8808();
    if ((uVar1 & 1) == 0) {
      FUN_000e3370(local_80,&cf_install_skip);
      local_84 = 1;
    }
    else {
      puVar3 = local_80;
      _objc_getAssociatedObject(local_80,&DAT_028c8391);
      _objc_retainAutoreleasedReturnValue();
      local_a0[0] = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        uStack_b8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
        local_c0 = *(undefined8 *)PTR__CGRectZero_025782f0;
        uStack_a8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
        local_b0 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,uStack_b8,local_b0,uStack_a8,puVar4,PTR_s_initWithFrame__026ca6e8);
        puVar3 = local_a0[0];
        local_a0[0] = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0[0],PTR_s_setUserInteractionEnabled__026caad8,1);
        puVar3 = PTR__OBJC_CLASS___UISearchBar_026ce298;
        _objc_alloc();
        uStack_e8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
        local_f0 = *(undefined8 *)PTR__CGRectZero_025782f0;
        uStack_d8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
        local_e0 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,uStack_e8,local_e0,uStack_d8,puVar3,PTR_s_initWithFrame__026ca6e8);
        local_c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setSearchBarStyle__0269e9c0,2);
        puVar3 = local_80;
        _objc_getAssociatedObject(local_80,&DAT_028c8370);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_d__SevJ_YU_;
        if (puVar3 == (undefined *)0x0) {
          pcVar6 = &cf_d__bXTvJ_YU_;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setPlaceholder__0269e9c8,pcVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setDelegate__026ca910,local_80);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setReturnKeyType__0269e9d0,6);
        FUN_000e3650(local_c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_addSubview__026ca4c0,local_c8);
        puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
        _objc_alloc();
        local_68 = &cf_hQ;
        local_60 = &cf_eW_;
        local_58 = &cf_VGr;
        local_50 = &cf_eN;
        local_48 = &cf__;
        local_40 = &cf_J_YU_;
        local_38 = &cf__;
        local_30 = &cf_vQN;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_68,8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
        local_f8 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setSelectedSegmentIndex__0269e9e0,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_setApportionsSegmentWidthsByCont_0269e9e8,1);
        puVar3 = local_f8;
        local_78 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_70 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_78,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar5,0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_80;
        puVar3 = local_f8;
        pcVar6 = &cf_WCRChatRoomMemberFilterChanged_;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar4,pcVar6,0x1000);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_addSubview__026ca4c0,local_f8);
        puVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_setAssociatedObject(local_80,&DAT_028c8391,local_a0[0],1);
        _objc_setAssociatedObject(local_80,&DAT_028c8390,local_c8,1);
        _objc_setAssociatedObject(local_80,&DAT_028c8378,local_f8,1);
        puVar3 = local_80;
        FUN_000e3bcc();
        _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
        FUN_000e13f8(local_80,&cf_install_create);
        _objc_storeStrong(&local_f8);
        _objc_storeStrong(&local_c8,0);
      }
      _objc_storeStrong(local_a0,0);
      local_84 = 0;
    }
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

