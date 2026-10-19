// ___Install_block_invoke_3.3073 @0x61d54

void ___Install_block_invoke_3_3073(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_80;
  undefined8 local_70;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_30 = param_1;
  local_21 = param_3;
  (**(code **)(param_1 + 0x20))(local_20,"viewDidAppear:",param_3 & 1);
  _objc_getAssociatedObject(local_20,&_ButtonKey);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    uVar3 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
    local_38 = _objc_msgSend_initWithTitle_style_target_action_
                         (uVar3,local_70,&cf_SRgSW,0,local_20,"wcm_toggleFeed");
    _objc_msgSend_navigationItem(local_20,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_rightBarButtonItems(uVar3,local_70);
    puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_80 = PTR____NSArray0__struct_00110718;
    }
    _objc_msgSend_arrayWithArray_(&_OBJC_CLASS___NSMutableArray,local_70,local_80);
    local_40 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(puVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_addObject_(local_40,local_70,local_38);
    uVar3 = local_40;
    _objc_msgSend_navigationItem(local_20,local_70);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setRightBarButtonItems_(uVar5,local_70,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_setAssociatedObject(local_20,&_ButtonKey,local_38,1);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_boolForKey_(uVar3,local_70,&cf_WCMomentsDisabled);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((uVar1 & 1) == 0) {
    _Attach(local_20);
  }
  else {
    _objc_getAssociatedObject(local_20,&_PanelKey);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar2 != 0) {
      _objc_msgSend_wcm_toggleFeed(local_20,local_70);
    }
  }
  _objc_getAssociatedObject(local_20,&_PanelKey);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_start(uVar3,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_20,0);
  return;
}

