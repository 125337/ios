// FUN_007f43c4 @ 007f43c4

void FUN_007f43c4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  ulong local_30;
  uint local_28;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar4 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar4,param_2);
  local_21 = param_3;
  if ((local_18 == 0) || (FUN_007f4368(), ((ulong)puVar4 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    local_30 = 0;
    pcVar5 = &cf_WCRefineToDo_findMainTableView;
    _NSSelectorFromString();
    uVar6 = local_18;
    local_38 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar5);
    if ((uVar6 & 1) != 0) {
      uVar7 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_30;
      local_30 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    uVar6 = local_30;
    puVar8 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar8);
    if ((uVar6 & 1) == 0) {
      local_28 = 1;
    }
    else {
      local_40 = 0;
      uVar6 = local_30;
      FUN_007fa7d0(local_30,&local_40);
      if ((uVar6 & 1) == 0) {
        local_28 = 1;
      }
      else {
        uVar6 = local_18;
        FUN_00801eac();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar6;
        FUN_007fb160(uVar6,local_40);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        local_50 = uVar6;
        if (uVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_section_0269e988);
          bVar1 = false;
          if (-1 < (long)uVar6) {
            uVar6 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_section_0269e988);
            uVar7 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
            bVar1 = false;
            if ((long)uVar6 < (long)uVar7) {
              uVar6 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_row_0269e210);
              bVar1 = false;
              if (-1 < (long)uVar6) {
                uVar6 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_row_0269e210);
                uVar7 = local_30;
                uVar9 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_section_0269e988);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_numberOfRowsInSection__026a2008,uVar9);
                bVar1 = (long)uVar6 < (long)uVar7;
              }
            }
          }
        }
        uVar3 = (uint)uVar6;
        if (bVar1) {
          FUN_007fb9b4();
          bVar2 = (byte)uVar3;
          FUN_007f4cb4();
          FUN_007fba8c(1);
          FUN_007f4d8c(1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_scrollToRowAtIndexPath_atScrollP_0269e788,local_50,2,
                     local_21 & 1);
          FUN_007f4d8c(bVar2 & 1);
          FUN_007fba8c(uVar3 & 1);
        }
        local_28 = (uint)!bVar1;
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

