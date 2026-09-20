// FUN_0042d008 @ 0042d008

void FUN_0042d008(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  char *local_50;
  undefined4 local_48;
  char *local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = "CVerifyContactWrap";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    _objc_alloc_init();
    local_50 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      lVar2 = local_30;
      FUN_0042dfa8();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_30;
      local_58 = lVar2;
      FUN_0042e524();
      local_5c = (undefined4)lVar3;
      lVar3 = local_30;
      FUN_00422aac(local_30,&cf_m_nsTicket);
      _objc_retainAutoreleasedReturnValue();
      local_68 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      lVar2 = local_30;
      if (lVar3 == 0) {
        pcVar4 = &cf_toContact;
        _NSSelectorFromString();
        FUN_00422cd4(lVar2,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_70 = lVar2;
        FUN_00422aac(lVar2,&cf_m_nsTicket);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_68;
        local_68 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        _objc_storeStrong(&local_70,0);
      }
      lVar2 = local_30;
      FUN_00422aac(local_30,&cf_m_nsChatRoomUserName);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_30;
      local_78 = lVar2;
      FUN_00422aac(local_30,&cf_m_nsSourceUserName);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      local_80 = lVar3;
      FUN_00422aac(local_30,&cf_m_nsSourceNickName);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      pcVar4 = &cf_setM_nsUsrName_;
      local_88 = lVar2;
      _NSSelectorFromString();
      FUN_0042db40(pcVar1,pcVar4,local_58);
      pcVar1 = local_50;
      pcVar4 = &cf_setM_uiScene_;
      _NSSelectorFromString();
      FUN_0042e6a8(pcVar1,pcVar4,local_5c);
      pcVar1 = local_50;
      pcVar4 = &cf_setM_nsTicket_;
      _NSSelectorFromString();
      FUN_0042db40(pcVar1,pcVar4,local_68);
      pcVar1 = local_50;
      pcVar4 = &cf_setM_oVerifyContact_;
      _NSSelectorFromString();
      FUN_0042db40(pcVar1,pcVar4,local_30);
      lVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      pcVar1 = local_50;
      if (lVar2 != 0) {
        pcVar4 = &cf_setM_nsChatRoomUserName_;
        _NSSelectorFromString();
        FUN_0042db40(pcVar1,pcVar4,local_78);
      }
      lVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      pcVar1 = local_50;
      if (lVar2 != 0) {
        pcVar4 = &cf_setM_nsSourceUserName_;
        _NSSelectorFromString();
        FUN_0042db40(pcVar1,pcVar4,local_80);
      }
      lVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      pcVar1 = local_50;
      if (lVar2 != 0) {
        pcVar4 = &cf_setM_nsSourceNickName_;
        _NSSelectorFromString();
        FUN_0042db40(pcVar1,pcVar4,local_88);
      }
      lVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if ((lVar2 == 0) ||
         (lVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
         local_28 = local_50, lVar2 == 0)) {
        local_28 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_48 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

