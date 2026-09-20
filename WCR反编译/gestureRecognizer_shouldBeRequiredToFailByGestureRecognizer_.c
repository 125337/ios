// gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer: @ 007aec30

/* Function Stack Size: 0x20 bytes */

bool WCRTGSwipeSwitchDelegate::gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID *pIVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  double in_d0;
  double in_d1;
  double dVar6;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_60;
  undefined4 local_58;
  ID local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  bool local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pIVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(pIVar2,param_4);
  FUN_007ae358();
  if (pIVar2 == (ID *)((long)&MACH_HEADER.magic + 1)) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mainFrame_026a2610);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_007ae408();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_48;
    if (local_60 == 0) {
      local_21 = false;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      IVar4 = local_48;
      if ((IVar3 & 1) == 0) {
        local_21 = false;
      }
      else {
        IVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_panGestureRecognizer_0269dd98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if ((IVar4 == IVar3) ||
           (IVar3 = local_60, FUN_007af1ac(local_60,local_48), (IVar3 & 1) != 0)) {
          uVar1 = local_40;
          IVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mainFrame_026a2610);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_locationInView__026ca798);
          dVar6 = in_d0;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mainFrame_026a2610);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          _CGRectGetWidth(in_d1,dVar6,in_d2,in_d3);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_21 = 60.0 < in_d0 && in_d0 < in_d1 - 60.0;
        }
        else {
          local_21 = false;
        }
      }
    }
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_21 = false;
    local_58 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

