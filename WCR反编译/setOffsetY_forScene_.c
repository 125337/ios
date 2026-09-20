// setOffsetY:forScene: @ 01c2f7f8

/* Function Stack Size: 0x20 bytes */

void WCRefineNameplateBeautifyViewController::setOffsetY_forScene_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  double local_28;
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
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setNameplateHomeOffsetY__026c1630);
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setNameplateChatOffsetY__026c1638);
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setNameplateContactsOffsetY__026c1640);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setNameplateMomentsOffsetY__026c1648);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setNameplateChatTopBarOffsetY__026c1650);
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setNameplateHomeOnlineOffsetY__026c1658);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

