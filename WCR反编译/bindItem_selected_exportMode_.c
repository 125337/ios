// bindItem:selected:exportMode: @ 01b5a6dc

/* Function Stack Size: 0x20 bytes */

void WCRLEGridCell::bindItem_selected_exportMode_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *local_118;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_b8;
  undefined *local_98;
  undefined4 local_90;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  bool local_69;
  undefined *local_68;
  bool local_59;
  cfstringStruct *local_58;
  byte local_4a;
  byte local_49;
  cfstringStruct *local_48;
  byte local_3a;
  byte local_39;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  local_3a = (byte)param_5;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(local_28 + (long)_boundRel));
  local_49 = (byte)pcVar2;
  _objc_storeStrong(local_28 + (long)_boundRel,local_48);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isPack_026ae428);
  local_4a = (byte)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_nameLabel),PTR_s_setHidden__026ca970,
             (local_4a ^ 1) & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_countLabel),PTR_s_setHidden__026ca970,
             (local_4a ^ 1) & 1);
  local_59 = false;
  bVar1 = (local_4a & 1) == 0;
  if (bVar1) {
    local_e0 = (cfstringStruct *)0x0;
  }
  else {
    local_e0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_e0;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_nameLabel),PTR_s_setText__026caa88,local_e0);
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_e8 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_69 = false;
  bVar1 = (local_4a & 1) == 0;
  if (bVar1) {
    local_e8 = (undefined *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_childCount_026bf798);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_e8;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_countLabel),PTR_s_setText__026caa88,local_e8);
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pinned_026ae320);
  if (((ulong)pcVar2 & 1) == 0) {
    if (*(long *)(local_28 + (long)_pinHost) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + (long)_pinHost),PTR_s_setHidden__026ca970,1);
    }
  }
  else {
    if (*(long *)(local_28 + (long)_pinHost) == 0) {
      FUN_01b5af80(0x4050000000000000,*(undefined8 *)(local_28 + (long)_previewHost));
      uVar3 = *(undefined8 *)(local_28 + (long)_previewHost);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(local_28 + (long)_pinHost);
      *(undefined8 *)(local_28 + (long)_pinHost) = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_28 + (long)_pinHost),PTR_s_setHidden__026ca970,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_checkView),PTR_s_setHidden__026ca970,
             (local_3a ^ 1) & 1);
  if ((local_3a & 1) != 0) {
    pcVar2 = &cf_checkmark_circle_fill;
    if ((local_39 & 1) == 0) {
      pcVar2 = &cf_circle;
    }
    puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_28 + (long)_checkView),PTR_s_setImage__026ca978);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_79 = 0;
    local_89 = 0;
    local_118 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_39 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_118;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_118;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_28 + (long)_checkView),PTR_s_setTintColor__026caab0,local_118);
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
  }
  if (((local_49 & 1) == 0) || (*(long *)(local_28 + (long)_preview) == 0)) {
    puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_lightweightWrapForItem__026ae450,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRefineLocalEmoticonStore_026ce440;
    local_98 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_prepareWrapForDisplay__026a3d88,puVar6)
    ;
    if (((((ulong)puVar7 & 1) == 0) || (local_98 == (undefined *)0x0)) ||
       (*(long *)(local_28 + (long)_preview) == 0)) {
      local_90 = 1;
    }
    else {
      uVar8 = *(ulong *)(local_28 + (long)_preview);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_isNeedPlay__026bf7a0);
      if ((uVar8 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_28 + (long)_preview),PTR_s_setM_isNeedPlay__026bf7a0,1);
      }
      uVar8 = *(ulong *)(local_28 + (long)_preview);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_changeWrap_needShowDesc__026bf7a8);
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulong *)(local_28 + (long)_preview);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_setEmoticonWrap_PlayGif__026bf7b0)
        ;
        if ((uVar8 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_28 + (long)_preview),
                     PTR_s_setEmoticonWrap_PlayGif__026bf7b0,local_98,1);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_28 + (long)_preview),
                   PTR_s_changeWrap_needShowDesc__026bf7a8,local_98,0);
      }
      local_90 = 0;
    }
    _objc_storeStrong(&local_98,0);
  }
  else {
    local_90 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

