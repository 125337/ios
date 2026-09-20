// FUN_0020e924 @ 0020e924

byte FUN_0020e924(void)

{
  undefined *puVar1;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_msgBannerBeautifyEnabled_026a06b8);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_quickReplyMsgCornerEnabled_026a06d0);
    local_11 = (byte)puVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

