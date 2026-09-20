// WCRefineToDo_tableView:viewForHeaderInSection: @ 007f7c04

/* WARNING: Removing unreachable block (ram,0x007f8028) */
/* WARNING: Removing unreachable block (ram,0x007f8044) */
/* WARNING: Removing unreachable block (ram,0x007f8048) */
/* WARNING: Removing unreachable block (ram,0x007f8050) */
/* WARNING: Removing unreachable block (ram,0x007f8064) */
/* WARNING: Removing unreachable block (ram,0x007f8068) */
/* WARNING: Removing unreachable block (ram,0x007f8074) */
/* WARNING: Removing unreachable block (ram,0x007f807c) */
/* WARNING: Removing unreachable block (ram,0x007f80dc) */
/* WARNING: Removing unreachable block (ram,0x007f80f0) */
/* WARNING: Removing unreachable block (ram,0x007f80f4) */
/* WARNING: Removing unreachable block (ram,0x007f80fc) */
/* WARNING: Removing unreachable block (ram,0x007f8110) */
/* WARNING: Removing unreachable block (ram,0x007f8114) */
/* WARNING: Removing unreachable block (ram,0x007f8120) */
/* WARNING: Removing unreachable block (ram,0x007f8128) */
/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoHook::WCRefineToDo_tableView_viewForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  double local_98;
  undefined *local_90;
  undefined4 local_84;
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
  puVar2 = local_48;
  local_60 = (undefined *)param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_WCRefineToDo_tableView_viewForHe_026a85b8,local_58,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_48;
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  FUN_007f7ae4();
  if ((((ulong)puVar3 & 1) != 0) && (local_58 == local_70)) {
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_numberOfSections_026a2068);
    puVar2 = local_60;
    local_78 = puVar3;
    FUN_007f7b90();
    if (puVar2 == puVar3) {
      FUN_007f84d0(0);
      puVar2 = local_68;
      puVar3 = PTR_WCRefineToDoHeaderContainerView_026ce990;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineToDoHeaderContainerView_026ce990,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_tag_026cab98);
        if (puVar2 + -0x7f149 != (undefined *)0x0) {
          puVar3 = local_48;
          _objc_getAssociatedObject(puVar2 + -0x7f149,local_48,&DAT_028ccee1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_WCRefineToDoHeaderContainerView_026ce990;
          local_90 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineToDoHeaderContainerView_026ce990,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = PTR_WCRefineToDoHeaderContainerView_026ce990;
            _objc_alloc();
            in_d0 = *(double *)PTR__CGRectZero_025782f0;
            in_d2 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
            (*(code *)PTR__objc_msgSend_02578628)
                      (in_d0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8));
            puVar2 = local_90;
            local_90 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_setAssociatedObject(local_48,&DAT_028ccee1,local_90,1);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTag__026caa80,DAT_02324320);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_WCRefineToDo_tableView_heightFor_026a85b0,local_58,local_60);
          bVar1 = false;
          if (((ABS(in_d0) == INFINITY) || (in_d0 <= DAT_02323d38)) ||
             (local_98 = in_d0, 10000.0 < in_d0)) {
            local_98 = 0.0;
            bVar1 = true;
          }
          puVar2 = local_68;
          local_30 = in_d0;
          FUN_007f84dc();
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setForeignHeaderHeight__026a24a0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setForeignHeaderView__026a24a8,local_68);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setPlacesCardBeforeForeignHeader_026a88c0,(byte)puVar2 & 1);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
          puVar2 = PTR_WCRefineConfig_026cdf58;
          dVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          FUN_007f5444();
          local_98 = local_98 + dVar4;
          uVar6 = 0;
          uVar5 = 0;
          FUN_007f1484();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,uVar6,in_d2,local_98,local_90,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setClipsToBounds__026ca8c8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTableView__026a2480,local_58);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setOwner__026a2488,local_48);
          FUN_007f0494(local_90,local_58,local_48);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layoutIfNeeded_026ca790);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_markHeaderView_section__026a2498,
                     local_90,local_60);
          puVar2 = local_60;
          FUN_007f7bec();
          if ((((ulong)puVar2 & 1) == 0) && (!bVar1)) {
            FUN_007f8654();
          }
          puVar2 = local_90;
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = puVar2;
          local_84 = 1;
          _objc_storeStrong(&local_90,0);
          goto LAB_007f8494;
        }
      }
      puVar2 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTableView__026a2480,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setOwner__026a2488,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_02324320);
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_foreignHeaderView_026a2228);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_007f84dc();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setPlacesCardBeforeForeignHeader_026a88c0,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      FUN_007f0494(local_80,local_58,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layoutIfNeeded_026ca790);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_markHeaderView_section__026a2498,
                 local_80,local_60);
      FUN_007f7bec();
      puVar2 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar2;
      local_84 = 1;
      _objc_storeStrong(&local_80,0);
      goto LAB_007f8494;
    }
  }
  FUN_007f7bec();
  puVar2 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar2;
  local_84 = 1;
LAB_007f8494:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

