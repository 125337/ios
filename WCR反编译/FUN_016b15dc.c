// FUN_016b15dc @ 016b15dc

void FUN_016b15dc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b0;
  int local_5c;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar1;
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  local_30 = pcVar1;
  do {
    if (local_28 == (cfstringStruct *)0x0) {
LAB_016b1994:
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_5c = 1;
LAB_016b19c0:
      _objc_storeStrong(local_5c,&local_28);
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    if ((local_30 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,local_30),
       ((ulong)pcVar1 & 1) != 0)) {
      local_48[0] = (cfstringStruct *)0x0;
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector__026ca7b8,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48[0];
        local_48[0] = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if ((local_48[0] == (cfstringStruct *)0x0) ||
         (pcVar1 = local_48[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
         ((ulong)pcVar1 & 1) == 0)) {
        local_5c = 3;
      }
      else {
        local_50 = (cfstringStruct *)0x0;
        pcVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_50;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)pcVar1 & 1) == 0) {
          local_b0 = &cf___;
        }
        else {
          local_b0 = local_50;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_b0;
        local_5c = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(local_48,0);
      local_5c = local_5c + -3;
      if (local_5c != 0) goto LAB_016b19c0;
      goto LAB_016b1994;
    }
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_016b1994;
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  } while( true );
}

