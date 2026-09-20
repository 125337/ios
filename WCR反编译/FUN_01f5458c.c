// FUN_01f5458c @ 01f5458c

byte FUN_01f5458c(void)

{
  undefined *puVar1;
  byte local_31;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voiceAutoBackgroundPlayEnabled_026bd4f0);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_voiceFloatTapCloseEnabled_026bd500),
     ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_01f55fec();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_11 = 0;
    }
    else {
      local_31 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isShowingMinimizeView_026c9450);
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isShowingMinimizeView_026c9450);
        local_31 = (byte)puVar1;
      }
      if ((local_31 & 1) == 0) {
        local_11 = 0;
      }
      else {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_onCloseMinimizeView_026c9458);
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_onCloseMinimizeView_026c9458);
        }
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_hideMinimizeView_026c9460);
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideMinimizeView_026c9460);
        }
        local_11 = 1;
      }
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

