// FUN_0022614c @ 0022614c

void FUN_0022614c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  local_21 = param_3;
  _objc_getAssociatedObject(local_18,DAT_026dfb30);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  _objc_setAssociatedObject(local_18,DAT_026dfb30,0,1);
  _objc_setAssociatedObject(local_18,DAT_026dfb38,0,1);
  uVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    FUN_0022a3a0(local_18);
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      FUN_0022a3a0(local_18);
      local_40 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        FUN_0022a7fc(local_48,0);
        FUN_0022a3a0(local_18);
        local_40 = 1;
      }
      else if (((local_21 & 1) == 0) && (local_20 != 0)) {
        uVar2 = local_20;
        FUN_0022ae10(local_20,local_48);
        if ((uVar2 & 1) == 0) {
          FUN_0022a7fc(local_48,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__IN4YPOX_1Y_);
          FUN_0022a3a0(local_18);
          local_40 = 1;
        }
        else {
          FUN_0022a7fc(local_48,1);
          puVar3 = PTR_WCRefineHelper_026ce000;
          uVar2 = local_48;
          FUN_0022b864();
          pcVar1 = &cf__IN_4YP__T_u;
          if ((uVar2 & 1) == 0) {
            pcVar1 = &cf__IN4YP__T_u;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,pcVar1);
          FUN_0022a3a0(local_18);
          local_40 = 0;
        }
      }
      else {
        FUN_0022a7fc(local_48,0);
        FUN_0022a3a0(local_18);
        local_40 = 1;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

