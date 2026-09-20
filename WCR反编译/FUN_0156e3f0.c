// FUN_0156e3f0 @ 0156e3f0

byte FUN_0156e3f0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,PTR_s_isCustomPageActionID__026b0670,
             local_20);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0156e8a0;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gMn_ubc6RhV);
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCPluginsViewController);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_30;
      FUN_0157876c();
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_30;
        _NSClassFromString();
        local_40 = puVar2;
        if (puVar2 != (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isSubclassOfClass__0269e590,puVar3);
          if (((ulong)puVar2 & 1) != 0) {
            puVar3 = local_40;
            _objc_alloc_init();
            puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            local_48 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            puVar2 = PTR_WCRefineHelper_026ce000;
            bVar1 = ((ulong)puVar3 & 1) != 0;
            if (bVar1) {
              FUN_01556938(local_48);
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__)
              ;
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            local_24 = 1;
            local_11 = bVar1;
            _objc_storeStrong(&local_48,0);
            goto LAB_0156e890;
          }
        }
        puVar2 = PTR_WCRefineHelper_026ce000;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_11 = 0;
        local_24 = 1;
      }
      else {
        puVar2 = local_30;
        FUN_01578858();
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubl1Y_);
          local_11 = 0;
          local_24 = 1;
        }
        else {
          local_11 = 1;
          local_24 = 1;
        }
      }
    }
    else {
      _WCRefinePreferredPluginHubViewController();
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        FUN_01556938(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_6e_uNS_u);
      }
      local_24 = 1;
      local_11 = puVar2 != (undefined *)0x0;
      _objc_storeStrong(&local_38,0);
    }
  }
LAB_0156e890:
  _objc_storeStrong(&local_30,0);
LAB_0156e8a0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

