// ensureTelegramDemoPreset @ 01e2e114

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatURLSchemeViewController::ensureTelegramDemoPreset(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_a8;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined *local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_boolForKey__0269f3d8,&cf_WCRSFURLSchemeTelegramDemoSeeded);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setBool_forKey__026a9618,1,&cf_WCRSFURLSchemeTelegramDemoSeeded);
    puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_88 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_a8;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_schemeList_containsURL__026c6308,local_80,
               &cf_tg___resolve_domain_wcrefine);
    if ((IVar3 & 1) == 0) {
      IVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_schemeList_containsURL__026c6308,local_80,&cf_https___t_me_wcrefine)
      ;
      puVar1 = local_80;
      if ((IVar3 & 1) == 0) {
        local_58 = &cf_title;
        local_38 = &cf__wcrefine;
        local_50 = &cf_url;
        local_30 = &cf_tg___resolve_domain_wcrefine;
        local_48 = &cf_icon;
        local_28 = &cf_icons_outlined_link;
        local_40 = &cf_enabled;
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_20 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_58,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_insertObject_atIndex__0269eac0,puVar4,0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_80);
        local_74 = 0;
      }
      else {
        local_74 = 1;
      }
    }
    else {
      local_74 = 1;
    }
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_74 = 1;
  }
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

