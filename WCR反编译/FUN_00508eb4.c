// FUN_00508eb4 @ 00508eb4

uint FUN_00508eb4(void)

{
  undefined *puVar1;
  uint local_2c;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatAvatarProfileCardEnabled_0269e288);
  local_2c = 0;
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatAvatarProfileCardMomentsEnab_026a4678);
    local_2c = (uint)puVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

