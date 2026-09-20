// FUN_00348378 @ 00348378

void FUN_00348378(undefined8 param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_20 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_homeAvatarStripRowIndexForUserna_026a24b8,local_18);
    local_30 = puVar2;
    if ((long)puVar2 < 0) {
      local_20 = 1;
    }
    else {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_homeAvatarStripUsernamesForRow__026a24c0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_40 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_78;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_indexOfObject__0269e870,local_18);
      if (puVar2 == (undefined *)0x7fffffffffffffff) {
        local_20 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,puVar2);
        if ((local_19 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_18);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_insertObject_atIndex__0269eac0,local_18,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setHomeAvatarStripUsernames_forR_026a24c8,local_38,local_30);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHomeAvatarStripSortMode__026a24d8,2)
        ;
        FUN_0034945c();
        local_20 = 0;
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

