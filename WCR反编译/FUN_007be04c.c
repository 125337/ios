// FUN_007be04c @ 007be04c

/* WARNING: Removing unreachable block (ram,0x007be268) */

void FUN_007be04c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  byte local_41;
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  if (lVar2 == 0) {
    local_30 = 1;
  }
  else {
    lVar2 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_tableReloadInProgress_026a2850);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTableReloadInProgress__026a2858);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_20;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_41 = 0;
    local_70 = PTR___NSConcreteGlobalBlock_02578658;
    local_68 = 0xd0800000;
    local_64 = 0;
    local_60 = FUN_007be420;
    local_58 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_70);
    _objc_storeStrong(&local_50,0);
    local_30 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setTableReloadInProgress__026a2858,local_40);
    if ((local_41 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7be258);
      (*pcVar1)();
    }
    local_30 = 0;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

