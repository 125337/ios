// FUN_006b0264 @ 006b0264

void FUN_006b0264(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_a8;
  undefined *local_80 [4];
  ulong local_60;
  bool local_51;
  ulong local_50;
  ulong local_48;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_51 = false;
  bVar1 = DAT_028cbff0 == (code *)0x0;
  local_39 = param_4;
  if (bVar1) {
    local_a8 = local_28;
  }
  else {
    local_a8 = local_28;
    (*DAT_028cbff0)(local_28,local_30,local_38,param_4 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a8;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_a8;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  FUN_006b2c54(local_48);
  local_60 = 0;
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf__rankInfoArray);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_60;
  local_60 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_60;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) != 0) {
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (uVar4 != 0) {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setChampionUsername__026a6848);
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_usernameFromObject__026a6718);
        _objc_retainAutoreleasedReturnValue();
        local_80[0] = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setChampionUsername__026a6848,local_80[0]);
        _objc_storeStrong(local_80,0);
      }
    }
  }
  uVar4 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

