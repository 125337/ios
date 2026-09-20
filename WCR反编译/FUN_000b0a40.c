// FUN_000b0a40 @ 000b0a40

void FUN_000b0a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar5;
  long local_168;
  long local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = (undefined1 *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined1 *)0x0;
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)puVar1 & 1) != 0) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_40 == (undefined1 *)0x0) ||
     (puVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     puVar1 = local_40, puVar2 == (undefined1 *)0x0)) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_c6RhV__TN_Nzz,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    local_50 = 1;
    goto LAB_000b1110;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = puVar1;
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__);
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = local_40;
    _NSClassFromString();
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_80 = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      _objc_storeStrong(&local_58,local_40);
      goto LAB_000b1038;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,puVar2,&cf_nx_,0,
               in_x6,in_x7,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_50 = 1;
  }
  else {
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_60;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      _NSClassFromString();
      puVar1 = PTR_WCRefineHelper_026ce000;
      local_78 = puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_58;
        local_58 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,puVar2,
                   &cf_nx_,0,in_x6,in_x7,puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      local_50 = (uint)(puVar4 == (undefined1 *)0x0);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      if (local_50 == 0) {
        local_50 = 0;
      }
    }
    else {
      puVar1 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf_<h__:NTy_,&cf_nx_,0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
      local_50 = 1;
    }
    _objc_storeStrong(&local_60,0);
    if (local_50 == 0) {
LAB_000b1038:
      local_168 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c80c2);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_168;
      if (local_168 == 0) {
        local_168 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_integerValue_026ca750);
      }
      _objc_setAssociatedObject(local_28,&DAT_028c80c2,0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrefine_handleActionSelected_bu_0269e488,local_58,local_168);
      _objc_storeStrong(&local_88,0);
      local_50 = 0;
    }
  }
  _objc_storeStrong(&local_58,0);
LAB_000b1110:
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

