// wcr_rankChanged: @ 01dc467c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_rankChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  uStack_28 = _UNK_0233a448;
  local_30 = _DAT_0233a440;
  local_20 = DAT_0233a450;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedSegmentIndex_0269e998);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

