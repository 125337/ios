// isLikelyNSLogLine: @ 0091c824

/* Function Stack Size: 0x18 bytes */

bool WCNavigationMonitor::isLikelyNSLogLine_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_80;
  undefined *local_48;
  cfstringStruct *local_40;
  uint local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_34 = 1;
    goto LAB_0091ca64;
  }
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSProcessInfo_026ce4d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSProcessInfo_026ce4d0,PTR_s_processInfo_026a1a38);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
LAB_0091ca04:
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_rangeOfString_options__0269d118,
               &cf___d_4___d_2___d_2______0_9____0_9____,0x400);
    local_11 = lVar2 != 0x7fffffffffffffff;
    local_34 = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,puVar5);
    bVar1 = lVar2 != 0x7fffffffffffffff;
    if (bVar1) {
      local_11 = 1;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_48,0);
    if (local_34 == 0) goto LAB_0091ca04;
  }
  _objc_storeStrong(&local_40,0);
LAB_0091ca64:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

