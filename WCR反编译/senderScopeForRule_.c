// senderScopeForRule: @ 01a0db24

/* Function Stack Size: 0x18 bytes */

long_long WCRefineKeywordAutoReplyListViewController::senderScopeForRule_
                    (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderScope);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
      if (((uVar1 & 1) == 0) ||
         ((uVar1 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750),
          local_18 = uVar1, uVar1 != 1 && (uVar1 != 2)))) {
        local_18 = 0;
      }
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_18 = 1;
      local_3c = 1;
    }
  }
  else {
    local_18 = 2;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

