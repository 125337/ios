// FUN_002528b4 @ 002528b4

void FUN_002528b4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_b8 [2];
  ulong local_a8;
  ulong local_a0 [2];
  ulong local_90;
  ulong local_88;
  undefined4 local_7c;
  ulong local_78;
  ulong local_70;
  byte local_63;
  byte local_62;
  byte local_61;
  ulong local_58 [4];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028c93e8)(param_1,param_2);
  local_38 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_model);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_58[0] = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_model);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_58[0];
  local_58[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar3 = local_58[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58[0],PTR_s_isEqualToString__0269ccc8,_WCREmoticonCustomPid);
  local_61 = (byte)uVar3;
  uVar3 = local_58[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58[0],PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonPid);
  local_62 = (byte)uVar3;
  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isLocalWrap__026a10b0,local_38);
  local_63 = (byte)puVar4;
  if (((local_61 & 1) == 0) &&
     (((local_62 & 1) != 0 ||
      ((uVar3 = local_58[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0), uVar3 == 0 &&
       ((local_63 & 1) != 0)))))) {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026dfbc8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_78 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setHidden__026ca970,1);
    }
    local_7c = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026dfbc8);
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar3;
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
      }
      local_7c = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      local_90 = 0;
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moveToFrontButton_026a10b8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_90;
      local_90 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((local_90 == 0) ||
         (uVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isHidden_026ca768),
         (uVar3 & 1) != 0)) {
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026dfbc8);
        _objc_retainAutoreleasedReturnValue();
        local_a0[0] = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
        }
        local_7c = 1;
        _objc_storeStrong(local_a0,0);
      }
      else {
        local_a8 = 0;
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentEmotionMd5_026a10c0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_a8;
        local_a8 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_a8;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((((uVar3 & 1) == 0) ||
             (uVar3 = local_a8,
             (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0), uVar3 == 0)) ||
            (uVar3 = local_a8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_isEqualToString__0269ccc8,_WCREmoticonCustomPid),
            (uVar3 & 1) != 0)) ||
           ((uVar3 = local_a8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_isEqualToString__0269ccc8,&cf_jsb_emoticon_md5),
            (uVar3 & 1) != 0 ||
            (uVar3 = local_a8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_isEqualToString__0269ccc8,&cf_dice_emoticon_md5),
            (uVar3 & 1) != 0)))) {
          uVar3 = local_28;
          _objc_getAssociatedObject(local_28,DAT_026dfbc8);
          _objc_retainAutoreleasedReturnValue();
          local_b8[0] = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
          }
          local_7c = 1;
          _objc_storeStrong(local_b8,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_WCRefine_ensurePreviewGroupButto_026a0ed0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_WCRefine_relayoutPreviewButtonsW_026a0ed8);
          local_7c = 0;
        }
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_90,0);
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

