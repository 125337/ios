// storeDouyinParseResult:forAwemeID: @ 01030cb8

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::storeDouyinParseResult_forAwemeID_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID local_68;
  uint local_5c;
  long local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  lVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (IVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_douyinResultHasPrimaryMedia__026adea0,local_50), (IVar2 & 1) == 0)) {
    local_5c = 1;
  }
  else {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copyLinkParseResult__026aded0,local_50);
    local_68 = IVar2;
    if (IVar2 != 0) {
      local_38 = &cf_ts;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_30 = &cf_result;
      local_20 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_28 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_01030c44();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_5c = (uint)(IVar2 == 0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

