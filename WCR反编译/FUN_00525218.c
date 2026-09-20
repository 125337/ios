// FUN_00525218 @ 00525218

void FUN_00525218(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  uint local_124;
  uint local_114;
  cfstringStruct *local_100;
  ulong local_88;
  byte local_79;
  undefined *local_78;
  cfstringStruct *local_70;
  ulong local_68;
  uint local_60;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  cfstringStruct *local_28;
  ulong *puVar3;
  
  puVar3 = &local_50;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_0052b2cc();
  if (((uVar2 & 1) == 0) ||
     (puVar4 = PTR_WCRefineMomentsMonitor_026ce718,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemMarkedDeleted__026a4720,local_40
               ), ((ulong)puVar4 & 1) == 0)) {
    (*DAT_028cb160)(local_40,local_48,local_50);
    local_60 = 1;
    goto LAB_00525898;
  }
  local_68 = 0;
  uVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_contentDesc_026a4a10);
  if ((uVar5 & 1) != 0) {
    uVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentDesc_026a4a10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_68;
    local_68 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  uVar5 = local_40;
  _objc_getAssociatedObject(local_40,DAT_026f4338);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (uVar5 == 0) {
    uVar6 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    bVar1 = uVar6 != 0;
  }
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if (bVar1) {
    _objc_setAssociatedObject(local_40,DAT_026f4338,local_68,1);
  }
  pcVar7 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar8;
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  pcVar7 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_100 = &cf__;
  }
  else {
    local_100 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_70 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
  _objc_retainAutoreleasedReturnValue();
  local_114 = 0;
  local_78 = puVar4;
  if (local_50 != 0) {
    uVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_124 = 1;
    if (uVar5 != 0) {
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__);
      local_124 = 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__);
        local_124 = 1;
        if ((uVar5 & 1) == 0) {
          uVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_70);
          local_124 = 1;
          if ((uVar5 & 1) == 0) {
            uVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,local_78);
            local_124 = 1;
            if ((uVar5 & 1) == 0) {
              uVar5 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,local_70);
              local_124 = (uint)uVar5;
            }
          }
        }
      }
    }
    local_114 = local_124;
  }
  local_79 = (byte)local_114 & 1;
  if ((local_114 & 1) == 0) {
LAB_00525848:
    (*DAT_028cb160)(local_40,local_48,local_50);
    local_60 = 0;
  }
  else {
    uVar5 = local_40;
    _objc_getAssociatedObject(local_40,DAT_026f4338);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
    bVar1 = uVar5 != 0;
    if (bVar1) {
      (*DAT_028cb160)(local_40,local_48,local_88);
    }
    local_60 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_88,0);
    if (local_60 == 0) goto LAB_00525848;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
LAB_00525898:
  _objc_storeStrong(&local_50,0);
  return;
}

