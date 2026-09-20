// FUN_0079a468 @ 0079a468

byte FUN_0079a468(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  undefined *local_80 [3];
  int local_64;
  long local_60;
  byte local_51;
  cfstringStruct *local_50 [5];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  if (local_60 == 0) {
    local_51 = 0;
    local_64 = 1;
  }
  else {
    pcVar1 = &cf_ThemeBoxSegmentedView;
    _NSClassFromString();
    pcVar2 = &cf_WCToolGroupsBannerView;
    local_50[0] = pcVar1;
    _NSClassFromString();
    pcVar1 = &cf_MMUnderlineTabsView;
    local_50[1] = pcVar2;
    _NSClassFromString();
    pcVar2 = &cf_WCSegmentedControl;
    local_50[2] = pcVar1;
    _NSClassFromString();
    pcVar1 = &cf_WCRefineTelegramTabStripView;
    local_50[3] = pcVar2;
    _NSClassFromString();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_50[4] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_60;
    local_80[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar3 = local_80[0];
    if (lVar4 != 0) {
      lVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    local_88 = 0;
    do {
      puVar3 = local_80[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_count_0269cfe0);
      if (puVar3 == (undefined *)0x0 || 0x1f < local_88) {
        local_51 = 0;
        local_64 = 1;
        break;
      }
      puVar3 = local_80[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_removeObjectAtIndex__0269d530,0);
      local_88 = local_88 + 1;
      for (local_98 = 0; puVar3 = local_80[0], local_98 < 5; local_98 = local_98 + 1) {
        if ((local_50[local_98] != (cfstringStruct *)0x0) &&
           (puVar3 = local_90,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_90,PTR_s_isKindOfClass__0269cd68,local_50[local_98]),
           ((ulong)puVar3 & 1) != 0)) {
          local_51 = 1;
          local_64 = 1;
          goto LAB_0079a8a4;
        }
      }
      puVar6 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_64 = 0;
LAB_0079a8a4:
      _objc_storeStrong(&local_90,0);
    } while (local_64 == 0);
    _objc_storeStrong(local_80,0);
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_51 & 1;
}

