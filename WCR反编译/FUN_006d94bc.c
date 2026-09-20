// FUN_006d94bc @ 006d94bc

void FUN_006d94bc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_124;
  uint local_78;
  char *local_60;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_41 = 0;
  local_78 = 1;
  if (local_28 != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMessageType_0269d0a8);
    local_78 = 1;
    if ((int)uVar1 == 0x31) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = (uint)puVar2 ^ 1;
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_78 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_oWCPayInfoItem_0269d6f0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_hasPrefix__0269d320,
               &cf_wxpay___c2cbizmessagehandler_hongbao_receivehongbao_);
    if ((uVar1 & 1) == 0) {
      local_48 = 1;
    }
    else {
      if (DAT_028cc270 == (char *)0x0) {
        pcVar4 = "MMServiceCenter";
        _objc_getClass();
        DAT_028cc270 = pcVar4;
      }
      pcVar4 = DAT_028cc270;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      if (DAT_028cc278 == (char *)0x0) {
        pcVar5 = "CContactMgr";
        _objc_getClass();
        DAT_028cc278 = pcVar5;
      }
      pcVar5 = DAT_028cc278;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_class_0269cd60);
      pcVar6 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        local_48 = 1;
      }
      else {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_124 = 0;
        if ((uVar3 & 1) != 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsToUsr_0269d090);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_124 = (byte)uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        FUN_006d9b6c(local_28,local_60,local_124 & 1);
        local_48 = 0;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

