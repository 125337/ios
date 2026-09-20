// FUN_00455744 @ 00455744

void FUN_00455744(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_20 = param_2;
  FUN_00455950();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  lVar1 = local_20;
  if ((((uVar2 & 1) != 0) && (-1 < local_20)) &&
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440, lVar1 < (long)uVar2)) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_prepareWrapForDisplay__026a3d88);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

