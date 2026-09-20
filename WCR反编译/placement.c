// placement @ 01c2ac70

/* Function Stack Size: 0x10 bytes */

long_long WCRNameplateAdjustmentViewController::placement(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedScene_026c15f0);
  if (IVar2 == 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomePlacement_026aea60);
    local_18 = puVar1;
  }
  else if (IVar2 == 1) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatPlacement_026aea88);
    local_18 = puVar1;
  }
  else if (IVar2 == 2) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateContactsPlacement_026aeab0);
    local_18 = puVar1;
  }
  else if (IVar2 == 3) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateMomentsPlacement_026aead8);
    local_18 = puVar1;
  }
  else if (IVar2 == 4) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateChatTopBarPlacement_026aeb00);
    local_18 = puVar1;
  }
  else if (IVar2 == 5) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nameplateHomeOnlinePlacement_026aeb28);
    local_18 = puVar1;
  }
  else {
    local_18 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

