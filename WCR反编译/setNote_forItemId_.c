// setNote:forItemId: @ 0095ea9c

/* Function Stack Size: 0x20 bytes */

bool WCRClipboardHistoryStore::setNote_forItemId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_e0;
  bool local_91;
  cfstringStruct *local_90;
  undefined *local_80;
  cfstringStruct *local_78;
  ID local_70;
  long local_68;
  long local_60;
  ID local_58;
  undefined4 local_4c;
  long local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_60 = 0x7fffffffffffffff;
    for (local_68 = 0; lVar1 = local_68, IVar2 = local_58,
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0), lVar1 < (long)IVar2;
        local_68 = local_68 + 1) {
      IVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar4 & 1) != 0) {
        local_60 = local_68;
        break;
      }
    }
    if (local_60 == 0x7fffffffffffffff) {
      local_21 = 0;
      local_4c = 1;
    }
    else {
      IVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      pcVar6 = local_40;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_e0 = local_40;
      local_91 = ((ulong)pcVar6 & 1) == 0;
      if (local_91) {
        local_e0 = &::cf___;
      }
      else {
        local_80 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_e0;
      }
      local_91 = !local_91;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_e0;
      if (local_91) {
        (*(code *)PTR__objc_release_02578630)(local_90);
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      pcVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObjectForKey__0269d700,&cf_note);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,&cf_note);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,local_70,local_60);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setItems__026a17a8,local_58);
      local_21 = 1;
      local_4c = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

