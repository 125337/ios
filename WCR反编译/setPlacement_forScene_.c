// setPlacement:forScene: @ 01c2e7f8

/* Function Stack Size: 0x20 bytes */

void WCRefineNameplateBeautifyViewController::setPlacement_forScene_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNameplateHomePlacement__026c1690,local_28)
    ;
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNameplateChatPlacement__026c1698,local_28)
    ;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateContactsPlacement__026c16a0,local_28);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateMomentsPlacement__026c16a8,local_28);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateChatTopBarPlacement__026c16b0,local_28);
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateHomeOnlinePlacement__026c16b8,local_28);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

