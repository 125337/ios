// FUN_00393f38 @ 00393f38

void FUN_00393f38(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((((uVar2 & 1) == 0) ||
       (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988),
       (long)uVar2 < 0)) ||
      (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988),
      *(long *)(param_1 + 0x38) <= (long)uVar2)) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210),
     (long)uVar2 < 0)) {
    local_2c = 1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar5,PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8,uVar4,uVar2);
    uVar2 = local_20;
    local_38 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((long)uVar2 < local_38) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = *(undefined **)(param_1 + 0x30);
      local_40 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098,puVar1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_48;
        local_48 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x30),PTR_s_setObject_forKeyedSubscript__0269d248,
                   local_48,local_40);
      }
      puVar3 = local_48;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,uVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

