// FUN_0018b0b8 @ 0018b0b8

uint FUN_0018b0b8(void)

{
  undefined *puVar1;
  uint local_2c;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hideContactsChatsOnlyEnabled_0269fc60);
  local_2c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideContactsGroupChatsEnabled_0269fc68);
    local_2c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideContactsTagsEnabled_0269fc70);
      local_2c = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_hideContactsOfficialAccountsEnab_0269fc78);
        local_2c = 1;
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_hideContactsServiceAccountsEnabl_0269fc80);
          local_2c = 1;
          if (((ulong)puVar1 & 1) == 0) {
            puVar1 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_hideContactsWeComContactsEnabled_0269fc88);
            local_2c = (uint)puVar1;
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

