// FUN_01da8390 @ 01da8390

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01da8390(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_170;
  int local_124;
  uint local_e4;
  bool local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined1 local_91;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  char *local_48;
  cfstringStruct *local_40;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_S_MRO;
    local_34 = 1;
    goto LAB_01da8c34;
  }
  local_40 = (cfstringStruct *)0x0;
  pcVar2 = "CContactMgr";
  _objc_getClass();
  pcVar3 = "MMContext";
  local_48 = pcVar2;
  _objc_getClass();
  local_50 = (cfstringStruct *)pcVar3;
  if (((cfstringStruct *)pcVar3 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar4;
    if ((pcVar4 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_40;
      local_40 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    _objc_storeStrong(&local_58,0);
  }
  local_60 = (cfstringStruct *)0x0;
  pcVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_usr_026af770);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e4 = 0;
  if (pcVar5 != (cfstringStruct *)0x0) {
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    local_e4 = (uint)pcVar5;
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_40;
  puVar7 = PTR_s_getContactByName__0269d178;
  if ((local_e4 & 1) != 0) {
    pcVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_60;
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  local_68 = (cfstringStruct *)0x0;
  local_70 = (cfstringStruct *)0x0;
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_68;
  local_68 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_70;
  local_70 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar5 = local_68;
  FUN_01dbaafc();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_68;
  local_68 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar5 = local_70;
  FUN_01dbaafc();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_70;
  local_70 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isGroup_026af768);
  local_a1 = 0;
  local_b1 = 0;
  if (((ulong)pcVar4 & 1) == 0) {
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_124 = (int)puVar7;
  }
  else {
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_124 = (int)puVar7;
  }
  bVar1 = local_124 != 0;
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  local_91 = bVar1;
  if ((bVar1) &&
     (pcVar5 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     pcVar4 = local_70, pcVar5 != (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar4;
    local_34 = 1;
  }
  else {
    pcVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    pcVar4 = local_68;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      pcVar4 = local_70;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160)
        ;
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          FUN_01dbaafc();
          _objc_retainAutoreleasedReturnValue();
          local_c0 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
          pcVar4 = local_c0;
          if (pcVar5 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar4;
          }
          local_34 = (uint)(pcVar5 != (cfstringStruct *)0x0);
          _objc_storeStrong(&local_c0,0);
          if (local_34 != 0) goto LAB_01da8bfc;
        }
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_170 = &cf_S_MRO;
        }
        else {
          local_170 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = local_170;
        }
        local_c9 = pcVar5 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_170;
        if (local_c9) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar4;
        local_34 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
      local_34 = 1;
    }
  }
LAB_01da8bfc:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
LAB_01da8c34:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

