// layoutPageFrames @ 01784040

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::layoutPageFrames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double in_d2;
  undefined8 in_d3;
  double dVar12;
  double local_2c8;
  
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  iVar5 = 0x102;
  if (((ulong)puVar2 & 1) == 0) {
    iVar5 = 0xcd;
  }
  uVar11 = 0x4024000000000000;
  dVar6 = (double)iVar5 + 10.0;
  IVar3 = param_1;
  dVar8 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar9 = in_d2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  dVar7 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(dVar7,uVar11,dVar9,in_d3);
  uVar11 = 0;
  dVar9 = dVar8;
  dVar12 = dVar6;
  FUN_0177f868();
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headerView_026a0fa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,dVar9);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  dVar8 = dVar8 + dVar6;
  IVar3 = param_1;
  dVar9 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth();
  IVar4 = param_1;
  dVar10 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetHeight(dVar10,dVar6,dVar7,dVar12);
  local_2c8 = (dVar10 - dVar8) - in_d2;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (local_2c8 <= 0.0) {
    local_2c8 = 0.0;
  }
  dVar10 = 0.0;
  FUN_0177f868();
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  dVar7 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetHeight(dVar7,dVar8,dVar9,local_2c8);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageManagers_026b4550);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageManagers_026b4550);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar10 = dVar10 * (double)IVar4;
  FUN_0177e6d0();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar10,dVar7);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  return;
}

