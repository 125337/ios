// confirmDeleteThemeNamed: @ 01fc38f0

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::confirmDeleteThemeNamed_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__e_N),
     (uVar1 & 1) != 0)) {
    local_2c = 1;
  }
  else {
    _objc_initWeak(auStack_38,local_18);
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd0_);
    _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01fc3b18;
    local_60 = &DAT_0257cd48;
    _objc_copyWeak(auStack_50,auStack_38);
    uVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rd_N,puVar2,&cf_Rd,
               &local_78,&cf_Sm,0,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_58,0);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

