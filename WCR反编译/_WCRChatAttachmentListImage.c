// _WCRChatAttachmentListImage @ 00ec3218

void _WCRChatAttachmentListImage(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_68;
  undefined *local_58;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  double local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar3 & 1) == 0) || (local_28 <= 0.0)) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
  }
  else {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_38;
    FUN_00ec370c();
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_38;
      local_38 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar3 = local_38;
    FUN_00ec370c();
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceTitle);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 0;
      local_b0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_b0 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_b0;
      }
      puVar5 = puVar3;
      local_41 = puVar2 == (undefined *)0x0;
      _WCRChatAttachmentCatalogIconName(puVar3,local_b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_38;
      local_38 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((local_41 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
      local_2c = 1;
    }
    else {
      puVar3 = local_38;
      FUN_00ec384c();
      bVar1 = ((ulong)puVar3 & 1) == 0;
      if (bVar1) {
        local_b8 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_displayImageForIconValue_size__026ab508,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_b8;
      }
      else {
        local_b8 = local_38;
        FUN_00ec39c8();
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_b8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      if ((local_50 != (undefined *)0x0) &&
         (puVar3 = local_38, FUN_00ec384c(), ((ulong)puVar3 & 1) != 0)) {
        puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resizedImage_side__026a3d20
                   ,local_50);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_50;
        local_50 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if (local_50 == (undefined *)0x0) {
        puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_previewImageNamed_size__026ab510,local_38);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_50;
        local_50 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
      local_2c = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

