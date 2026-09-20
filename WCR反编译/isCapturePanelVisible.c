// isCapturePanelVisible @ 00fe6a28

/* Function Stack Size: 0x10 bytes */

bool WCRefineIconNameCaptureSupport::isCapturePanelVisible(ID param_1,SEL param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte local_38;
  ulong local_30;
  byte local_11;
  
  if ((DAT_028e3090 == 0) ||
     (uVar1 = DAT_028e3090,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_isHidden_026ca768), (uVar1 & 1) != 0))
  {
    local_11 = 0;
  }
  else {
    uVar1 = DAT_028e3090;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_state_026cab20);
    local_38 = 0;
    if (uVar1 == 1) {
      local_30 = DAT_028e3090;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_panel_026ad220);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = (byte)uVar2 ^ 1;
    }
    local_11 = local_38 & 1;
    if (uVar1 == 1) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
  }
  return (uint)local_11;
}

