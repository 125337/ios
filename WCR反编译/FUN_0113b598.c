// FUN_0113b598 @ 0113b598

void FUN_0113b598(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong local_30;
  long local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_20 = 1;
  }
  else {
    FUN_00a59890();
    uVar6 = (uint)local_19;
    lVar3 = local_18;
    local_28 = lVar2;
    FUN_01139b54(local_18);
    uVar4 = (ulong)(uVar6 & 1);
    FUN_0113ba60(uVar4,lVar3,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar4;
    _os_unfair_lock_lock(&DAT_028e35c8);
    if (DAT_028e35d0 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = DAT_028e35d0;
      DAT_028e35d0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e35d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,local_18);
    lVar2 = local_28;
    if ((local_28 != 0) &&
       ((DAT_028e35d8 == 0 || (lVar2 = DAT_028e35d8 - local_28, DAT_028e35d8 - local_28 == 0)))) {
      DAT_028e35d8 = local_28;
      lVar2 = local_28;
    }
    _os_unfair_lock_unlock(lVar2,&DAT_028e35c8);
    _objc_storeStrong(&local_30,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

