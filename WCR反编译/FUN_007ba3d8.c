// FUN_007ba3d8 @ 007ba3d8

void FUN_007ba3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  byte local_81;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  int local_54;
  char *local_50;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar2 = local_28;
  local_30 = param_2;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MainFrameSectionFoldView";
  local_38 = lVar2;
  _objc_getClass();
  local_50 = pcVar3;
  if ((local_38 == 0) || (pcVar3 == (char *)0x0)) {
    local_54 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_68 = 0;
    local_60 = puVar4;
    do {
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined *)0x0) break;
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeLastObject_0269e830);
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,local_50);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
        if (puVar4 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_addObjectsFromArray__0269d540,local_78);
        }
        _objc_storeStrong(&local_78,0);
        local_54 = 0;
      }
      else {
        _objc_storeStrong(&local_68,local_70);
        local_54 = 3;
      }
      _objc_storeStrong(&local_70,0);
    } while (local_54 == 0);
    puVar4 = PTR_s_setIsFolding_foldCount__026a82c0;
    if (local_68 == 0) {
      local_54 = 1;
    }
    else {
      uVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setIsFolding_foldCount__026a82c0)
      ;
      puVar1 = PTR_s_isFolding_026a82c8;
      if ((uVar5 & 1) != 0) {
        local_81 = 1;
        uVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_isFolding_026a82c8);
        if ((uVar5 & 1) != 0) {
          uVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,puVar1);
          local_81 = (byte)uVar5;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_68,puVar4,local_81 & 1,local_30);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setNeedsLayout_0269deb8);
      local_54 = 0;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

