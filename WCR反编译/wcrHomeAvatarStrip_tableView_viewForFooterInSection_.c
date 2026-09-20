// wcrHomeAvatarStrip_tableView:viewForFooterInSection: @ 0035086c

/* WARNING: Removing unreachable block (ram,0x00350a7c) */
/* WARNING: Removing unreachable block (ram,0x00350a98) */
/* WARNING: Removing unreachable block (ram,0x00350a9c) */
/* WARNING: Removing unreachable block (ram,0x00350aa4) */
/* WARNING: Removing unreachable block (ram,0x00350ab8) */
/* WARNING: Removing unreachable block (ram,0x00350abc) */
/* WARNING: Removing unreachable block (ram,0x00350ac8) */
/* WARNING: Removing unreachable block (ram,0x00350ad0) */
/* WARNING: Removing unreachable block (ram,0x00350b38) */
/* WARNING: Removing unreachable block (ram,0x00350b50) */
/* WARNING: Removing unreachable block (ram,0x00350b54) */
/* WARNING: Removing unreachable block (ram,0x00350b5c) */
/* WARNING: Removing unreachable block (ram,0x00350b74) */
/* WARNING: Removing unreachable block (ram,0x00350b78) */
/* WARNING: Removing unreachable block (ram,0x00350b84) */
/* WARNING: Removing unreachable block (ram,0x00350b8c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_tableView_viewForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d2;
  double local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  undefined *local_48;
  undefined *local_40;
  double local_30;
  
  local_58 = (undefined *)0x0;
  local_50 = param_2;
  local_48 = (undefined *)param_1;
  _objc_storeStrong(&local_58,param_3);
  puVar1 = local_48;
  local_60 = (undefined *)param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_wcrHomeAvatarStrip_tableView_vie_026a2380,local_58,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_48;
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  FUN_003506a0();
  if ((((ulong)puVar2 & 1) != 0) && (local_58 == local_70)) {
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_wcrHomeAvatarStrip_originalSecti_026a23b8,local_58);
    puVar1 = local_60;
    local_78 = puVar2;
    FUN_00350774();
    if (puVar1 == puVar2) {
      puVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028ca003);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_WCRefineHomeAvatarStripContainerView_026ce578;
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeAvatarStripContainerView_026ce578,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = PTR_WCRefineHomeAvatarStripContainerView_026ce578;
        _objc_alloc();
        in_d0 = *(double *)PTR__CGRectZero_025782f0;
        in_d2 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)(in_d0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8));
        puVar1 = local_80;
        local_80 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_48,&DAT_028ca003,local_80,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_wcrHomeAvatarStrip_tableView_hei_026a2370,local_58,local_60);
      if (((ABS(in_d0) == INFINITY) || (in_d0 <= DAT_02323d38)) ||
         (local_88 = in_d0, 10000.0 < in_d0)) {
        local_88 = 0.0;
      }
      dVar3 = local_88;
      local_30 = in_d0;
      FUN_0034f844(local_58);
      local_88 = local_88 + dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_02324010);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setForeignHeaderHeight__026a24a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setForeignHeaderView__026a24a8,local_68);
      puVar1 = local_68;
      FUN_00350208(local_68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setPlacesStripAfterForeignHeader_026a2490,puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
      uVar5 = 0;
      uVar4 = 0;
      FUN_003467d0();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,in_d2,local_88,local_80,PTR_s_setFrame__026ca960);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTableView__026a2480,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setOwner__026a2488,local_48);
      FUN_0034d324(local_80,local_58,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layoutIfNeeded_026ca790);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_markFooterView_section__026a24b0,
                 local_80,local_60);
      puVar1 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar1;
      _objc_storeStrong(&local_80,0);
      goto LAB_00350e74;
    }
  }
  puVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar1;
LAB_00350e74:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

