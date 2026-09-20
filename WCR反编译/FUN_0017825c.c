// FUN_0017825c @ 0017825c

void FUN_0017825c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint local_16c;
  ulong local_90;
  ulong local_88;
  cfstringStruct *local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  ulong local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar3 = local_30;
  local_48 = param_4;
  FUN_0017ba74(local_30,"m_contactsDataLogic");
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  FUN_00180090();
  if ((uVar3 & 1) == 0) {
    local_28 = 0;
    local_60 = 1;
  }
  else {
    uVar3 = local_50;
    _objc_getAssociatedObject(local_50,&DAT_028c8901);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    puVar4 = PTR_WCRAddedSectionCache_026ce370;
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRAddedSectionCache_026ce370,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar2 = true;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_injectedKeys_0269fa50);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      bVar2 = uVar3 == 0;
      local_70 = uVar3;
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (bVar2) {
      local_28 = 0;
      local_60 = 1;
    }
    else {
      pcVar5 = &cf_getKeysArray;
      _NSSelectorFromString();
      uVar3 = local_50;
      local_80 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar5);
      if ((uVar3 & 1) == 0) {
        local_28 = 0;
        local_60 = 1;
      }
      else {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_80);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_88 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        lVar1 = local_48;
        if ((((uVar3 & 1) == 0) || (local_48 < 0)) ||
           (uVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
           (long)uVar3 <= lVar1)) {
          local_28 = 0;
          local_60 = 1;
        }
        else {
          uVar6 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_90 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          uVar3 = local_90;
          if ((uVar6 & 1) == 0) {
            local_28 = 0;
          }
          else {
            uVar7 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_recentTitle_0269fa58);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
            uVar6 = local_90;
            local_16c = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_earliestTitle_0269fa60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8);
              local_16c = (uint)uVar6;
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
            (*(code *)PTR__objc_release_02578630)(uVar7);
            local_28 = local_90;
            if ((local_16c & 1) == 0) {
              local_28 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
            }
          }
          local_60 = 1;
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

