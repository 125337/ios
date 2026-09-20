// tapGestureOccurred: @ 01709580

/* Function Stack Size: 0x18 bytes */

void SwitchThemes::tapGestureOccurred_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dragging_026b3830);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDragging__026b37c0,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_on_026a80c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOn__0269dc80,(uint)IVar1 ^ 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDragging__026b37c0,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

