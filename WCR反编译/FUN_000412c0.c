// FUN_000412c0 @ 000412c0

void FUN_000412c0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  qword qVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  int local_64;
  qword local_60;
  ulong local_58 [3];
  cfstringStruct *local_40;
  qword local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = (cfstringStruct *)&local_38;
  local_38 = 0;
  _objc_storeStrong(pcVar1,param_2);
  FUN_0004185c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_40 = pcVar1;
  FUN_000370d0();
  _objc_retainAutoreleasedReturnValue();
  qVar3 = local_38;
  local_58[0] = uVar2;
  FUN_000370d0();
  _objc_retainAutoreleasedReturnValue();
  local_60 = qVar3;
  if ((((local_40 == (cfstringStruct *)0x0) ||
       (uVar2 = local_58[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0), uVar2 == 0)) ||
      (qVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
      qVar3 == 0)) ||
     (uVar2 = local_58[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_64 = 1;
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactByName__0269d178,local_58[0]);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_64 = 1;
    }
    else {
      local_78 = PTR_s_m_ChatRoomData_0269d748;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_ChatRoomData_0269d748);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_64 = 1;
      }
      else {
        pcVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_88 = PTR_s_getDislayNameForUserName__0269d750;
        local_80 = pcVar1;
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_respondsToSelector__026ca818,
                       PTR_s_getDislayNameForUserName__0269d750), ((ulong)pcVar1 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_64 = 1;
        }
        else {
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,local_88,local_60);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_90 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)pcVar1 & 1) == 0) ||
             (pcVar5 = local_90, FUN_00041a18(), pcVar1 = local_90, ((ulong)pcVar5 & 1) == 0)) {
            local_64 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar1;
            local_64 = 1;
          }
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_80,0);
        if (local_64 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_64 = 1;
        }
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

