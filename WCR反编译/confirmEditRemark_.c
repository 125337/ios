// confirmEditRemark: @ 01bb2470

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageRepositoryViewController::confirmEditRemark_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [31];
  byte local_89;
  undefined1 auStack_88 [8];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e45b0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  _objc_getAssociatedObject(pcVar2,"messageIndex");
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &::cf___;
  if ((local_40 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if ((pcVar2 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      _objc_storeStrong(&local_50,local_e0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_58,0);
  }
  if (local_48 != (cfstringStruct *)0x0) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750);
    local_69 = 0;
    bVar1 = false;
    local_60 = pcVar2;
    if (-1 < (long)pcVar2) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messagesArray_026c03b8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (long)pcVar2 < (long)pcVar3;
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar1) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messagesArray_026c03b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar2;
      _objc_initWeak(auStack_88,local_28);
      pcVar2 = local_80;
      local_89 = 0;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)pcVar2 & 1) != 0) &&
         (pcVar5 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
         pcVar3 = local_50, pcVar2 = local_80, puVar4 = PTR_WCRefineMessageRepositoryStore_026ce120,
         pcVar5 != (cfstringStruct *)0x0)) {
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_01bb2a1c;
        local_b0 = &DAT_0258b540;
        _objc_copyWeak(auStack_a8,auStack_88);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_renameItemId_toRemark_completion_026af350,pcVar2,pcVar3,&local_c8);
        local_89 = (byte)puVar4;
        _objc_destroyWeak(auStack_a8);
      }
      if ((local_89 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_remark);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveMessages_026c03c0);
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_destroyWeak(auStack_88);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_setAssociatedObject(local_28,&DAT_028e45b0,0,1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

