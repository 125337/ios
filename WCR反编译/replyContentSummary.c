// replyContentSummary @ 01940964

/* Function Stack Size: 0x10 bytes */

ID WCRefineDoNotDisturbSettingsViewController::replyContentSummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  cfstringStruct *local_78;
  bool local_41;
  cfstringStruct *local_40;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doNotDisturbAutoReplyCountMode_026abe30);
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbAutoReplyMultiConten_026abe38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (puVar1 == (undefined *)0x0) {
      local_78 = &cf__gn_;
    }
    else {
      local_78 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_78;
    }
    local_41 = puVar1 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbAutoReplyText_026abe48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_01940d30();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbAutoReplyRepositoryC_026abe50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_01940d30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((puVar5 == (undefined1 *)0x0) || (puVar6 == (undefined1 *)0x0)) {
      if (puVar5 == (undefined1 *)0x0) {
        if (puVar6 == (undefined1 *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__gn_;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_N_;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_e_g;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_e_g_;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

