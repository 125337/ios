// scale @ 01c2a5ac

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRNameplateAdjustmentViewController::scale
          (WCRNameplateAdjustmentViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  double in_d0;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedScene_026c15f0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeScale_026aea78);
    local_18 = in_d0;
  }
  else if (IVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatScale_026aeaa0);
    local_18 = in_d0;
  }
  else if (IVar2 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateContactsScale_026aeac8);
    local_18 = in_d0;
  }
  else if (IVar2 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateMomentsScale_026aeaf0);
    local_18 = in_d0;
  }
  else if (IVar2 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatTopBarScale_026aeb18);
    local_18 = in_d0;
  }
  else if (IVar2 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeOnlineScale_026aeb40);
    local_18 = in_d0;
  }
  else {
    local_18 = 1.0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

