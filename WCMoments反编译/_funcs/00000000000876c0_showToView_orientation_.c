// showToView:orientation: @0x876c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCMYBIBSheetView::showToView_orientation_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double in_d2;
  double dVar9;
  double in_d3;
  double local_280;
  undefined8 local_240;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  double local_150;
  double local_148;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_f8;
  double local_e8;
  undefined8 local_e0;
  double local_d0;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_68;
  undefined4 local_44;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  _objc_msgSend_actions(local_28,local_240);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _objc_msgSend_count(uVar3,local_240);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (lVar4 == 0) {
    local_44 = 1;
  }
  else {
    _objc_msgSend_addSubview_(local_38,local_240,local_28);
    local_68 = _objc_msgSend_bounds(local_38,local_240);
    _objc_msgSend_setFrame_(local_68,local_28,local_240);
    local_b0 = _WCMYBIBPaddingByBrowserOrientation(local_40);
    local_b8 = in_d2;
    dVar6 = (double)_objc_msgSend_cellHeight(local_28,local_240);
    _objc_msgSend_actions(local_28,local_240);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = _objc_msgSend_count(uVar3,local_240);
    dVar7 = _kOffsetSpace + (double)(lVar4 + 1) * dVar6 + local_b8;
    dVar6 = local_b8;
    dVar9 = _kOffsetSpace;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    puVar1 = (undefined8 *)(local_28 + (long)_tableShowFrame);
    local_c0 = dVar7;
    local_e0 = _objc_msgSend_frame(local_28,local_240);
    puVar1[1] = dVar6;
    *puVar1 = local_e0;
    puVar1[3] = in_d3;
    puVar1[2] = dVar9;
    local_d0 = dVar9;
    dVar6 = (double)_objc_msgSend_maxHeightScale(local_28,local_240);
    local_108 = _objc_msgSend_bounds(local_28,local_240);
    local_e8 = dVar6 * in_d3;
    local_110 = local_c0;
    local_280 = local_e8;
    if (local_c0 <= local_e8) {
      local_280 = local_c0;
    }
    local_118 = local_280;
    *(double *)(local_28 + (long)_tableShowFrame + 0x18) = local_280;
    dVar6 = local_c0;
    local_f8 = dVar9;
    local_138 = _objc_msgSend_bounds(local_28,local_240);
    dVar7 = *(double *)(local_28 + (long)_tableShowFrame + 0x18);
    *(double *)(local_28 + (long)_tableShowFrame + 8) = in_d3 - dVar7;
    puVar1 = (undefined8 *)(local_28 + (long)_tableHideFrame);
    puVar2 = (undefined8 *)(local_28 + (long)_tableShowFrame);
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
    uVar3 = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar3;
    local_130 = dVar6;
    local_128 = dVar9;
    local_158 = _objc_msgSend_bounds(local_28,local_240);
    *(double *)(local_28 + (long)_tableHideFrame + 8) = in_d3;
    local_150 = dVar7;
    local_148 = dVar9;
    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_240);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_colorWithAlphaComponent_(uVar3,local_240);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_28,local_240);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    puVar1 = (undefined8 *)(local_28 + (long)_tableHideFrame);
    uStack_178 = puVar1[1];
    local_180 = *puVar1;
    uStack_168 = puVar1[3];
    local_170 = puVar1[2];
    _objc_msgSend_tableView(local_28,local_240);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar3 = local_170;
    _objc_msgSend_setFrame_(local_180,uVar5,local_240);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_msgSend_tableView(local_28,local_240);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_1e0 = _objc_msgSend_frame(uVar5,local_240);
    uVar8 = 0;
    local_1c0 = _CGRectMake(0);
    uStack_1b8 = uVar8;
    local_1b0 = uVar3;
    dStack_1a8 = local_b8;
    _objc_msgSend_tableView(local_28,local_240);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_tableFooterView(uVar3,local_240);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    uStack_1f8 = uStack_1b8;
    local_200 = local_1c0;
    dStack_1e8 = dStack_1a8;
    local_1f0 = local_1b0;
    _objc_msgSend_setBounds_(local_1c0,uStack_1b8,local_1b0,dStack_1a8,uVar8,local_240);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    uVar3 = _objc_msgSend_showDuration(local_28,local_240);
    local_228 = PTR___NSConcreteStackBlock_001104f0;
    local_220 = 0xc2000000;
    local_21c = 0;
    local_218 = ___43__WCMYBIBSheetView_showToView_orientation___block_invoke;
    local_210 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_208 = (*(code *)PTR__objc_retain_00110460)(local_28);
    _objc_msgSend_animateWithDuration_animations_(uVar3,&_OBJC_CLASS___UIView,local_240,&local_228);
    _objc_storeStrong(&local_208,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

