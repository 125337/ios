// changed @0x2cedc

/* Function Stack Size: 0x10 bytes */

void WCMHeaderSizeController::changed(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined8 local_30;
  
  _objc_msgSend_slider(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  fVar4 = (float)_objc_msgSend_value(uVar1,local_30);
  _objc_msgSend_setScale_((double)fVar4,param_1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scale(param_1,local_30);
  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_30,&cf___0f__);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_valueLabel(param_1,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar2,local_30,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_onChange(param_1,local_30);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar3 != 0) {
    _objc_msgSend_onChange(param_1,local_30);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_scale(param_1,local_30);
    (**(code **)(lVar3 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  return;
}

