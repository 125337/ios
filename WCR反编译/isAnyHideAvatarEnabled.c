// isAnyHideAvatarEnabled @ 01f3b014

/* Function Stack Size: 0x10 bytes */

bool WCRefineUICleanViewController::isAnyHideAvatarEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hideSelfAvatarInPrivateChat_0269e260);
  local_2c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideOtherAvatarInPrivateChat_0269e268);
    local_2c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideSelfAvatarInGroupChat_0269e250);
      local_2c = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideOtherAvatarInGroupChat_0269e258);
        local_2c = (uint)puVar1;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

