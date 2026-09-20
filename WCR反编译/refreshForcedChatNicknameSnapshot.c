// refreshForcedChatNicknameSnapshot @ 010e8ad8

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateHelper::refreshForcedChatNicknameSnapshot(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_nameplateChatShowPrivateNickEnab_026ae9c0);
  DAT_028e33e0 = (byte)puVar2;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameplateChatShowSelfNickEnabled_026ae9c8);
  DAT_028e33e1 = (byte)puVar2;
  bVar1 = 1;
  if ((DAT_028e33e0 & 1) == 0) {
    bVar1 = DAT_028e33e1;
  }
  DAT_028e33c1 = bVar1 & 1;
  DAT_028e33c0 = 1;
  _objc_storeStrong(&local_28,0);
  return;
}

