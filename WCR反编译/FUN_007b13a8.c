// FUN_007b13a8 @ 007b13a8

/* WARNING: Removing unreachable block (ram,0x007b19e0) */

void FUN_007b13a8(undefined8 param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined *local_d8;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined4 local_50;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_30 = param_4;
  local_28 = param_3;
  (*DAT_028ccc38)(param_3,param_4);
  puVar3 = local_28;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_38 = puVar3;
  _objc_getAssociatedObject(local_28,DAT_026f4670);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  FUN_007ac894();
  if (((ulong)puVar4 & 1) == 0) {
    _objc_setAssociatedObject(local_28,DAT_026f4670,0,1);
    FUN_007b64cc(0,local_38,0);
  }
  else {
    FUN_007b5940(local_28);
    if (((local_40 == (undefined *)0x0) ||
        (puVar3 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDragging_0269ddf8),
        ((ulong)puVar3 & 1) != 0)) ||
       (puVar3 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDecelerating_0269e888),
       ((ulong)puVar3 & 1) != 0)) {
      if (local_40 != (undefined *)0x0) {
        _objc_setAssociatedObject(local_28,DAT_026f4670,0,1);
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentOffset_0269dd18);
      FUN_007b64cc(param_2,puVar3,1);
    }
    else {
      if ((DAT_028ccc78 & 1) != 0) {
        local_50 = 1;
        goto LAB_007b1b10;
      }
      DAT_028ccc78 = 1;
      local_51 = 0;
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
      local_d8 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_68 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_d8;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_tries);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,puVar4 + 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_tries);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_28;
      FUN_007b9c94(local_28,local_60);
      puVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentHeight);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      if (puVar5 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
        puVar6 = local_60;
        dVar7 = param_2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentHeight);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = 1.0 <= ABS(param_2 - dVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (((((ulong)puVar3 & 1) != 0) && (bVar2)) || (3 < (long)(puVar4 + 1))) {
        _objc_setAssociatedObject(local_28,DAT_026f4670,0,1);
      }
      else {
        _objc_setAssociatedObject(local_28,DAT_026f4670,local_60,1);
      }
      _objc_storeStrong(&local_60,0);
      local_50 = 0;
      DAT_028ccc78 = 0;
      if ((local_51 & 1) != 0) {
        _objc_exception_rethrow();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x7b19d0);
        (*pcVar1)();
      }
    }
  }
  local_50 = 0;
LAB_007b1b10:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

