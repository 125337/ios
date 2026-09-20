// FUN_014f470c @ 014f470c

void FUN_014f470c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_90;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_4;
  local_2c = param_3;
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_GetAppMsgList_FromID_CreateTime_Limit_;
    _NSSelectorFromString();
    uVar3 = local_20;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40,local_28,local_2c,local_30,200);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_48;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar3 & 1) == 0) {
        local_90 = 0;
      }
      else {
        local_90 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_90;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

