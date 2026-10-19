// _Attach @0x5bdbc

void _Attach(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_70;
  undefined8 local_68;
  uint local_5c;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  _objc_getAssociatedObject(local_50,&_PanelKey);
  local_58 = _objc_retainAutoreleasedReturnValue();
  bVar1 = local_58 == 0;
  if (bVar1) {
    local_68 = _objc_opt_new(&objc::class_t::WCMFeedController);
    _objc_msgSend_setHost_(local_68,local_70,local_50);
    _objc_msgSend_addChildViewController_(local_50,local_70,local_68);
    _objc_msgSend_view(local_68,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_70,0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_view(local_50,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_68,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar2,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_view(local_68,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_topAnchor(uVar2,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_50,local_70);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_topAnchor(uVar4,local_70);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintEqualToAnchor_(uVar3,local_70);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_48 = uVar6;
    _objc_msgSend_view(local_68,local_70);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_bottomAnchor(uVar7,local_70);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_50,local_70);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_bottomAnchor(uVar9,local_70);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintEqualToAnchor_(uVar8,local_70);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    local_40 = uVar11;
    _objc_msgSend_view(local_68,local_70);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_leadingAnchor(uVar12,local_70);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_50,local_70);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_leadingAnchor(uVar14,local_70);
    uVar15 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintEqualToAnchor_(uVar13,local_70);
    uVar16 = _objc_retainAutoreleasedReturnValue();
    local_38 = uVar16;
    _objc_msgSend_view(local_68,local_70);
    uVar17 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_trailingAnchor(uVar17,local_70);
    uVar18 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_50,local_70);
    uVar19 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_trailingAnchor(uVar19,local_70);
    uVar20 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintEqualToAnchor_(uVar18,local_70);
    uVar21 = _objc_retainAutoreleasedReturnValue();
    local_30 = uVar21;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_70,&local_48,4);
    uVar22 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_activateConstraints_(&_OBJC_CLASS___NSLayoutConstraint,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar22);
    (*(code *)PTR__objc_release_00110458)(uVar21);
    (*(code *)PTR__objc_release_00110458)(uVar20);
    (*(code *)PTR__objc_release_00110458)(uVar19);
    (*(code *)PTR__objc_release_00110458)(uVar18);
    (*(code *)PTR__objc_release_00110458)(uVar17);
    (*(code *)PTR__objc_release_00110458)(uVar16);
    (*(code *)PTR__objc_release_00110458)(uVar15);
    (*(code *)PTR__objc_release_00110458)(uVar14);
    (*(code *)PTR__objc_release_00110458)(uVar13);
    (*(code *)PTR__objc_release_00110458)(uVar12);
    (*(code *)PTR__objc_release_00110458)(uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_didMoveToParentViewController_(local_68,local_70,local_50);
    _objc_setAssociatedObject(local_50,&_PanelKey,local_68,1);
    _objc_getAssociatedObject(local_50,&_ButtonKey);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTitle_(uVar2,local_70,&cf_b_YSHr);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_coverHost(local_68,local_70);
    _objc_msgSend_start(local_68,local_70);
    _objc_storeStrong(&local_68,0);
  }
  else {
    _objc_msgSend_coverHost(local_58,local_70);
    _objc_msgSend_start(local_58,local_70);
  }
  local_5c = (uint)!bVar1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

