// offsetY @ 01c2a3dc

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRNameplateAdjustmentViewController::offsetY
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
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeOffsetY_026aea70);
    local_18 = in_d0;
  }
  else if (IVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatOffsetY_026aea98);
    local_18 = in_d0;
  }
  else if (IVar2 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateContactsOffsetY_026aeac0);
    local_18 = in_d0;
  }
  else if (IVar2 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateMomentsOffsetY_026aeae8);
    local_18 = in_d0;
  }
  else if (IVar2 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatTopBarOffsetY_026aeb10);
    local_18 = in_d0;
  }
  else if (IVar2 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeOnlineOffsetY_026aeb38);
    local_18 = in_d0;
  }
  else {
    local_18 = 0.0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

