// FUN_001178a8 @ 001178a8

void FUN_001178a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48 [3];
  long local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_30 = lVar2;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_48[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (uVar3 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_4c = 1;
  }
  else {
    uVar3 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isEqualToString__0269ccc8,local_30);
    if ((uVar3 & 1) == 0) {
      FUN_0011848c();
      puVar1 = DAT_028c8550;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(puVar1);
      puVar4 = DAT_028c8550;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c8550,PTR_s_objectForKeyedSubscript__0269d098,local_18);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_58;
        local_58 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028c8550,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,local_18);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,local_48[0],local_30);
      _objc_storeStrong(&local_58,0);
      _objc_sync_exit(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_4c = 0;
    }
    else {
      local_4c = 1;
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

