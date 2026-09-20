// FUN_006ae214 @ 006ae214

void FUN_006ae214(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58 [4];
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_29 = param_4;
  if (DAT_028cbf00 != (code *)0x0) {
    (*DAT_028cbf00)(local_18,local_20,local_28,param_4 & 1);
  }
  local_38 = (undefined *)0x0;
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_valueForKey__0269d128,&cf_m_arrFilteredContacts);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_filteredArray__026a6640,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = puVar2;
    if (puVar2 != local_38) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setArray__026a30c0,puVar2);
    }
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

