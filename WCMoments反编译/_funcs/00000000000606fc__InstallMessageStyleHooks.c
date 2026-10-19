// _InstallMessageStyleHooks @0x606fc

void _InstallMessageStyleHooks(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  char *local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  char *local_30;
  long local_28;
  
  local_28 = _NSClassFromString(&cf_WCCommentListViewController);
  if (local_28 != 0) {
    local_30 = "viewDidLayoutSubviews";
    local_38 = _class_getInstanceMethod(local_28,"viewDidLayoutSubviews");
    if (local_38 != 0) {
      local_58 = _method_getImplementation(local_38);
      local_78 = PTR___NSConcreteStackBlock_001104f0;
      local_70 = 0xc0000000;
      local_6c = 0;
      local_68 = ___InstallMessageStyleHooks_block_invoke;
      local_60 = &___block_descriptor_48_e26_v16__0__UIViewController_8l;
      local_50 = local_30;
      local_40 = local_58;
      uVar3 = _objc_retainBlock(&local_78);
      uVar4 = _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      lVar2 = local_28;
      pcVar1 = local_30;
      local_48 = uVar4;
      uVar3 = _method_getTypeEncoding(local_38);
      uVar5 = _class_addMethod(lVar2,pcVar1,uVar4,uVar3);
      if ((uVar5 & 1) == 0) {
        _method_setImplementation(local_38,local_48);
      }
    }
    local_80 = _NSSelectorFromString(&cf_tableView_cellForRowAtIndexPath_);
    local_88 = _class_getInstanceMethod(local_28,local_80);
    uVar5 = _HookEncodingMatches(local_88,"@32@0:8@16@24");
    if ((uVar5 & 1) != 0) {
      local_a8 = _method_getImplementation(local_88);
      local_c8 = PTR___NSConcreteStackBlock_001104f0;
      local_c0 = 0xc0000000;
      local_bc = 0;
      local_b8 = ___InstallMessageStyleHooks_block_invoke_2;
      local_b0 = &
                 ___block_descriptor_48_e58__32__0__UIViewController_8__UITableView_16__NSIndexPath_24l
      ;
      local_a0 = local_80;
      local_90 = local_a8;
      uVar3 = _objc_retainBlock(&local_c8);
      uVar4 = _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      lVar2 = local_28;
      uVar3 = local_80;
      local_98 = uVar4;
      uVar6 = _method_getTypeEncoding(local_88);
      uVar5 = _class_addMethod(lVar2,uVar3,uVar4,uVar6);
      if ((uVar5 & 1) == 0) {
        _method_setImplementation(local_88,local_98);
      }
    }
    local_d0 = _NSClassFromString(&cf_WCNewCommentListViewController);
    local_d8 = _NSSelectorFromString(&cf_tableView_viewForHeaderInSection_);
    local_e0 = _class_getInstanceMethod(local_d0,local_d8);
    uVar5 = _HookEncodingMatches(local_e0,"@32@0:8@16q24");
    if ((uVar5 & 1) != 0) {
      local_100 = _method_getImplementation(local_e0);
      local_120 = PTR___NSConcreteStackBlock_001104f0;
      local_118 = 0xc0000000;
      local_114 = 0;
      local_110 = ___InstallMessageStyleHooks_block_invoke_3;
      local_108 = &___block_descriptor_48_e45__32__0__UIViewController_8__UITableView_16q24l;
      local_f8 = local_d8;
      local_e8 = local_100;
      uVar3 = _objc_retainBlock(&local_120);
      uVar6 = _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar4 = local_d0;
      uVar3 = local_d8;
      local_f0 = uVar6;
      uVar7 = _method_getTypeEncoding(local_e0);
      uVar5 = _class_addMethod(uVar4,uVar3,uVar6,uVar7);
      if ((uVar5 & 1) == 0) {
        _method_setImplementation(local_e0,local_f0);
      }
    }
    local_128 = _NSClassFromString(&cf_WCCommentListContentView);
    local_130 = "layoutSubviews";
    local_138 = _class_getInstanceMethod(local_128,"layoutSubviews");
    if (local_138 != 0) {
      local_158 = _method_getImplementation(local_138);
      local_178 = PTR___NSConcreteStackBlock_001104f0;
      local_170 = 0xc0000000;
      local_16c = 0;
      local_168 = ___InstallMessageStyleHooks_block_invoke_4;
      local_160 = &___block_descriptor_48_e16_v16__0__UIView_8l;
      local_150 = local_130;
      local_140 = local_158;
      uVar3 = _objc_retainBlock(&local_178);
      uVar4 = _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar3 = local_128;
      pcVar1 = local_130;
      local_148 = uVar4;
      uVar6 = _method_getTypeEncoding(local_138);
      uVar5 = _class_addMethod(uVar3,pcVar1,uVar4,uVar6);
      if ((uVar5 & 1) == 0) {
        _method_setImplementation(local_138,local_148);
      }
    }
  }
  return;
}

