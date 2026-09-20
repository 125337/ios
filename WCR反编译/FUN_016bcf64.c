// FUN_016bcf64 @ 016bcf64

byte FUN_016bcf64(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  byte local_58;
  cfstringStruct *local_40;
  undefined *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoParseLinkEnabled_0269dbc8);
  local_58 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
    puVar2 = PTR_WCRefineLinkParser_026ce168;
    local_58 = 0;
    if ((int)pcVar3 == 1) {
      local_40 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_80 = local_40;
      if (local_40 == (cfstringStruct *)0x0) {
        local_80 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_textContainsSupportedLink__0269dc30,local_80);
      local_58 = (byte)puVar2;
    }
  }
  local_11 = local_58 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

