// FUN_000294a4 @ 000294a4

void FUN_000294a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *local_b0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  cfstringStruct *local_58 [3];
  long local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_hideStickyStatus_0269d4b8)
  ;
  lVar1 = local_30;
  if (local_30 == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_b0 = &cf_ub1Y_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_b0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ub1Y_
               ,local_58[0],&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_A);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_sendMsg_toContactUsrName__0269d3f0,puVar4,
               *(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_5c = 1;
    _objc_storeStrong(local_58,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00029cac;
    local_70 = &DAT_025790c0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar5;
    FUN_000297dc(lVar1,uVar6,&local_88);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

