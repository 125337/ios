// wcrHomeAvatarStrip_tableView:viewForHeaderInSection: @ 0034fa04

/* WARNING: Removing unreachable block (ram,0x0034fea8) */
/* WARNING: Removing unreachable block (ram,0x0034febc) */
/* WARNING: Removing unreachable block (ram,0x0034fec0) */
/* WARNING: Removing unreachable block (ram,0x0034fec8) */
/* WARNING: Removing unreachable block (ram,0x0034fedc) */
/* WARNING: Removing unreachable block (ram,0x0034fee0) */
/* WARNING: Removing unreachable block (ram,0x0034feec) */
/* WARNING: Removing unreachable block (ram,0x0034fef4) */
/* WARNING: Removing unreachable block (ram,0x0034fdf4) */
/* WARNING: Removing unreachable block (ram,0x0034fe10) */
/* WARNING: Removing unreachable block (ram,0x0034fe14) */
/* WARNING: Removing unreachable block (ram,0x0034fe1c) */
/* WARNING: Removing unreachable block (ram,0x0034fe30) */
/* WARNING: Removing unreachable block (ram,0x0034fe34) */
/* WARNING: Removing unreachable block (ram,0x0034fe40) */
/* WARNING: Removing unreachable block (ram,0x0034fe48) */
/* Function Stack Size: 0x20 bytes */

ID WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_tableView_viewForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  double in_d0;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d2;
  double local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
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
  local_60 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_wcrHomeAvatarStrip_tableView_vie_026a2360,local_58,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_48;
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  FUN_0034f800();
  puVar2 = local_68;
  if (((((ulong)puVar3 & 1) == 0) || (local_58 != local_70)) || (local_60 != 0)) {
    FUN_0034f9ec();
    puVar2 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar2;
    local_74 = 1;
  }
  else {
    puVar3 = PTR_WCRefineHomeAvatarStripContainerView_026ce578;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeAvatarStripContainerView_026ce578,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_tag_026cab98);
      if (puVar2 + -0x7f199 != (undefined *)0x0) {
        puVar3 = local_48;
        _objc_getAssociatedObject(puVar2 + -0x7f199,local_48,&DAT_028ca004);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_WCRefineHomeAvatarStripContainerView_026ce578;
        local_88 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHomeAvatarStripContainerView_026ce578,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = PTR_WCRefineHomeAvatarStripContainerView_026ce578;
          _objc_alloc();
          in_d0 = *(double *)PTR__CGRectZero_025782f0;
          in_d2 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
          (*(code *)PTR__objc_msgSend_02578628)(in_d0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8))
          ;
          puVar2 = local_88;
          local_88 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_setAssociatedObject(local_48,&DAT_028ca004,local_88,1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTag__026caa80,DAT_02324010);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_wcrHomeAvatarStrip_tableView_hei_026a2350,local_58,local_60);
        bVar1 = false;
        if (((ABS(in_d0) == INFINITY) || (in_d0 <= DAT_02323d38)) ||
           (local_90 = in_d0, 10000.0 < in_d0)) {
          local_90 = 0.0;
          bVar1 = true;
        }
        dVar5 = local_90;
        local_30 = in_d0;
        FUN_0034f844(local_58);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setForeignHeaderHeight__026a24a0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setForeignHeaderView__026a24a8,local_68);
        puVar2 = local_68;
        FUN_00350208(local_68);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setPlacesStripAfterForeignHeader_026a2490,puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTableView__026a2480,local_58);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setOwner__026a2488,local_48);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setClipsToBounds__026ca8c8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
        local_90 = local_90 + dVar5;
        uVar7 = 0;
        uVar6 = 0;
        FUN_003467d0();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,uVar7,in_d2,local_90,local_88,PTR_s_setFrame__026ca960);
        FUN_0034d324(local_88,local_58,local_48);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layoutIfNeeded_026ca790);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_markHeaderView_section__026a2498,
                   local_88,local_60);
        uVar4 = local_60;
        FUN_0034f9ec();
        if (((uVar4 & 1) == 0) && (!bVar1)) {
          FUN_00350320();
        }
        puVar2 = local_88;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = puVar2;
        local_74 = 1;
        _objc_storeStrong(&local_88,0);
        goto LAB_003501cc;
      }
    }
    puVar2 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTableView__026a2480,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setOwner__026a2488,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_02324010);
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_foreignHeaderView_026a2228);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_00350208();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setPlacesStripAfterForeignHeader_026a2490,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_0034d324(local_80,local_58,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_markHeaderView_section__026a2498,
               local_80,local_60);
    FUN_0034f9ec();
    puVar2 = local_80;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar2;
    local_74 = 1;
    _objc_storeStrong(&local_80,0);
  }
LAB_003501cc:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

