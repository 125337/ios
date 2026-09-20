// FUN_01f09990 @ 01f09990

void FUN_01f09990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_d0;
  undefined *local_c0;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  ulong local_68;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  ulong local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_3c = 1;
  }
  else {
    puVar4 = local_28;
    FUN_01f016dc(local_28,*(undefined8 *)PTR____NSDictionary0___02578288);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_c0 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_c0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_c0;
    }
    local_51 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_c0;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_bg_);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      local_d0 = &cf___WCRDOM_I_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf___WCRDOM_I_,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_d0;
    }
    else {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,3);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = &cf___WCRDOM_B_;
      (*(code *)PTR__objc_msgSend_02578628)(&cf___WCRDOM_B_,PTR_s_stringByAppendingString__0269d398)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    lVar2 = local_38;
    puVar4 = local_48;
    pcVar6 = &cf___localStorage___;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf___localStorage___,PTR_s_stringByAppendingString__0269d398,local_60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,lVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    FUN_01eec2f0(local_28,local_48);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

