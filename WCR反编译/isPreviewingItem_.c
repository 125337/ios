// isPreviewingItem: @ 01f8a988

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoicePackPickerViewController::isPreviewingItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  byte local_78;
  ID local_68;
  long local_58;
  ID local_48;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar3 = true;
  if (local_30 != 0) {
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = lVar5 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  if (bVar3) {
    local_11 = 0;
  }
  else {
    IVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewingPath_026c9b70);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = false;
    bVar3 = false;
    bVar1 = false;
    local_78 = 0;
    if (IVar7 != 0) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewingPath_026c9b70);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_58 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_absolutePath_026ae300);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      IVar7 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8);
      local_78 = 0;
      if ((IVar7 & 1) != 0) {
        local_68 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewPlayer_026c9508);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        IVar7 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_78 = (byte)IVar7;
      }
    }
    local_11 = local_78 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

