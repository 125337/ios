// FUN_00423800 @ 00423800

void FUN_00423800(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  char *pcVar8;
  char *local_48;
  cfstringStruct *local_40;
  char *local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_18 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    FUN_00422aac(local_18,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_18;
    local_30 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_uiMessageType_0269d0a8);
    if (((int)uVar5 == 0x25) &&
       (uVar4 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_fmessage),
       (uVar4 & 1) != 0)) {
      pcVar6 = "CPushContact";
      _objc_getClass();
      pcVar7 = &cf_initWithMsgWrap_;
      local_38 = pcVar6;
      _NSSelectorFromString();
      local_40 = pcVar7;
      if ((local_38 == (char *)0x0) ||
         (pcVar6 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_instancesRespondToSelector__0269da90,pcVar7),
         ((ulong)pcVar6 & 1) == 0)) {
        local_28 = 1;
      }
      else {
        pcVar6 = local_38;
        _objc_alloc();
        pcVar8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,local_40,local_18);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        FUN_00429fd4(local_48,local_18);
        _objc_storeStrong(&local_48,0);
        local_28 = 0;
      }
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

