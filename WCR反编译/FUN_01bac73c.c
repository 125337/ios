// FUN_01bac73c @ 01bac73c

ulong FUN_01bac73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_c0;
  ulong local_98;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_30;
  if ((uVar3 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x28) + -1;
      if (lVar1 == 0) {
        uVar4 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_displayTitleForCell__026c03a0,local_28);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_displayTitleForCell__026c03a0,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_localizedStandardCompare__0269e098);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        uVar4 = local_28;
        FUN_01baca54(lVar1);
        uVar3 = local_30;
        FUN_01baca54();
        if ((long)uVar4 < (long)uVar3) {
          local_98 = 0xffffffffffffffff;
        }
        else {
          local_98 = (ulong)((long)uVar3 < (long)uVar4);
        }
        local_48 = local_98;
      }
      if (local_48 == 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_localizedStandardCompare__0269e098);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        local_c0 = -local_48;
      }
      else {
        local_c0 = local_48;
      }
      local_18 = local_c0;
      goto LAB_01baca28;
    }
  }
  local_18 = 0;
LAB_01baca28:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

