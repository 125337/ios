// FUN_001237d8 @ 001237d8

void FUN_001237d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_50 = (cfstringStruct *)pcVar2;
    if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = (cfstringStruct *)pcVar2;
      if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_48 = 1;
      }
      else {
        pcVar3 = &cf_m_ChatRoomData;
        _NSSelectorFromString();
        pcVar4 = local_58;
        local_60 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar4 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_48 = 1;
        }
        else {
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = &cf_getInviterNameForUsername_;
          local_68 = pcVar4;
          _NSSelectorFromString();
          local_70 = pcVar3;
          if ((local_68 == (cfstringStruct *)0x0) ||
             (pcVar4 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_respondsToSelector__026ca818,pcVar3),
             ((ulong)pcVar4 & 1) == 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf___;
            local_48 = 1;
          }
          else {
            pcVar3 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_38);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_78 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((((ulong)pcVar3 & 1) == 0) ||
               (pcVar3 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
               pcVar3 == (cfstringStruct *)0x0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf___;
            }
            else {
              pcVar3 = local_78;
              FUN_00116ae8(local_78,local_30);
              _objc_retainAutoreleasedReturnValue();
              local_28 = pcVar3;
            }
            local_48 = 1;
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(&local_68,0);
        }
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

