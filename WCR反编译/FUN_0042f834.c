// FUN_0042f834 @ 0042f834

void FUN_0042f834(undefined8 param_1,undefined8 param_2,int param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_34 = param_3;
  if (local_28 == (cfstringStruct *)0x0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf___;
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_fromUserName_026a37c0);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fromUserName_026a37c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_pattedUserName_026a37c8);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_pattedUsername_026a37e8);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pattedUsername_026a37e8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    else {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pattedUserName_026a37c8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_serverId_026a37f0);
    if ((((ulong)pcVar1 & 1) != 0) &&
       (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_serverId_026a37f0),
       0 < (long)pcVar1)) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_svr__lld);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) &&
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_contentId_026a37d0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentId_026a37d0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (((pcVar1 == (cfstringStruct *)0x0) &&
        (pcVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_createTime_0269f088),
        ((ulong)pcVar1 & 1) != 0)) &&
       (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_createTime_0269f088)
       , pcVar1 != (cfstringStruct *)0x0)) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ct__llu);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) && (local_34 != 0)) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_local__u);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    FUN_00417e60(local_30,local_40,local_48,local_50);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

