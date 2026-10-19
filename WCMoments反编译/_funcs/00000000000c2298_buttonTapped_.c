// buttonTapped: @0xc2298

/* Function Stack Size: 0x18 bytes */

void WCMTOCropToolbar::buttonTapped_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_b8;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar3 = local_38;
  _objc_msgSend_cancelTextButton(local_28,local_b8);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  lVar4 = local_38;
  bVar1 = true;
  if (lVar3 != lVar2) {
    _objc_msgSend_cancelIconButton(local_28,local_b8);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 == lVar3;
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  lVar3 = local_38;
  if (bVar1) {
    _objc_msgSend_cancelButtonTapped(local_28,local_b8);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar3 != 0) {
      _objc_msgSend_cancelButtonTapped(local_28,local_b8);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
  }
  else {
    _objc_msgSend_doneTextButton(local_28,local_b8);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    lVar4 = local_38;
    bVar1 = true;
    if (lVar3 != lVar2) {
      _objc_msgSend_doneIconButton(local_28,local_b8);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 == lVar3;
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
    (*(code *)PTR__objc_release_00110458)(lVar2);
    lVar3 = local_38;
    if (bVar1) {
      _objc_msgSend_doneButtonTapped(local_28,local_b8);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      if (lVar3 != 0) {
        _objc_msgSend_doneButtonTapped(local_28,local_b8);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))();
        (*(code *)PTR__objc_release_00110458)(lVar3);
      }
    }
    else {
      _objc_msgSend_resetButton(local_28,local_b8);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (lVar3 == lVar4) {
        _objc_msgSend_resetButtonTapped(local_28,local_b8);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar3 != 0;
        (*(code *)PTR__objc_release_00110458)(lVar3);
      }
      (*(code *)PTR__objc_release_00110458)(lVar4);
      lVar3 = local_38;
      if (bVar1) {
        _objc_msgSend_resetButtonTapped(local_28,local_b8);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))();
        (*(code *)PTR__objc_release_00110458)(lVar3);
      }
      else {
        _objc_msgSend_rotateCounterclockwiseButton(local_28,local_b8);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (lVar3 == lVar4) {
          _objc_msgSend_rotateCounterclockwiseButtonTapped(local_28,local_b8);
          lVar3 = _objc_retainAutoreleasedReturnValue();
          bVar1 = lVar3 != 0;
          (*(code *)PTR__objc_release_00110458)(lVar3);
        }
        (*(code *)PTR__objc_release_00110458)(lVar4);
        lVar3 = local_38;
        if (bVar1) {
          _objc_msgSend_rotateCounterclockwiseButtonTapped(local_28,local_b8);
          lVar3 = _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar3 + 0x10))();
          (*(code *)PTR__objc_release_00110458)(lVar3);
        }
        else {
          _objc_msgSend_rotateClockwiseButton(local_28,local_b8);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          if (lVar3 == lVar4) {
            _objc_msgSend_rotateClockwiseButtonTapped(local_28,local_b8);
            lVar3 = _objc_retainAutoreleasedReturnValue();
            bVar1 = lVar3 != 0;
            (*(code *)PTR__objc_release_00110458)(lVar3);
          }
          (*(code *)PTR__objc_release_00110458)(lVar4);
          lVar3 = local_38;
          if (bVar1) {
            _objc_msgSend_rotateClockwiseButtonTapped(local_28,local_b8);
            lVar3 = _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar3 + 0x10))();
            (*(code *)PTR__objc_release_00110458)(lVar3);
          }
          else {
            _objc_msgSend_clampButton(local_28,local_b8);
            lVar4 = _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            if (lVar3 == lVar4) {
              _objc_msgSend_clampButtonTapped(local_28,local_b8);
              lVar3 = _objc_retainAutoreleasedReturnValue();
              bVar1 = lVar3 != 0;
              (*(code *)PTR__objc_release_00110458)(lVar3);
            }
            (*(code *)PTR__objc_release_00110458)(lVar4);
            if (bVar1) {
              _objc_msgSend_clampButtonTapped(local_28,local_b8);
              lVar3 = _objc_retainAutoreleasedReturnValue();
              (**(code **)(lVar3 + 0x10))();
              (*(code *)PTR__objc_release_00110458)(lVar3);
            }
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

