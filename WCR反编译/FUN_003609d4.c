// FUN_003609d4 @ 003609d4

byte FUN_003609d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_64;
  long local_60;
  undefined *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (undefined *)0x0;
  _objc_storeStrong(&local_58,param_1);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_2);
  lVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_49 = 1;
    local_64 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_58;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_70;
    if (puVar4 != (undefined *)0x0) {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_cellData_026a27b0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_nativeCellDataForSession__026a2810);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_78;
      local_78 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_78;
    local_38 = &cf_m_textForNameLabel;
    local_30 = &cf_textForNameLabel;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
    _objc_retainAutoreleasedReturnValue();
    FUN_003afe84();
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_78;
    local_48 = &cf_m_textForMessageLabel;
    local_40 = &cf_textForMessageLabel;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_003afe84();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    puVar2 = local_70;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    puVar2 = local_70;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_componentsJoinedByString__0269d140,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsString__0269d0b0,local_60);
    local_49 = (byte)puVar2 & 1;
    local_64 = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_49 & 1;
}

