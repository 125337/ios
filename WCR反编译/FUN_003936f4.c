// FUN_003936f4 @ 003936f4

void FUN_003936f4(long param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  byte local_29;
  ulong local_28;
  long local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
  local_38 = param_1;
  local_29 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_18 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR_WCRGroupingNativeRowRecord_026ce5c0;
      _objc_alloc_init();
      puVar3 = local_48;
      local_48 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                 local_48,local_28);
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    }
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_didLoadSession_026a2c28);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDidLoadSession__026a2c30,1);
      if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980,local_28);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setRawSession__026a2c38);
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rawSession_026a2c40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_nativeSessionFromObject__026a2c00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSession__0269d2e0);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar3 == (undefined *)0x0) || (bVar1 = 0, (local_29 & 1) != 0)) {
      puVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_didLoadCellData_026a2c48);
      bVar1 = 0;
      if (((ulong)puVar4 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 0x51);
      }
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((bVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDidLoadCellData__026a2c50,1);
      lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_wcrGrouping_logicGetCellDataAtIn_026a2988,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCellData__026a2818);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 == (undefined *)0x0) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cellData_026a27b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_nativeSessionFromObject__026a2c00);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSession__0269d2e0);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    puVar3 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

