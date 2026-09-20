// FUN_00297ca4 @ 00297ca4

void FUN_00297ca4(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined8 *puVar3;
  cfstringStruct *local_80;
  undefined8 *local_70;
  long local_68;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf__b;
  }
  else {
    local_80 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  lVar1 = DAT_028c9578;
  local_20 = local_80;
  if (DAT_028c9588 != 0) {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_002981a0;
    local_40 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_38[0] = local_80;
    FUN_00276c80(1,0,&local_58);
    _objc_storeStrong(&DAT_028c9578);
    _objc_storeStrong(&DAT_028c9580,0);
    local_5c = 1;
    _objc_storeStrong(local_38,0);
    goto LAB_00297fa0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = lVar1;
  _objc_storeStrong(&DAT_028c9578);
  puVar3 = &DAT_028c9580;
  _objc_storeStrong(&DAT_028c9580,0);
  if (local_68 == 0) {
    FUN_0028cf78();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
LAB_00297f54:
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_20);
      local_5c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_stopLoadingWithOKText__026a1868);
      if (((ulong)puVar3 & 1) == 0) goto LAB_00297f54;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stopLoadingWithOKText__026a1868,local_20)
      ;
      local_5c = 1;
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_20,
               local_68);
    local_5c = 1;
  }
  _objc_storeStrong(&local_68,0);
LAB_00297fa0:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

