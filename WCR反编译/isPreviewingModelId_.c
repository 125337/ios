// isPreviewingModelId: @ 01f5af3c

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceCloneListViewController::isPreviewingModelId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ID IVar4;
  byte local_50;
  ID local_48;
  ID local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  bVar2 = false;
  bVar1 = false;
  local_50 = 0;
  if (lVar3 != 0) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewingModelId_026c9500);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = 0;
    if ((IVar4 & 1) != 0) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewPlayer_026c9508);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = (byte)IVar4;
    }
  }
  local_11 = local_50 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

