// FUN_0037d3b4 @ 0037d3b4

/* WARNING: Removing unreachable block (ram,0x0037d6a0) */
/* WARNING: Removing unreachable block (ram,0x0037d680) */

void FUN_0037d3b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    lVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfSections_026a2068);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_sections__ldexpanded___);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineToDoFlashDiagMark(&cf_grouping_reload_begin);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_reloadData_0269e400);
    local_24 = 0;
    lVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_24 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfSections_026a2068);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_sections__ld);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineToDoFlashDiagMark(&cf_grouping_reload_end);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

