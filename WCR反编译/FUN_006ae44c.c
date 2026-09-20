// FUN_006ae44c @ 006ae44c

void FUN_006ae44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (DAT_028cbf08 != (code *)0x0) {
    (*DAT_028cbf08)(local_18,local_20,local_28);
  }
  puVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_filteredArray__026a6640,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    if (puVar2 != local_28) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setArray__026a30c0,puVar2);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

