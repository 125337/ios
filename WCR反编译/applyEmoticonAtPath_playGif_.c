// applyEmoticonAtPath:playGif: @ 01c368d0

/* Function Stack Size: 0x1c bytes */

bool WCRNameplateLibraryCell::applyEmoticonAtPath_playGif_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_98;
  undefined *local_90 [3];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  ID local_50;
  byte local_41;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_41 = (byte)param_4;
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ensureEmoticonView_026c1a28);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  if (IVar1 == 0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_loadedEmoticonPath_026c1a30);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) == 0) {
      puVar3 = PTR_WCRefineNameplateHelper_026ce5f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_cachedDataAtPath__026ae920,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_90[0] = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setEmoticonOnView_imageData_play_026ae928
                   ,local_50,local_90[0],local_41 & 1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setLoadedEmoticonPath__026c1a48,local_40);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setEmoticonPlaying__026c1a50,local_41 & 1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setEmoticonHasPlayTask__026c1a58,local_41 & 1);
        puVar3 = PTR_WCRefineNameplateHelper_026ce5f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_cachedImageAtPath__026ae8c8,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_size_026cab00);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setEmoticonImageSize__026c1a60);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,0);
        IVar1 = local_50;
        puVar3 = PTR_WCRefineNameplateHelper_026ce5f8;
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewHost_026c1a00);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar4 = in_d0;
        uVar5 = in_d1;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_emoticonImageSize_026c1a10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,uVar4,uVar5,puVar3,
                   PTR_s_fitContentView_inBounds_imageSiz_026ae908,IVar1);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        local_21 = 1;
        local_54 = 1;
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(local_90,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,0);
      IVar1 = local_50;
      puVar3 = PTR_WCRefineNameplateHelper_026ce5f8;
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewHost_026c1a00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = in_d0;
      local_70 = in_d1;
      local_68 = in_d2;
      local_60 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_emoticonImageSize_026c1a10);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,local_70,local_68,local_60,in_d0,in_d1,puVar3,
                 PTR_s_fitContentView_inBounds_imageSiz_026ae908,IVar1);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_emoticonPlaying_026c1a38);
      if ((uint)IVar1 != (local_41 & 1)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setGifPlaying__026c1a40,local_41 & 1);
      }
      local_21 = 1;
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

