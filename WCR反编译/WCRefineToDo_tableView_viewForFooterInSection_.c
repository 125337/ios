// WCRefineToDo_tableView:viewForFooterInSection: @ 007f8c34

/* WARNING: Removing unreachable block (ram,0x007f8e7c) */
/* WARNING: Removing unreachable block (ram,0x007f8e98) */
/* WARNING: Removing unreachable block (ram,0x007f8e9c) */
/* WARNING: Removing unreachable block (ram,0x007f8ea4) */
/* WARNING: Removing unreachable block (ram,0x007f8eb8) */
/* WARNING: Removing unreachable block (ram,0x007f8ebc) */
/* WARNING: Removing unreachable block (ram,0x007f8ec8) */
/* WARNING: Removing unreachable block (ram,0x007f8ed0) */
/* WARNING: Removing unreachable block (ram,0x007f8f38) */
/* WARNING: Removing unreachable block (ram,0x007f8f50) */
/* WARNING: Removing unreachable block (ram,0x007f8f54) */
/* WARNING: Removing unreachable block (ram,0x007f8f5c) */
/* WARNING: Removing unreachable block (ram,0x007f8f74) */
/* WARNING: Removing unreachable block (ram,0x007f8f78) */
/* WARNING: Removing unreachable block (ram,0x007f8f84) */
/* WARNING: Removing unreachable block (ram,0x007f8f8c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoHook::WCRefineToDo_tableView_viewForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d2;
  double local_90;
  undefined *local_88;
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
            (local_48,PTR_s_WCRefineToDo_tableView_viewForFo_026a8628,local_58,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_48;
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  FUN_007f8a9c();
  if ((((ulong)puVar2 & 1) != 0) && (local_58 == local_70)) {
    puVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_numberOfSections_026a2068);
    local_78 = puVar1;
    FUN_007f8b48();
    local_80 = puVar1;
    if (local_60 == puVar1) {
      FUN_007f84d0(0);
      puVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028ccee2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_WCRefineToDoHeaderContainerView_026ce990;
      local_88 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineToDoHeaderContainerView_026ce990,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = PTR_WCRefineToDoHeaderContainerView_026ce990;
        _objc_alloc();
        in_d0 = *(double *)PTR__CGRectZero_025782f0;
        in_d2 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)(in_d0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8));
        puVar1 = local_88;
        local_88 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_48,&DAT_028ccee2,local_88,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTag__026caa80,DAT_02324320);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_WCRefineToDo_tableView_heightFor_026a8620,local_58,local_60);
      if (((ABS(in_d0) == INFINITY) || (in_d0 <= DAT_02323d38)) ||
         (local_90 = in_d0, 10000.0 < in_d0)) {
        local_90 = 0.0;
      }
      local_30 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setForeignHeaderHeight__026a24a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setForeignHeaderView__026a24a8,local_68);
      puVar1 = local_68;
      FUN_007f84dc(local_68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setPlacesCardBeforeForeignHeader_026a88c0,puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      dVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      FUN_007f5444();
      local_90 = local_90 + dVar3;
      uVar5 = 0;
      uVar4 = 0;
      FUN_007f1484();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,in_d2,local_90,local_88,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTableView__026a2480,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setOwner__026a2488,local_48);
      FUN_007f0494(local_88,local_58,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layoutIfNeeded_026ca790);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_markFooterView_section__026a24b0,
                 local_88,local_60);
      puVar1 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar1;
      _objc_storeStrong(&local_88,0);
      goto LAB_007f92ac;
    }
  }
  puVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar1;
LAB_007f92ac:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

