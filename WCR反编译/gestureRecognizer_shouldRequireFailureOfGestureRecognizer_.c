// gestureRecognizer:shouldRequireFailureOfGestureRecognizer: @ 01b6a3dc

/* Function Stack Size: 0x20 bytes */

bool WCRefineLocalEmoticonLibraryViewController::
     gestureRecognizer_shouldRequireFailureOfGestureRecognizer_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_38;
  if ((local_30 == *(long *)(local_20 + (long)_chipBarTap)) &&
     (local_38 == *(long *)(local_20 + (long)_chipBarLongPress))) {
    local_11 = 0;
  }
  else {
    bVar2 = false;
    if (local_30 == *(long *)(local_20 + (long)_chipBarTap)) {
      lVar3 = *(long *)(local_20 + (long)_chipBar);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_panGestureRecognizer_0269dd98);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar1 == lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    if (bVar2) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

