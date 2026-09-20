// wcr_typeTitle: @ 01d9db1c

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsBoardView::wcr_typeTitle_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_18 = &DAT_028e4760;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c380);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_refer);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = DAT_028e4758;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e4758,PTR_s_objectForKeyedSubscript__0269d098,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = (cfstringStruct *)PTR_WCRefineMessageBlockSupport_026ce0f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_titleForTypeKey__026a41e8,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_70 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_70;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    else {
      pcVar1 = DAT_028e4758;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e4758,PTR_s_objectForKeyedSubscript__0269d098,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_e_g;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

