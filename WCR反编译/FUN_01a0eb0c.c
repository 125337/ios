// FUN_01a0eb0c @ 01a0eb0c

void FUN_01a0eb0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_50;
  uint local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  lVar1 = local_40;
  puVar4 = PTR_WCRefineHelper_026ce000;
  puVar5 = PTR_s_editKeywordEntry__026bb780;
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_summaryForRule__026b5c40,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar5,uVar6,lVar1,uVar3,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInfo__026a17c8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addCell__0269e3f8,local_50);
    _objc_storeStrong(&local_50,0);
  }
  local_44 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

