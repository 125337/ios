// setScale:forScene: @ 01c2f974

/* Function Stack Size: 0x20 bytes */

void WCRefineNameplateBeautifyViewController::setScale_forScene_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  if (param_3 < 0.3) {
    local_28 = 0.3;
  }
  if (5.0 < local_28) {
    local_28 = 5.0;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setNameplateHomeScale__026c1660);
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setNameplateChatScale__026c1668);
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setNameplateContactsScale__026c1670)
    ;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setNameplateMomentsScale__026c1678);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setNameplateChatTopBarScale__026c1680);
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setNameplateHomeOnlineScale__026c1688);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

