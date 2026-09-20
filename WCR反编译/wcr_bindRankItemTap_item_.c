// wcr_bindRankItemTap:item: @ 01d9a5dc

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_bindRankItemTap_item_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_51 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_88 = &::cf___;
  }
  else {
    local_88 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_88;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_tap);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_tap);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_a0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((local_38 != 0) &&
      (pcVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      pcVar3 != (cfstringStruct *)0x0)) &&
     (pcVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     pcVar3 != (cfstringStruct *)0x0)) {
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_commonGroups)
    ;
    if (((ulong)pcVar3 & 1) == 0) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_privacyOn_026c4ea0);
      if ((IVar6 & 1) == 0) {
        pcVar5 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_group);
        IVar6 = local_28;
        lVar2 = local_38;
        pcVar3 = local_48;
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_friend)
          ;
          IVar6 = local_28;
          lVar2 = local_38;
          pcVar3 = local_48;
          if (((ulong)pcVar5 & 1) == 0) {
            pcVar5 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_isEqualToString__0269ccc8,&cf_speaker);
            IVar6 = local_28;
            lVar2 = local_38;
            pcVar3 = local_48;
            if (((ulong)pcVar5 & 1) != 0) {
              pcVar5 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar6,PTR_s_wcr_bindSpeakerTap_usr_name__026c4ee0,lVar2,pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar5);
            }
          }
          else {
            pcVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar6,PTR_s_wcr_bindFriendTap_usr_name__026c4ed8,lVar2,pcVar3);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
        }
        else {
          pcVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_wcr_bindGroupTap_usr_name__026c4ed0,lVar2,pcVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_bindCommonGroupsTap_usr__026c4ec8,local_38,local_48);
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

