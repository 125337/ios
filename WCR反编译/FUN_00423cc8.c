// FUN_00423cc8 @ 00423cc8

uint FUN_00423cc8(void)

{
  undefined *puVar1;
  uint local_30;
  uint local_28;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = 0;
  local_18 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    FUN_00426440();
    local_30 = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_messageDanmakuEnabled_026a36f8);
      local_30 = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_keywordAutoReplyEnabled_026a0b18);
        local_30 = 1;
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_patAutoReplyEnabled_026a3640);
          local_30 = 1;
          if (((ulong)puVar1 & 1) == 0) {
            puVar1 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_patOtherAutoReplyEnabled_026a3648);
            local_30 = 1;
            if (((ulong)puVar1 & 1) == 0) {
              puVar1 = local_18;
              (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_atMeAutoReplyEnabled_026a36b8);
              local_30 = 1;
              if (((ulong)puVar1 & 1) == 0) {
                puVar1 = local_18;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_18,PTR_s_autoAcceptFriendEnabled_026a3780);
                local_30 = (uint)puVar1;
              }
            }
          }
        }
      }
    }
    local_28 = local_30;
  }
  _objc_storeStrong(&local_18,0);
  return local_28 & 1;
}

