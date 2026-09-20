// createLongPressCustomMenuItem: @ 01103280

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::createLongPressCustomMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    FUN_010f4f48();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    FUN_010f4f48();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_010f4f48();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (puVar2 != (undefined *)0x0) {
      _objc_storeStrong(&local_48,local_50);
    }
    puVar2 = local_40;
    _WCRLongPressMenuItemIsCustom();
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       puVar2 == (undefined *)0x0)) {
      local_18 = (cfstringStruct *)0x0;
      local_34 = 1;
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_010f4f48();
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        FUN_010f4f48();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_58;
        local_58 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar2 = local_58;
      _WCRPluginIconValueIsAlbum();
      if ((((ulong)puVar2 & 1) != 0) ||
         (puVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
         puVar2 == (undefined *)0x0)) {
        _objc_storeStrong(&local_58,&cf_icons_outlined_more_circle);
      }
      pcVar5 = &cf_MMMenuItem;
      _NSClassFromString();
      pcVar6 = &cf_initWithTitle_svgName_action_;
      local_60 = pcVar5;
      _NSSelectorFromString();
      local_68 = pcVar6;
      if ((local_60 == (cfstringStruct *)0x0) ||
         (pcVar5 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_60,PTR_s_instancesRespondToSelector__0269da90,pcVar6),
         ((ulong)pcVar5 & 1) == 0)) {
        local_18 = (cfstringStruct *)0x0;
        local_34 = 1;
      }
      else {
        puVar2 = local_40;
        FUN_011037b4();
        local_70 = puVar2;
        FUN_010f4b94(puVar2);
        pcVar5 = local_60;
        _objc_alloc();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (local_78 != (cfstringStruct *)0x0) {
          _objc_setAssociatedObject(local_78,&DAT_028e3508,local_40,3);
        }
        pcVar5 = local_78;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar5;
        local_34 = 1;
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

