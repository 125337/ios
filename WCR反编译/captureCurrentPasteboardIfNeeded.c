// captureCurrentPasteboardIfNeeded @ 00957c50

/* Function Stack Size: 0x10 bytes */

void WCRClipboardHistoryStore::captureCurrentPasteboardIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_38;
  byte local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = (ulong)puVar3 & 0xffffffff;
  if ((((ulong)puVar3 & 1) != 0) && (FUN_00956fd0(), (uVar4 & 1) != 0)) {
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_changeCount_026aab30);
    pcVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastChangeCount_026aab70);
    local_31 = 0;
    bVar1 = false;
    if (pcVar5 == pcVar6) {
      pcVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastCapturedText_026aab78);
      _objc_retainAutoreleasedReturnValue();
      local_31 = 1;
      local_30 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = pcVar5 != (cfstringStruct *)0x0;
    }
    if ((local_31 & 1) != 0) {
      pcVar5 = local_30;
      (*(code *)PTR__objc_release_02578630)();
    }
    if (bVar1) {
      local_38 = 1;
    }
    else {
      FUN_00957fd0();
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_changeCount_026aab30);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastChangeCount__026aab38,pcVar5);
        pcVar5 = local_28;
        FUN_00956b08();
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_80 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_48 = local_80;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          if (pcVar5 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appendText__026aa7b0,local_48);
          }
          local_38 = (uint)(pcVar5 == (cfstringStruct *)0x0);
          _objc_storeStrong(&local_48,0);
        }
        else {
          pcVar5 = local_28;
          FUN_009473cc();
          _objc_retainAutoreleasedReturnValue();
          local_40 = pcVar5;
          if (pcVar5 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appendImage__026aa7b8,pcVar5);
          }
          local_38 = 1;
          _objc_storeStrong(&local_40,0);
        }
      }
      else {
        pcVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_changeCount_026aab30);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastChangeCount__026aab38,pcVar5);
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

