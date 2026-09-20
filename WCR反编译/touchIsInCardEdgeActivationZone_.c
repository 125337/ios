// touchIsInCardEdgeActivationZone: @ 01e759fc

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoCardView::touchIsInCardEdgeActivationZone_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar2 = true;
  if (local_30 != 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_20;
  lVar1 = local_30;
  if (bVar2) {
    local_11 = 0;
  }
  else {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_locationInView__026ca798);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,IVar3,PTR_s_pointIsInCardEdgeActivationZone__026c6e40);
    local_11 = (byte)IVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

