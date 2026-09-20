// mediaGroupInfoCopy:sequence: @ 01001898

/* Function Stack Size: 0x1c bytes */

ID WCRefineLinkMediaSender::mediaGroupInfoCopy_sequence_
             (ID param_1,SEL param_2,ID param_3,unsigned_int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40;
  undefined4 local_38;
  unsigned_int local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_34 = param_4;
  if (local_30 == 0) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_copyWithZone__026a4168);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_40 == 0) {
      _objc_storeStrong(&local_40,local_30);
    }
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setSequence__026a4170);
    uVar1 = local_40;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_34)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_sequence);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSequence__026a4170,local_34);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

