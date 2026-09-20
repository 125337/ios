// isSceneEnabled: @ 010d8eac

/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::isSceneEnabled_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateEnabled_026ae7f8);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else if (local_30 == 0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateHomeEnabled_026ae800);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 1) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateChatEnabled_026ae808);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 2) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateContactsEnabled_026ae810);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 3) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateMomentsEnabled_026ae818);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 4) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateChatTopBarEnabled_026ae820);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 5) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateHomeOnlineEnabled_026ae828);
    local_11 = (byte)puVar1 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

