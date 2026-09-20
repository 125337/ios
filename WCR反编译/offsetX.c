// offsetX @ 01c2a20c

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRNameplateAdjustmentViewController::offsetX
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
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeOffsetX_026aea68);
    local_18 = in_d0;
  }
  else if (IVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatOffsetX_026aea90);
    local_18 = in_d0;
  }
  else if (IVar2 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateContactsOffsetX_026aeab8);
    local_18 = in_d0;
  }
  else if (IVar2 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateMomentsOffsetX_026aeae0);
    local_18 = in_d0;
  }
  else if (IVar2 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatTopBarOffsetX_026aeb08);
    local_18 = in_d0;
  }
  else if (IVar2 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeOnlineOffsetX_026aeb30);
    local_18 = in_d0;
  }
  else {
    local_18 = 0.0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

