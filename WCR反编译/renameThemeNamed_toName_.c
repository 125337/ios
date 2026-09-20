// renameThemeNamed:toName: @ 01fc2f44

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineWechatThemeManagerViewController::renameThemeNamed_toName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *local_150;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_6c;
  ulong local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  uVar3 = local_48;
  local_51 = 0;
  bVar1 = true;
  if (uVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf____);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    puVar5 = PTR_s_rangeOfCharacterFromSet__0269db68;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar3 != 0x7fffffffffffffff;
    local_68 = uVar3;
    local_60 = puVar5;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__NTy_NzzbS_TeHeW___);
    local_6c = 1;
  }
  else {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_38);
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (((ulong)puVar2 & 1) == 0) {
        local_88 = 0;
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_stringByAppendingPathComponent__026cab30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_88;
        puVar6 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_moveItemAtPath_toPath_error__0269f940,puVar5,local_80,&local_90);
        _objc_storeStrong(&local_88,local_90);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR_WCRefineHelper_026ce000;
        if (((ulong)puVar6 & 1) == 0) {
          uVar7 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_6c = 1;
        }
        else {
          puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_150 = puVar6;
          if (puVar6 == (undefined *)0x0) {
            local_a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_150 = local_a0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_150;
          if (puVar6 == (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_indexOfObject__0269e870,local_38);
          if (puVar2 != (undefined *)0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_replaceObjectAtIndex_withObject__026a38a0,puVar2,local_48);
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar6 & 1) != 0) {
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar6 & 1) != 0) {
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineOfficialTheme_026ce620,PTR_s_reloadLocalColorFiles__026ba0f0,0);
            if (((ulong)puVar5 & 1) != 0) {
              FUN_01fba8c8();
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___TTv_eR__N);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadThemes_026c9f60);
          _objc_storeStrong(&local_98,0);
          local_6c = 0;
        }
        _objc_storeStrong(&local_88,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_TT_N_X__W);
        local_6c = 1;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
    else {
      local_6c = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

