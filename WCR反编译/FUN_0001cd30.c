// FUN_0001cd30 @ 0001cd30

void FUN_0001cd30(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar1 = local_30;
    FUN_0001c6ac();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    FUN_0001a4fc(pcVar1,&cf_m_ChatRoomData);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    FUN_0001a4fc(pcVar1,&cf_m_dicData);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar4;
      FUN_0001cab0(pcVar4,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
      pcVar1 = local_70;
      if (pcVar4 == (cfstringStruct *)0x0) {
        pcVar1 = local_68;
        FUN_0001cab0(local_68,&cf_m_nsChatRoomNickName);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
      }
      local_48 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

