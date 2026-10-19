// _StyleMessageController @0xb09c

void _StyleMessageController(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_80;
  long local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  _objc_getAssociatedObject(local_50,&_MessageStyleKey);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    local_54 = 1;
  }
  else {
    _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_80);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_50,local_80);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(uVar3,local_80,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_getAssociatedObject(local_50,&_MessageAppearanceKey);
    local_60 = _objc_retainAutoreleasedReturnValue();
    if (local_60 == 0) {
      lVar4 = _objc_opt_new(&_OBJC_CLASS___UINavigationBarAppearance);
      lVar1 = local_60;
      local_60 = lVar4;
      (*(code *)PTR__objc_release_00110458)(lVar1);
      _objc_msgSend_configureWithTransparentBackground(local_60,local_80);
      _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIBlurEffect,local_80,8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setBackgroundEffect_(local_60,local_80);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_80);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_colorWithAlphaComponent_(0x3fe70a3d70a3d70a,uVar2,local_80);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setBackgroundColor_(local_60,local_80);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_80);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setShadowColor_(local_60,local_80);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      local_48 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00110050;
      _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_80);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      local_40 = *(undefined8 *)PTR__NSFontAttributeName_00110048;
      local_38 = uVar2;
      _objc_msgSend_systemFontOfSize_weight_
                (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,
                 &_OBJC_CLASS___UIFont,local_80);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      local_30 = uVar3;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_80,&local_38,&local_48,2);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setTitleTextAttributes_(local_60,local_80);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_setAssociatedObject(local_50,&_MessageAppearanceKey,local_60,1);
    }
    _objc_msgSend_navigationItem(local_50,local_80);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_standardAppearance(uVar2,local_80);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    lVar1 = local_60;
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    lVar4 = local_60;
    if (lVar6 != lVar1) {
      _objc_msgSend_navigationItem(local_50,local_80);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setStandardAppearance_(uVar2,local_80,lVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      lVar1 = local_60;
      _objc_msgSend_navigationItem(local_50,local_80);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setScrollEdgeAppearance_(uVar2,local_80,lVar1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      lVar1 = local_60;
      _objc_msgSend_navigationItem(local_50,local_80);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setCompactAppearance_(uVar2,local_80,lVar1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    _objc_msgSend_view(local_50,local_80);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _StyleMessageTables();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

