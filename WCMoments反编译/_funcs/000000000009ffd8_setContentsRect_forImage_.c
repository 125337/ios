// setContentsRect:forImage: @0x9ffd8

/* Function Stack Size: 0x38 bytes */

void WCMYYAnimatedImageView::setContentsRect_forImage_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_140;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  long local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_28 = param_3.field1_0x10.field1_0x8;
  local_30 = param_3.field1_0x10.field0_0x0;
  local_38 = param_3.field0_0x0.field1_0x8;
  local_40 = param_3.field0_0x0.field0_0x0;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_4);
  dStack_78 = 0.0;
  dStack_68 = 1.0;
  local_70 = 1.0;
  local_80 = _CGRectMake(0);
  if (((local_58 != 0) &&
      (dVar5 = dStack_78, dVar3 = (double)_objc_msgSend_size(local_58,local_140), 0.01 < dVar3)) &&
     (0.01 < dVar5)) {
    dVar4 = local_40 / dVar3;
    dStack_78 = local_38 / dVar5;
    local_70 = local_30 / dVar3;
    dStack_68 = local_28 / dVar5;
    _CGRectMake(0);
    local_80 = _CGRectIntersection(dVar4);
    uVar1 = _CGRectIsNull(local_80,dStack_78,local_70,dStack_68);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = _CGRectIsEmpty(local_80,dStack_78,local_70,dStack_68), (uVar1 & 1) != 0)) {
      dStack_78 = 0.0;
      dStack_68 = 1.0;
      local_70 = 1.0;
      local_80 = _CGRectMake(0);
    }
  }
  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_140);
  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_140,1);
  _objc_msgSend_layer(local_48,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentsRect_(local_80,dStack_78,local_70,dStack_68,uVar2,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_140);
  _objc_storeStrong(&local_58,0);
  return;
}

