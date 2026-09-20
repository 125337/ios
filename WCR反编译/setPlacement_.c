// setPlacement: @ 01c2ae40

/* Function Stack Size: 0x18 bytes */

void WCRNameplateAdjustmentViewController::setPlacement_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  long_long local_28;
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
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setNameplateHomePlacement__026c1690,local_28);
  }
  else if (IVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setNameplateChatPlacement__026c1698,local_28);
  }
  else if (IVar2 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setNameplateContactsPlacement__026c16a0,local_28);
  }
  else if (IVar2 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setNameplateMomentsPlacement__026c16a8,local_28);
  }
  else if (IVar2 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setNameplateChatTopBarPlacement__026c16b0,local_28);
  }
  else if (IVar2 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setNameplateHomeOnlinePlacement__026c16b8,local_28);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

