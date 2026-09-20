// syncGroupForPageOffset @ 0178f3c0

/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::syncGroupForPageOffset(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  bVar1 = true;
  dVar5 = in_d0;
  if (0.0 < in_d0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (!bVar1) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,param_1,PTR_s_normalizeCircularPageIfNeeded_pa_026b47d8,(long)(dVar5 / in_d0));
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSelectedGroupIdentifier__026b45d0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistSelectedGroupIdentifier_026b45d8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

