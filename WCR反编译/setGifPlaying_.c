// setGifPlaying: @ 01c36dbc

/* Function Stack Size: 0x14 bytes */

void WCRNameplateLibraryCell::setGifPlaying_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_58;
  undefined *local_50;
  byte local_41;
  ID local_40;
  byte local_31;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_emoticonView_026c1a08);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_58 = 1;
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonView_026c1a08);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = (uint)IVar2;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_58 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonPlaying_026c1a38);
    local_41 = 0;
    bVar1 = true;
    if ((uint)IVar2 != (local_21 & 1)) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadedEmoticonPath_026c1a30);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 == 0;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (!bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setAnimatedImagePlaybackEnabled__026ae9b8,
                 local_21 & 1);
      if (((local_21 & 1) != 0) &&
         (IVar2 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonHasPlayTask_026c1a68),
         puVar3 = PTR_WCRefineNameplateHelper_026ce5f8, (IVar2 & 1) == 0)) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadedEmoticonPath_026c1a30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_cachedDataAtPath__026ae920);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        puVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        puVar3 = PTR_WCRefineEmoticonUtil_026ce1c8;
        if (puVar4 != (undefined *)0x0) {
          IVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonView_026c1a08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_setEmoticonOnView_imageData_play_026ae928,IVar2,local_50,1);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEmoticonHasPlayTask__026c1a58,1);
        }
        _objc_storeStrong(&local_50,0);
        if (puVar4 == (undefined *)0x0) {
          return;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setEmoticonPlaying__026c1a50,local_21 & 1);
    }
  }
  return;
}

