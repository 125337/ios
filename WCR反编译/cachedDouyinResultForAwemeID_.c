// cachedDouyinResultForAwemeID: @ 01030974

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineLinkParser::cachedDouyinResultForAwemeID_
          (WCRefineLinkParser *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  double in_d0;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_01030c28;
  }
  FUN_01030c44();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_ts);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_result)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar1 = local_50;
  if ((uVar2 & 1) == 0) {
LAB_01030b00:
    local_18 = 0;
  }
  else {
    puVar4 = PTR_WCRefineLinkParseResult_026cecb0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar1 & 1) == 0) goto LAB_01030b00;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    if (in_d0 <= 900.0) {
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copyLinkParseResult__026aded0,local_50);
      local_18 = IVar5;
    }
    else {
      FUN_01030c44();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_18 = 0;
    }
  }
  local_34 = 1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
LAB_01030c28:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

