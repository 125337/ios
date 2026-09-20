// setOffsetX: @ 01c2a77c

/* Function Stack Size: 0x18 bytes */

void WCRNameplateAdjustmentViewController::setOffsetX_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedScene_026c15f0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30,PTR_s_setNameplateHomeOffsetX__026c1600)
    ;
  }
  else if (IVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30,PTR_s_setNameplateChatOffsetX__026c1608)
    ;
  }
  else if (IVar2 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_30,PTR_s_setNameplateContactsOffsetX__026c1610);
  }
  else if (IVar2 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_30,PTR_s_setNameplateMomentsOffsetX__026c1618);
  }
  else if (IVar2 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_30,PTR_s_setNameplateChatTopBarOffsetX__026c1620);
  }
  else if (IVar2 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_30,PTR_s_setNameplateHomeOnlineOffsetX__026c1628);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

