// FUN_005b6160 @ 005b6160

void FUN_005b6160(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_110;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  ulong local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  undefined1 local_39;
  cfstringStruct *local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_39 = SUB81(puVar3,0);
  if (((ulong)puVar3 & 1) == 0) {
    (*DAT_028cb700)(local_28,local_30,local_38);
    local_50 = 1;
  }
  else if ((DAT_028cb78a & 1) == 0) {
    local_d0 = &cf_WCActionSheet;
    _NSClassFromString();
    local_69 = false;
    bVar1 = local_d0 == (cfstringStruct *)0x0;
    local_58 = local_d0;
    if (bVar1) {
      local_d0 = (cfstringStruct *)0x0;
    }
    else {
      _objc_getAssociatedObject(local_d0,&DAT_028cb77d);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d0;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    local_81 = false;
    bVar1 = local_58 == (cfstringStruct *)0x0;
    if (bVar1) {
      local_e8 = (cfstringStruct *)0x0;
    }
    else {
      local_e8 = local_58;
      _objc_getAssociatedObject(local_58,&DAT_028cb77e);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_e8;
    }
    local_81 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_e8;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    pcVar5 = local_38;
    if ((local_58 == (cfstringStruct *)0x0) || (local_60 == (cfstringStruct *)0x0)) {
      (*DAT_028cb700)(local_28,local_30,local_38);
      local_50 = 1;
    }
    else {
      pcVar4 = &cf_WCDataItem;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,pcVar4);
      if (((ulong)pcVar5 & 1) == 0) {
        local_110 = local_60;
      }
      else {
        local_110 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      pcVar5 = local_78;
      local_90 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = pcVar5;
      if (((pcVar5 == (cfstringStruct *)0x0) && (local_90 != (cfstringStruct *)0x0)) &&
         (uVar6 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,
                    PTR_s_getCellViewForDataItem__026a5be8), (uVar6 & 1) != 0)) {
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_getCellViewForDataItem__026a5be8,local_90);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = &cf_WCTimeLineCellView;
        local_a0 = uVar6;
        _NSClassFromString();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,pcVar5);
        if ((uVar6 & 1) != 0) {
          _objc_storeStrong(&local_98,local_a0);
        }
        _objc_storeStrong(&local_a0,0);
      }
      if ((local_90 == (cfstringStruct *)0x0) || (local_98 == (cfstringStruct *)0x0)) {
        (*DAT_028cb700)(local_28,local_30,local_38);
      }
      else {
        uVar6 = local_28;
        FUN_005d3a78(local_28,local_98,local_90,0);
        if ((uVar6 & 1) == 0) {
          (*DAT_028cb700)(local_28,local_30,local_38);
        }
        else {
          _objc_setAssociatedObject(local_58,&DAT_028cb77d,0,1);
          _objc_setAssociatedObject(local_58,&DAT_028cb77e,0,0);
        }
      }
      local_50 = 1;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*DAT_028cb700)(local_28,local_30,local_38);
    local_50 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

