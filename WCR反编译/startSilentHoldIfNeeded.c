// startSilentHoldIfNeeded @ 0150e5fc

/* Function Stack Size: 0x10 bytes */

void WCRSpeechBroadcastEngine::startSilentHoldIfNeeded(ID param_1,SEL param_2)

{
  long lVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  uint local_60;
  long local_48;
  undefined4 local_3c;
  undefined *local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_silentHoldPlayer_026affd8);
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  local_60 = 0;
  if (param_1 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_silentHoldPlayer_026affd8);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = (uint)IVar3;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_60 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_38 == (undefined *)0x0) {
      local_3c = 1;
    }
    else {
      local_48 = 0;
      puVar4 = PTR__OBJC_CLASS___AVAudioPlayer_026ceb18;
      _objc_alloc();
      lVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_48,lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSilentHoldPlayer__026affe0,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      bVar2 = true;
      if (local_48 == 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_silentHoldPlayer_026affd8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = IVar3 == 0;
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSilentHoldPlayer__026affe0,0);
        local_3c = 1;
      }
      else {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_silentHoldPlayer_026affd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_silentHoldPlayer_026affd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_silentHoldPlayer_026affd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_silentHoldPlayer_026affd8);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((IVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSilentHoldPlayer__026affe0,0);
        }
        local_3c = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

