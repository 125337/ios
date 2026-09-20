// FUN_00ec6858 @ 00ec6858

void FUN_00ec6858(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_AttachementObjectItem;
  local_28 = param_2;
  _NSClassFromString();
  local_30 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    _objc_alloc_init();
    lVar2 = local_20;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_48;
      local_48 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      _objc_storeStrong(&local_48,&cf__IN);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setNsTitle__0269ff70);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNsTitle__0269ff70,local_48);
    }
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_50;
      local_50 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    lVar2 = local_50;
    FUN_00ec39c8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar2;
    if (lVar2 != 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setOImage__026ab548);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOImage__026ab548,local_58);
      }
    }
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setPathKey__026ab550);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPathKey__026ab550,local_60);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setAttachementID__026ab558);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setAttachementID__026ab558,&UNK_000dbba0 + local_28);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setIsNew__026ab560);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsNew__026ab560,0);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setIsRedCode__026ab568);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsRedCode__026ab568,0);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setNsDesc__026ab570);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNsDesc__026ab570,&cf___);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_34 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

