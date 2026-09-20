// FUN_014f4a98 @ 014f4a98

void FUN_014f4a98(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,undefined4 *param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_110;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  byte local_41;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_50 = param_6;
  local_41 = param_5;
  local_40 = param_4;
  local_3c = param_3;
  if ((local_30 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     puVar4 = PTR_s_GetMsgByCreateTime_FromID_FromCr_026afef8, lVar1 == 0)) {
    if (local_50 != (undefined4 *)0x0) {
      *local_50 = 0;
    }
    local_28 = 0;
    local_54 = 1;
  }
  else {
    local_58 = 0;
    local_60 = 0;
    if (((local_41 & 1) != 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,
                  PTR_s_GetMsgByCreateTime_FromID_FromCr_026afef8), (uVar2 & 1) != 0)) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,puVar4,local_38,local_3c,local_40,200,&local_58);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_60;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    puVar4 = PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230;
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,
                  PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230), (uVar2 & 1) != 0)) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar4,local_38,local_3c,200,&local_58);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_60;
    if (local_50 != (undefined4 *)0x0) {
      *local_50 = local_58;
    }
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar2 & 1) == 0) {
      local_110 = 0;
    }
    else {
      local_110 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_110;
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

