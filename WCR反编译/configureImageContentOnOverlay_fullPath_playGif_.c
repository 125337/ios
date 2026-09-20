// configureImageContentOnOverlay:fullPath:playGif: @ 010e34c0

/* Function Stack Size: 0x24 bytes */

void WCRefineNameplateHelper::configureImageContentOnOverlay_fullPath_playGif_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  byte bVar1;
  ID IVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  byte local_154;
  char *local_f0 [5];
  undefined *local_c8;
  undefined4 local_c0;
  byte local_b9;
  undefined8 local_b8;
  byte local_a9;
  undefined8 local_a8;
  byte local_99;
  ID local_98 [5];
  char *local_70;
  byte local_61;
  char *local_60;
  char *local_58;
  char *local_50;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (char *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_shouldUseEmoticonForPath__026ae918,local_40);
  local_42 = (byte)IVar2;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x24f6f9);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_38;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x24f6fa);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar4;
  if (pcVar4 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_removeFromSuperview_026ca800);
  }
  pcVar4 = local_38;
  _objc_getAssociatedObject(local_38,DAT_0280e1d8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8,local_40);
  pcVar3 = local_50;
  local_61 = ((byte)pcVar4 ^ 1) & 1;
  if ((local_42 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
    pcVar4 = local_50;
    if ((((ulong)pcVar3 & 1) == 0) || ((local_61 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeFromSuperview_026ca800);
      puVar6 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_initWithFrame__026ca6e8);
      local_c8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_CONTENT_TAG);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setContentMode__026ca8e0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAutoresizingMask__026ca878,0x12);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cachedImageAtPath__026ae8c8,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setImage__026ca978);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_c8);
      _objc_storeStrong(&local_50,local_c8);
      _objc_setAssociatedObject(local_38,DAT_0280e1d8,local_40,3);
      _objc_storeStrong(&local_c8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0[0] = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar4 == (char *)0x0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cachedImageAtPath__026ae8c8,local_40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_setImage__026ca978);
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      _objc_storeStrong(local_f0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3,local_50,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,0);
    local_c0 = 0;
  }
  else {
    pcVar3 = "MMEmoticonView";
    _objc_getClass();
    local_70 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_42 = 0;
    }
    else {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if ((((ulong)pcVar4 & 1) == 0) || ((local_61 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeFromSuperview_026ca800);
        pcVar4 = local_70;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,pcVar4,PTR_s_initWithFrame__026ca6e8);
        pcVar3 = local_50;
        local_50 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_CONTENT_TAG);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_50);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cachedDataAtPath__026ae920,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_98[0] = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
        if (IVar2 != 0) {
          puVar6 = PTR_WCRefineEmoticonUtil_026ce1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,local_98[0]);
          local_a9 = 0;
          local_b9 = 0;
          local_154 = 1;
          if (((ulong)puVar6 & 1) == 0) {
            uVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            local_a9 = 1;
            local_a8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_154 = (byte)uVar5;
          }
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if ((local_a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          local_99 = local_154 & 1;
          bVar1 = 0;
          if ((local_41 & 1) != 0) {
            bVar1 = local_99;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonUtil_026ce1c8,
                     PTR_s_setEmoticonOnView_imageData_play_026ae928,local_50,local_98[0],bVar1);
        }
        _objc_setAssociatedObject(local_38,DAT_0280e1d8,local_40,3);
        _objc_setAssociatedObject(local_38,DAT_0280e1d0,0,1);
        _objc_storeStrong(local_98,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_fitEmoticonContent_onOverlay_res_026ae930,local_50,local_38,
               local_61 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,0);
    local_c0 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

