// FUN_00411918 @ 00411918

long FUN_00411918(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  FUN_00412560();
  local_18 = lVar1;
  if ((lVar1 == 0) && (lVar1 = local_20, FUN_004126ac(), local_18 = lVar1, lVar1 == 0)) {
    if (local_28 == 0) {
      local_18 = 1;
    }
    else {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_keywordAutoReplyOnlySelfMessages_026a3600);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_keywordAutoReplyOthersOnlyEnable_026a3608);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_keywordAutoReplySelfMessagesEnab_026a3610), (uVar3 & 1) != 0))
        {
          local_18 = 3;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        local_18 = 2;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

