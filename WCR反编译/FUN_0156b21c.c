// FUN_0156b21c @ 0156b21c

byte FUN_0156b21c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_01564574();
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = &cf_NewRemarkViewController;
      _NSClassFromString();
      local_50 = (cfstringStruct *)0x0;
      local_48 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        _objc_alloc_init();
        pcVar2 = local_50;
        local_50 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if (local_50 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        FUN_01577a38();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (local_50 == (cfstringStruct *)0x0) {
          local_11 = 0;
          local_24 = 1;
        }
        else {
          FUN_01556938(local_50);
          dVar3 = _dispatch_time(0,200000000);
          puVar4 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_50;
          local_78 = PTR___NSConcreteStackBlock_02578660;
          local_70 = 0xc2000000;
          local_6c = 0;
          local_68 = FUN_01577bc4;
          local_60 = &DAT_0257a800;
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = pcVar1;
          _dispatch_after(dVar3,puVar4,&local_78);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_11 = 1;
          local_24 = 1;
          _objc_storeStrong(&local_58,0);
        }
      }
      else {
        FUN_01563e1c(local_50,&cf_m_contact,local_20);
        pcVar1 = local_50;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01563e1c(pcVar1,&cf_needEditState);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar1 = local_50;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_01563e1c(pcVar1,&cf_contactInfoViewSource);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        FUN_01556938(local_50);
        local_11 = 1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      pcVar1 = &cf_ChatRoomRemarkEditViewController;
      _NSClassFromString();
      local_30 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        _objc_alloc_init();
        local_38 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_11 = 0;
        }
        else {
          local_40 = PTR_s_setChatRoomContact__026b06c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setChatRoomContact__026b06c0);
          if (((ulong)pcVar1 & 1) == 0) {
            FUN_01563e1c(local_38,&cf_chatRoomContact,local_20);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20);
          }
          FUN_01556938(local_38);
          local_11 = 1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_38,0);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

