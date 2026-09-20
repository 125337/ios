// FUN_002532fc @ 002532fc

void FUN_002532fc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_b8;
  undefined *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68 [4];
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_getAssociatedObject(param_1,DAT_026dfbc8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == (undefined *)0x0) {
    local_48 = (undefined *)0x0;
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentEmotionMd5_026a10c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_71 = 0;
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_b8 = (undefined *)0x0;
    }
    else {
      local_b8 = PTR_WCRefineEmoticonGroupStore_026ce420;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groupIdForMd5__026a10c8,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68[0] = local_b8;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    puVar2 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0);
    local_80 = &cf_yRR_;
    if (puVar2 == (undefined *)0x0) {
      local_80 = &cf_mRR_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,
               PTR_s_actionButtonWithTitle_selector__026a10d0);
    if (((ulong)puVar2 & 1) != 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_actionButtonWithTitle_selector__026a10d0,local_80,
                 PTR_s_WCRefine_onPreviewAddToGroup__026a0ee0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_38 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTitle_forState__026caab8,local_80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
                 PTR_s_WCRefine_onPreviewAddToGroup__026a0ee0,0x40);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTag__026caa80,DAT_02323eb0);
    _objc_setAssociatedObject(local_28,DAT_026dfbc8,local_38,1);
    local_88 = (undefined *)0x0;
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moveToFrontButton_026a10b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_90 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      puVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_88;
      local_88 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_90,0);
    if (local_88 == (undefined *)0x0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_88;
      local_88 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_38);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(local_68,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

