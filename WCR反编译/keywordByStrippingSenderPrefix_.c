// keywordByStrippingSenderPrefix: @ 01a0dd08

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAutoReplyListViewController::keywordByStrippingSenderPrefix_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf__);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__),
     (uVar1 & 1) != 0)) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return uVar1;
}

