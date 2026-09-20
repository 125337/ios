// shouldMigratePluginGroupId: @ 01ad2c2c

/* Function Stack Size: 0x18 bytes */

bool WCRefineGroupManager::shouldMigratePluginGroupId_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  byte local_5c;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == (cfstringStruct *)0x0) ||
     ((pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8),
      pcVar1 != (cfstringStruct *)0x0 &&
      (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8),
      pcVar1 != (cfstringStruct *)0x3)))) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_50 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_50;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_WCRefine_group_)
       , ((ulong)pcVar1 & 1) != 0)) {
      local_11 = 0;
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_grp_);
      local_5c = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_WCRefine_);
        local_5c = (byte)pcVar1;
      }
      local_11 = local_5c & 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

