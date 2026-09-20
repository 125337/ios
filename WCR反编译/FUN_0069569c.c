// FUN_0069569c @ 0069569c

byte FUN_0069569c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_phoneAddFriendEnabled_026a6508);
    if (((ulong)puVar2 & 1) == 0) {
      local_11 = 0;
      goto LAB_00695774;
    }
  }
  bVar1 = 0;
  FUN_01138c30(&cf_chat_phone_add_friend,0);
  local_11 = bVar1 & 1;
LAB_00695774:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

