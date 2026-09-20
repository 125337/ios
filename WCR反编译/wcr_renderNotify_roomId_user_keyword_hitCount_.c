// wcr_renderNotify:roomId:user:keyword:hitCount: @ 00ed9ff0

/* Function Stack Size: 0x38 bytes */

ID WCRefineChatRoomKickHelper::wcr_renderNotify_roomId_user_keyword_hitCount_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_60;
  ID local_58;
  ID local_50;
  long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  IVar1 = local_18;
  local_48 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_trimmedString__0269ec98,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    _objc_storeStrong(&local_50,&cf___);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_displayNameForUser_inRoom__0269ecd0,local_38,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_58 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayNameForRoom__0269ece0,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_50;
  local_60 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_58);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  local_50 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_58);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  local_50 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_60);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  local_50 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_60);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  local_50 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_50;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_trimmedString__0269ec98,local_40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  local_50 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar1 = local_50;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  local_50 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

