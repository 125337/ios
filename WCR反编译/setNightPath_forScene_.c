// setNightPath:forScene: @ 01c2ef60

/* Function Stack Size: 0x20 bytes */

void WCRefineNameplateBeautifyViewController::setNightPath_forScene_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_normalizedRelativePath__026ae7b8,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setNameplateHomeNightPath__026c17a8,local_38)
    ;
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setNameplateChatNightPath__026c17b0,local_38)
    ;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setNameplateContactsNightPath__026c17b8,local_38);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setNameplateMomentsNightPath__026c17c0,local_38);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setNameplateChatTopBarNightPath__026c17c8,local_38);
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setNameplateHomeOnlineNightPath__026c17d0,local_38);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

