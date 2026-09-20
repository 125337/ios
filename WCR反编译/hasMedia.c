// hasMedia @ 010158a8

/* Function Stack Size: 0x10 bytes */

bool WCRefineLinkParseResult::hasMedia(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_58 = 1;
  if (IVar5 == 0) {
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = 1;
    if (IVar5 == 0) {
      local_40 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_audioURL_026adb18);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      IVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = 1;
      if (IVar5 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageURLs_026adac8);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        IVar5 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_58 = (uint)(IVar5 != 0);
        local_50 = param_1;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  return local_58;
}

