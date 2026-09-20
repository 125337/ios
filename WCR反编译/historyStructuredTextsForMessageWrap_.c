// historyStructuredTextsForMessageWrap: @ 01b2bb84

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyStructuredTextsForMessageWrap_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if ((local_40 == 0) ||
     (lVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiMessageType_0269d0a8),
     (int)lVar1 != 0x31)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_44 = 1;
    local_28 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_30;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_historyPerformObjectSelector_sel_026bee48,local_40,
               PTR_s_m_extendInfoWithMsgType_026abd80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_58 = IVar3;
    if (IVar3 != 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyPerformObjectSelector_sel_026bee48,IVar3,
                 PTR_s_m_nsTitle_026a9d60);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar2 = local_50;
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyPerformObjectSelector_sel_026bee48,local_58,
                 PTR_s_m_nsDesc_026acfe0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    IVar3 = local_30;
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_historyRootXML_tagName__026bed80,lVar1,&cf_appmsg);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    IVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    puVar2 = local_50;
    if (IVar3 != 0) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,local_60);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar2 = local_50;
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,local_60);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar2 = local_50;
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,local_60,&cf_des);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyRootXML_tagName__026bed80,local_60,&cf_refermsg);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      IVar4 = local_30;
      local_68 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,IVar3,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar2 = local_50;
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,local_68,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_68,0);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    local_44 = 1;
    local_28 = puVar2;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

