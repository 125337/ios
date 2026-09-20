// FUN_001172d8 @ 001172d8

void FUN_001172d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  ulong local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (((lVar1 == 0) ||
      (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      uVar2 == 0)) ||
     (uVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_50 = (cfstringStruct *)pcVar3;
    if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_58 = (cfstringStruct *)pcVar3;
      if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_48 = 1;
      }
      else {
        pcVar4 = &cf_m_ChatRoomData;
        _NSSelectorFromString();
        pcVar5 = local_58;
        local_60 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar5 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_48 = 1;
        }
        else {
          pcVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = &cf_getDisplayName_;
          local_68 = pcVar5;
          _NSSelectorFromString();
          local_70 = pcVar4;
          if ((local_68 == (cfstringStruct *)0x0) ||
             (pcVar5 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_respondsToSelector__026ca818,pcVar4),
             ((ulong)pcVar5 & 1) == 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf___;
            local_48 = 1;
          }
          else {
            pcVar4 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_30);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_78 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
            if (((ulong)pcVar4 & 1) == 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf___;
              local_48 = 1;
            }
            else {
              pcVar4 = local_78;
              FUN_0010ee50();
              _objc_retainAutoreleasedReturnValue();
              local_80 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              if ((pcVar4 == (cfstringStruct *)0x0) ||
                 (pcVar5 = local_80,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_80,PTR_s_isEqualToString__0269ccc8,local_30), pcVar4 = local_80,
                 ((ulong)pcVar5 & 1) != 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf___;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar4;
              }
              local_48 = 1;
              _objc_storeStrong(&local_80,0);
            }
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

