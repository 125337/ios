// stopOfficialPlayback @ 01b5b5a0

/* Function Stack Size: 0x10 bytes */

void WCRLEGridCell::stopOfficialPlayback(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_30 = 0;
  uVar2 = *(ulong *)(param_1 + (long)_preview);
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_valueForKey__0269d128,&cf_m_emoticonShowPlayView);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar3 = *(undefined8 *)(local_18 + (long)_preview);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_valueForKey__0269d128,&cf_m_wrap);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_28 == 0) ||
     (uVar4 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setEmoticonWrap_PlayGif__026bf7b0)
     , (uVar4 & 1) == 0)) {
    uVar4 = *(ulong *)(local_18 + (long)_preview);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_playGif__026bf7b8);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_preview),PTR_s_playGif__026bf7b8,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setEmoticonWrap_PlayGif__026bf7b0,local_30,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

