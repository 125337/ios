// FUN_0069aed4 @ 0069aed4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0069aed4(undefined8 param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_1d8;
  undefined *local_150;
  cfstringStruct *local_108;
  undefined *local_e0;
  undefined *local_d0;
  undefined *local_c8 [2];
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98 [3];
  undefined *local_80;
  byte local_72;
  bool local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined **local_38;
  undefined *local_30;
  byte local_21;
  
  ppuVar2 = &local_30;
  local_30 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  FUN_0069cce0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = ppuVar2;
  if (ppuVar2 == (undefined **)0x0) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    pcVar3 = &cf_more_plugin_hub;
    _WCRPluginIconResolvedTitle(&cf_more_plugin_hub,&cf_cN);
    _objc_retainAutoreleasedReturnValue();
    local_108 = &cf_more_plugin_hub;
    local_48 = pcVar3;
    _WCRPluginIconResolvedIcon(&cf_more_plugin_hub,&cf_WeChat_Lab_Logo_light_small);
    _objc_retainAutoreleasedReturnValue();
    if (local_108 == (cfstringStruct *)0x0) {
      local_108 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_108;
    (*(code *)PTR__objc_release_02578630)();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    FUN_0069cf94();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf________d);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_30;
    local_58 = puVar4;
    FUN_0069c020(local_30,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_71 = false;
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      local_150 = (undefined *)0x0;
    }
    else {
      local_150 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRefineBuiltInPluginHubStamp)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_150;
    }
    local_71 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_150;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_58);
    local_72 = ((byte)puVar4 ^ 1) & 1;
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_cellConfig);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_80 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forKey__0269d300,local_38,&cf_image);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_setValue_forKey__0269d300,local_48,&cf_title);
      }
    }
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_cell);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 0;
    local_b1 = 0;
    puVar5 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    local_98[0] = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    bVar1 = false;
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = local_98[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      bVar1 = puVar4 != (undefined *)0x0;
      local_b0 = puVar4;
    }
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if (bVar1) {
      puVar4 = local_98[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(local_98);
    _objc_storeStrong(&local_80,0);
    puVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
    puVar4 = local_60;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_1d8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_1d8;
      }
      else {
        local_1d8 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
        local_d0 = local_1d8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c8[0] = local_1d8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                 &cf_WCRefineBuiltInPluginHub);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_58,
                 &cf_WCRefineBuiltInPluginHubStamp);
      puVar5 = local_30;
      puVar4 = PTR_s_setUserInfo__026a17c8;
      puVar6 = local_c8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(local_c8,0);
    }
    local_21 = local_72 & 1;
    local_3c = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

