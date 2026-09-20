// FUN_01f9f574 @ 01f9f574

void FUN_01f9f574(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  local_38 = param_1;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_https___pan_baidu_com_s_1ILx3ajnI2zmrmGd8rLGdew_pwd_amdp;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_https___pan_baidu_com_s_1ILx3ajnI2zmrmGd8rLGdew_pwd_amdp,
             PTR_s_stringByAddingPercentEncodingWit_0269d900);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &cf_https___pan_baidu_com_s_1ILx3ajnI2zmrmGd8rLGdew_pwd_amdp;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_baiduyun_____)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_bdnetdisk___n_action_SHARE_LINK_link___);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_openExternalLinkPreferSchemes_ht_026ad018,puVar5,
             &cf_https___pan_baidu_com_s_1ILx3ajnI2zmrmGd8rLGdew_pwd_amdp);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

