// setEnabled:forScene: @ 01c2e16c

/* Function Stack Size: 0x1c bytes */

void WCRefineNameplateBeautifyViewController::setEnabled_forScene_
               (ID param_1,SEL param_2,bool param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateHomeEnabled__026c1718,local_21 & 1);
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateChatEnabled__026c1720,local_21 & 1);
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateContactsEnabled__026c1728,local_21 & 1);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateMomentsEnabled__026c1730,local_21 & 1);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateChatTopBarEnabled__026c1738,local_21 & 1);
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setNameplateHomeOnlineEnabled__026c1740,local_21 & 1);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

