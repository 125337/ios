// FUN_00153898 @ 00153898

void FUN_00153898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  uint local_14c;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  byte local_5a;
  byte local_59;
  long local_58;
  int local_50;
  byte local_39;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_39 = param_5;
  if ((local_30 == 0) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_28 = 0;
    local_50 = 1;
    goto LAB_001547b8;
  }
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_58;
  FUN_001557c0();
  local_59 = (byte)lVar3;
  lVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_gif);
  local_5a = (byte)lVar3;
  uVar5 = local_30;
  _objc_getAssociatedObject(local_30,DAT_026df8f8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_30;
  local_68 = uVar5;
  _objc_getAssociatedObject(local_30,DAT_026df928);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_68;
  local_70 = uVar6;
  if ((local_59 & 1) == 0) {
    if (local_68 != 0) {
      puVar7 = PTR_WCRAttachmentVideoBackgroundView_026ce310;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRAttachmentVideoBackgroundView_026ce310,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeFromSuperview_026ca800);
        _objc_storeStrong(&local_68);
        _objc_setAssociatedObject(local_30,DAT_026df8f8,0,1);
        _objc_setAssociatedObject(local_30,DAT_026df928,0,3);
      }
    }
    puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
    if (puVar7 == (undefined *)0x0) {
      local_28 = 0;
      local_50 = 1;
    }
    else {
      if ((local_5a & 1) != 0) {
        pcVar8 = "MMAnimatedImagePlayMgr";
        _objc_getClass();
        pcVar9 = "MMAnimatedImagePlayConfig";
        local_b0 = pcVar8;
        _objc_getClass();
        local_b8 = pcVar9;
        if ((local_b0 != (char *)0x0) && (pcVar9 != (char *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_defaultConfig_0269f550);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_b0;
          local_c0 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_animatedImageViewWithData_config_0269f558,local_a8,pcVar9);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = pcVar8;
          if (pcVar8 == (char *)0x0) {
            local_50 = 0;
          }
          else {
            if (local_68 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeFromSuperview_026ca800);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setContentMode__026ca8e0,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setClipsToBounds__026ca8c8,0);
            _objc_storeStrong(&local_68,local_c8);
            _objc_setAssociatedObject(local_30,DAT_026df8f8,local_68,1);
            _objc_setAssociatedObject(local_30,DAT_026df928,local_38,3);
            uVar5 = local_68;
            uVar2 = DAT_026df930;
            puVar7 = PTR__OBJC_CLASS___NSValue_026ce1f0;
            puVar10 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_a8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_d8 = param_1;
            local_d0 = param_2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_valueWithCGSize__0269ec00);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,uVar2,puVar7,1);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar10);
            uVar5 = local_68;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar5;
            local_50 = 1;
          }
          _objc_storeStrong(&local_c8);
          _objc_storeStrong(&local_c0,0);
          if (local_50 != 0) goto LAB_0015473c;
        }
      }
      puVar7 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_a8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_68;
      local_e0 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        local_28 = 0;
        local_50 = 1;
      }
      else {
        local_e8 = (undefined *)0x0;
        if (local_68 == 0) {
LAB_001544f8:
          if (local_68 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeFromSuperview_026ca800);
          }
          puVar10 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_initWithImage__0269e558,local_e0);
          puVar7 = local_e8;
          local_e8 = puVar10;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setContentMode__026ca8e0,2);
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setClipsToBounds__026ca8c8,0);
          _objc_storeStrong(&local_68,local_e8);
          _objc_setAssociatedObject(local_30,DAT_026df8f8,local_68,1);
        }
        else {
          puVar7 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
          if ((uVar5 & 1) == 0) goto LAB_001544f8;
          _objc_storeStrong(&local_e8,local_68);
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setImage__026ca978,local_e0);
        }
        _objc_setAssociatedObject(local_30,DAT_026df928,local_38,3);
        uVar5 = local_68;
        uVar2 = DAT_026df930;
        puVar7 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_size_026cab00);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,puVar7,PTR_s_valueWithCGSize__0269ec00);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar5,uVar2,puVar7,1);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        uVar5 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar5;
        local_50 = 1;
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_e0,0);
    }
LAB_0015473c:
    _objc_storeStrong(&local_a8,0);
  }
  else {
    local_14c = 1;
    if (local_68 != 0) {
      puVar7 = PTR_WCRAttachmentVideoBackgroundView_026ce310;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRAttachmentVideoBackgroundView_026ce310,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_14c = 1;
      if ((uVar5 & 1) != 0) {
        uVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_38);
        local_14c = (uint)uVar5 ^ 1;
      }
    }
    uVar5 = local_68;
    local_71 = (byte)local_14c & 1;
    if ((local_14c & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_setMuted__0269f258,local_39 & 1);
      uVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_player_0269f278);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar1 = 0;
      if ((local_39 & 1) == 0) {
        uVar1 = 0x3f800000;
      }
      uVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_player_0269f278);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      if (local_68 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeFromSuperview_026ca800);
      }
      puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_WCRAttachmentVideoBackgroundView_026ce310;
      local_80 = puVar7;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar10,PTR_s_initWithURL_muted__0269f548,local_80,local_39 & 1);
      local_88 = puVar10;
      _objc_storeStrong(&local_68,puVar10);
      _objc_setAssociatedObject(local_30,DAT_026df8f8,local_68,1);
      uVar5 = local_68;
      uVar2 = DAT_026df930;
      puVar7 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      FUN_00155a70(local_38);
      local_98 = param_1;
      local_90 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,puVar7,PTR_s_valueWithCGSize__0269ec00);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,uVar2,puVar7,1);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    _objc_setAssociatedObject(local_30,DAT_026df928,local_38,3);
    uVar5 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar5;
    local_50 = 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
LAB_001547b8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

