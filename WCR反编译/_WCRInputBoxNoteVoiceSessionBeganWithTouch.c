// _WCRInputBoxNoteVoiceSessionBeganWithTouch @ 003f13bc

void _WCRInputBoxNoteVoiceSessionBeganWithTouch(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  long local_18;
  long *plVar2;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  _WCRInputBoxCustomPanIsRecognizing();
  if ((uVar1 & 1) == 0) {
    DAT_028ca530 = 1;
    if (local_18 == 0) {
      puVar3 = &DAT_028ca528;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &DAT_028ca520;
        _objc_loadWeakRetained();
        _objc_storeWeak(&DAT_028ca528);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      _objc_storeWeak(&DAT_028ca528,local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

