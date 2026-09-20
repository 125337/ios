// panGestureOccurred: @ 01708ef0

/* Function Stack Size: 0x18 bytes */

void SwitchThemes::panGestureOccurred_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  double in_d0;
  double in_d2;
  double dVar5;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_18);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar2 == 1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_on_026a80c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsOnBeforeDrag__026b3800,IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDragging__026b37c0,1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (lVar2 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMoved__026b37b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
      dVar5 = 2.0;
      if ((in_d0 <= in_d2 / 2.0) ||
         (IVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_on_026a80c0),
         (IVar3 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
        if ((in_d0 < dVar5 / 2.0) &&
           (IVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_on_026a80c0),
           (IVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOn__0269dc80,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOn__0269dc80,1);
      }
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
      if (((lVar2 == 3) ||
          (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
          lVar2 == 4)) ||
         (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
         lVar2 == 5)) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_knob_026b3808);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDragging__026b37c0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMoved__026b37b8,0);
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_on_026a80c0);
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isOnBeforeDrag_026b3818);
        bVar1 = false;
        if ((int)IVar3 != (int)IVar4) {
          IVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_changeAction_026b3820);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = IVar3 != 0;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        if (bVar1) {
          IVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_changeAction_026b3820);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_on_026a80c0);
          (**(code **)(IVar3 + 0x10))(IVar3,IVar4,1);
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

