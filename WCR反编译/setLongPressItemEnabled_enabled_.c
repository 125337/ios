// setLongPressItemEnabled:enabled: @ 010ff240

/* Function Stack Size: 0x1c bytes */

void WCRefinePluginIconCatalog::setLongPressItemEnabled_enabled_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  byte local_29;
  ulong local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  uVar1 = local_28;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_38, _WCRLongPressMenuItemIsCustom(), (uVar1 & 1) != 0)) {
    local_3c = 1;
  }
  else {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_disabledLongPressItemIDSet_026aedd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_50 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_29 & 1) == 0) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_38);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_38);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObject__0269d678,local_38);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyLongPressMenuChanged_026aedf0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

