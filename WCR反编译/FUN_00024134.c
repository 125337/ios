// FUN_00024134 @ 00024134

void FUN_00024134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_f8;
  bool local_81;
  cfstringStruct *local_80;
  undefined8 local_78;
  byte local_69;
  undefined *local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_polish);
  if ((uVar2 & 1) != 0) {
    FUN_0002468c(local_38,local_40,local_48);
    local_58 = 1;
    goto LAB_00024584;
  }
  lVar3 = local_38;
  FUN_00025118(local_38,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ__ueW_b_WSNTRNc);
    local_58 = 1;
  }
  else {
    puVar4 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_image);
    local_69 = (byte)uVar2;
    if ((uVar2 & 1) == 0) {
LAB_00024384:
      if ((local_69 & 1) == 0) {
        puVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isVideoProviderConfigured_0269d390);
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                     &cf_HQ_W_jW_N__b_jWMn_);
          local_58 = 1;
          goto LAB_00024564;
        }
      }
      uVar5 = local_30;
      lVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
        local_f8 = &cf___;
      }
      else {
        local_f8 = &cf_space_s_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_space_s_,PTR_s_stringByAppendingString__0269d398,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_f8;
      }
      local_81 = lVar3 != 0;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByAppendingString__0269d398,local_f8);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar5;
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      pcVar1 = &cf_ck_WubVGr_;
      if ((local_69 & 1) == 0) {
        pcVar1 = &cf_ck_Wub_;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      FUN_00025320(local_40,local_78,local_69 & 1,(local_69 ^ 1) & 1);
      _objc_storeStrong(&local_78,0);
      local_58 = 0;
    }
    else {
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isImageProviderConfigured_0269d388);
      if (((ulong)puVar4 & 1) != 0) goto LAB_00024384;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W_jW_N__beuVMn_)
      ;
      local_58 = 1;
    }
LAB_00024564:
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60,0);
LAB_00024584:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

