// groupMemberKeyForGroup:member: @ 0109d4f0

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageBlockSupport::groupMemberKeyForGroup_member_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = lVar1;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_40;
  local_48 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((((lVar1 == 0) ||
       (lVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       lVar1 == 0)) ||
      (IVar3 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_40),
      (IVar3 & 1) == 0)) ||
     (IVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_48),
     (IVar3 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

