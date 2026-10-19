// positionIndicator @0x7368

/* Function Stack Size: 0x10 bytes */

void WCMQQRefreshControl::positionIndicator(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d3;
  double local_1d8;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  undefined8 local_140;
  double dStack_138;
  long local_78;
  double local_70;
  undefined8 local_68;
  double local_48;
  int local_3c;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_3c = 0;
  local_30 = param_2;
  local_28 = param_1;
  local_68 = _objc_msgSend_bounds(param_1);
  local_48 = in_d3 - 64.0;
  local_1b8 = local_48;
  if (local_48 <= (double)(long)local_3c) {
    local_1b8 = (double)(long)local_3c;
  }
  local_70 = local_1b8;
  local_38 = local_1b8 + 28.0;
  _objc_msgSend_window(local_28,local_1c0);
  local_78 = _objc_retainAutoreleasedReturnValue();
  if (local_78 != 0) {
    local_1c8 = (double)_objc_msgSend_safeAreaInsets(local_78,local_1c0);
    dVar3 = (double)_objc_msgSend_qqSafeTop(local_28,local_1c0);
    IVar2 = local_28;
    if (local_1c8 < dVar3) {
      local_1c8 = dVar3;
    }
    local_1d8 = local_1c8 + 18.0;
    uVar4 = _CGPointMake(0);
    _objc_msgSend_convertPoint_fromView_(uVar4,IVar2,local_1c0,local_78);
    if (local_1d8 <= local_38) {
      local_1d8 = local_38;
    }
    local_38 = local_1d8;
  }
  dVar3 = 220.0;
  uVar5 = _CGRectMake(0);
  _objc_msgSend_qqIndicatorView(local_28,local_1c0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBounds_(uVar5,uVar4,local_1c0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_bounds(local_28,local_1c0);
  dStack_138 = local_38 + 32.0;
  local_140 = _CGPointMake(dVar3 / 2.0);
  bVar1 = false;
  if (local_78 != 0) {
    _objc_msgSend_qqIndicatorView(local_28,local_1c0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_superview(uVar4,local_1c0);
    IVar2 = _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 != local_28;
    (*(code *)PTR__objc_release_00110458)(IVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  IVar2 = local_28;
  if (bVar1) {
    _objc_msgSend_qqIndicatorView(local_28,local_1c0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_superview(uVar4,local_1c0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_140 = _objc_msgSend_convertPoint_toView_(local_140,IVar2,local_1c0);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  _objc_msgSend_qqIndicatorView(local_28,local_1c0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCenter_(local_140,dStack_138,uVar4,local_1c0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_storeStrong(&local_78,0);
  return;
}

