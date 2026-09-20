// autoAcceptTransferFixedInviteRules @ 01fd8148

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineConfig::autoAcceptTransferFixedInviteRules(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  double local_e0;
  undefined *local_b0;
  ID local_a8;
  double local_a0;
  ID local_98;
  ID local_90;
  undefined4 local_84;
  ID local_80;
  ID local_78;
  SEL local_70;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = param_2;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_70;
  local_78 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_80 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_80;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((IVar2 & 1) == 0) ||
     (IVar2 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0),
     IVar2 == 0)) {
    IVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_objectForKey__0269e048,&cf_autoAcceptTransferFixedInviteAmount);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_78;
    local_90 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_objectForKey__0269e048,&cf_autoAcceptTransferFixedInviteChatRoom);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_90;
    local_98 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((IVar2 & 1) == 0) {
      local_e0 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_doubleValue_026ca608);
      local_e0 = in_d0;
    }
    local_a0 = local_e0;
    IVar2 = local_98;
    FUN_01fd868c();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = IVar2;
    if ((local_a0 <= 0.0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_hasSuffix__0269d018,&cf__chatroom),
       (IVar2 & 1) == 0)) {
      puVar5 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_84 = 1;
      local_60 = puVar5;
    }
    else {
      local_a0 = (double)(long)(local_a0 * 100.0) / 100.0;
      local_48 = &cf_amount;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = &cf_inviteChatRoom;
      local_30 = local_a8;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_38 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar2 = local_78;
      local_50 = local_b0;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                );
      _objc_retainAutoreleasedReturnValue();
      SVar1 = local_70;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar5);
      (*(code *)PTR__objc_release_02578630)(SVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_removeObjectForKey__0269d700,&cf_autoAcceptTransferFixedInviteAmount
                );
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_removeObjectForKey__0269d700,
                 &cf_autoAcceptTransferFixedInviteChatRoom);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = local_b0;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_84 = 1;
      local_60 = puVar5;
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithArray__0269eab8,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_84 = 1;
    local_60 = puVar5;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_60;
}

