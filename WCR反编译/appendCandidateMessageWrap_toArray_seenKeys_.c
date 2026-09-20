// appendCandidateMessageWrap:toArray:seenKeys: @ 01b2dab4

/* Function Stack Size: 0x28 bytes */

void WCRefineKeywordAlertHistoryViewController::appendCandidateMessageWrap_toArray_seenKeys_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_48;
  uint local_3c;
  ulong local_38;
  undefined8 local_30;
  long local_28;
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
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_28 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMesLocalID_0269d238);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_n64MesSvrID_0269d3e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiCreateTime_0269d208);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__u__lld__u);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,puVar2);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_28);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

