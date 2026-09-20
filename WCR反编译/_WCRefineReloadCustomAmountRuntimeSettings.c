// _WCRefineReloadCustomAmountRuntimeSettings @ 00f11f48

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void _WCRefineReloadCustomAmountRuntimeSettings(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_customWalletBalanceEnabled_026abcc8);
  DAT_028e2b9f = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_walletBalanceReplacement_026abcd0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_28 = &cf___;
  }
  FUN_00f12258();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = DAT_0280e068;
  DAT_0280e068 = local_28;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_walletLingqianTongReplacement_026abcd8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &cf___;
  }
  FUN_00f12258();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = DAT_0280e070;
  DAT_0280e070 = local_38;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = DAT_0280e068;
  _WCRefineParseWalletBalanceNumber();
  pcVar2 = DAT_0280e070;
  DAT_028e2ba0 = pcVar1;
  _WCRefineParseWalletBalanceNumber();
  pcVar1 = DAT_0280e068;
  DAT_028e2ba8 = pcVar2;
  _WCRefineWalletParsedNumberIsValid(DAT_0280e068,DAT_028e2ba0);
  DAT_028e2bb0 = SUB81(pcVar1,0);
  pcVar1 = DAT_0280e070;
  _WCRefineWalletParsedNumberIsValid(DAT_0280e070,DAT_028e2ba8);
  DAT_028e2bb1 = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownFeatureEnabled_026abce0);
  DAT_028e2b98 = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownTextModifyEnabled_026abce8);
  DAT_028e2b99 = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownImageModifyEnabled_026abcf0);
  DAT_028e2b9a = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownMessageTimeModifyEnabled_026abcf8);
  DAT_028e2b9b = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownMessageSortEnabled_026abd00);
  DAT_028e2b9c = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownChatTimeModifyEnabled_026abd08);
  DAT_028e2b9d = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clownYinYangSwapEnabled_026abd10);
  DAT_028e2b9e = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_transferAmountModifyEnabled_026abd18);
  DAT_028e2bb2 = SUB81(pcVar1,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_transferAmountPersistOnExitChat_026abd20);
  DAT_028e2bb3 = SUB81(pcVar1,0);
  _objc_storeStrong(&local_18,0);
  return;
}

