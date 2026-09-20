// FUN_00515c9c @ 00515c9c

byte FUN_00515c9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00513618();
  if (((uVar1 & 1) == 0) &&
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 != 0)) {
    pcVar3 = "WCCommentItem";
    _objc_getClass();
    local_40 = pcVar3;
    FUN_0050ed60();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    if ((local_40 == (char *)0x0) ||
       ((pcVar3 == (char *)0x0 ||
        (pcVar3 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_genCommentObject_content_ref_sou_026a4788), ((ulong)pcVar3 & 1) == 0)))) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_genCommentObject_content_ref_sou_026a4788,local_20,local_28,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      if ((pcVar3 == (char *)0x0) ||
         (pcVar3 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_48,PTR_s_respondsToSelector__026ca818,
                    PTR_s_commentObject_ForAd_extraInfo__026a4790), ((ulong)pcVar3 & 1) == 0)) {
        local_11 = 0;
        local_38 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_58 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                   &cf_WCMomentsInteractionExtraInfoKey_Scene);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_commentObject_ForAd_extraInfo__026a4790,local_50,0,local_58);
        local_11 = 1;
        local_38 = 1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 0;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

