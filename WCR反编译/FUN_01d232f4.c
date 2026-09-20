// FUN_01d232f4 @ 01d232f4

void FUN_01d232f4(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *local_b0;
  cfstringStruct *local_90;
  undefined *local_50;
  int local_44;
  long local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (local_20 == (cfstringStruct *)0x0) {
      local_b0 = &cf___;
    }
    else {
      local_b0 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar4,PTR_s_setCurrentAutoReplyContent_forMo_026c42e0,local_b0,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  else {
    local_30 = 0;
    pcVar1 = (cfstringStruct *)(param_1 + 0x20);
    _objc_loadWeakRetained();
    local_40 = local_30;
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_30,local_40);
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) &&
       (pcVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       pcVar1 != (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQgHevmo___S);
      local_44 = 1;
    }
    else {
      lVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        lVar4 = param_1 + 0x20;
        _objc_loadWeakRetained();
        if (local_38 == (cfstringStruct *)0x0) {
          local_90 = &cf___;
        }
        else {
          local_90 = local_38;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar4,PTR_s_setCurrentAutoReplyContent_forMo_026c42e0,local_90,
                   *(undefined8 *)(param_1 + 0x28));
        (*(code *)PTR__objc_release_02578630)(lVar4);
        local_44 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__SeHe_);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,puVar3);
        local_44 = 1;
        _objc_storeStrong(&local_50,0);
      }
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    if (local_44 != 0) goto LAB_01d23608;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_44 = 0;
LAB_01d23608:
  _objc_storeStrong(&local_20,0);
  return;
}

