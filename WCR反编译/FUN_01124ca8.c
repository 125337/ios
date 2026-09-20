// FUN_01124ca8 @ 01124ca8

byte FUN_01124ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar1 = local_48;
  FUN_01125110(local_48,local_40,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01125110();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_30;
      local_58 = puVar3;
      FUN_0111b06c(local_30,&cf_identifier);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      local_60 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_60);
      }
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_threadIdentifier_026af158);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_58;
      if (uVar2 != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_threadIdentifier_026af158);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_targetContentIdentifier_026af160);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_58;
      if (uVar2 != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_targetContentIdentifier_026af160);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_categoryIdentifier_026af168);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_58;
      if (uVar2 != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_categoryIdentifier_026af168);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      puVar3 = local_58;
      FUN_01125110(local_58,local_40,0);
      local_21 = (byte)puVar3 & 1;
      local_4c = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_21 = 1;
      local_4c = 1;
    }
  }
  else {
    local_21 = 1;
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

