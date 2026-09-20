// FUN_0017fef4 @ 0017fef4

void FUN_0017fef4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0017fd94();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    local_30 = 1;
  }
  else {
    _objc_getAssociatedObject(uVar1,&DAT_028c8901);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRAddedSectionCache_026ce370;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRAddedSectionCache_026ce370,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setLastValidation__0269fa48);
    }
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

