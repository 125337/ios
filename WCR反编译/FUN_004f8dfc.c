// FUN_004f8dfc @ 004f8dfc

void FUN_004f8dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  int local_50;
  ulong local_40;
  ulong local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  if (((local_30 == (cfstringStruct *)0x0) || (uVar1 = local_38, FUN_004f8c50(), (uVar1 & 1) == 0))
     || (uVar1 = local_40, FUN_004f3738(), (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_50 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactByName__0269d178,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_50 = 1;
    }
    else {
      local_60 = PTR_s_m_ChatRoomData_0269d748;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_ChatRoomData_0269d748);
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_50 = 1;
      }
      else {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_70 = PTR_s_getDislayNameForUserName__0269d750;
        local_68 = pcVar2;
        if ((pcVar2 == (cfstringStruct *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,
                       PTR_s_getDislayNameForUserName__0269d750), ((ulong)pcVar2 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_50 = 1;
        }
        else {
          pcVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_40);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_78 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((((ulong)pcVar2 & 1) == 0) ||
             (pcVar4 = local_78, FUN_004f3738(), pcVar2 = local_78, ((ulong)pcVar4 & 1) == 0)) {
            local_50 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
            local_50 = 1;
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_68,0);
        if (local_50 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_50 = 1;
        }
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

