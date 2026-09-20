// textViewDidChangeSelection: @ 0090c2fc

/* Function Stack Size: 0x18 bytes */

void LogFloatingBall::textViewDidChangeSelection_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint local_3c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_s_selectedRange_026a43a0;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_3c = 1;
  if (puVar2 == (undefined *)0x0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isFirstResponder_0269f488);
    local_3c = (uint)uVar1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setIsTextSelectionActive__026aa038,local_3c & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

