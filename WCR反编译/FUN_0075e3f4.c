// FUN_0075e3f4 @ 0075e3f4

undefined * FUN_0075e3f4(void)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = _WCRefineTextStyleInputPlaceholder;
  local_48 = _WCRefineTextStyleVoicePlaceholder;
  local_40 = _WCRefineTextStyleSearchPlaceholder;
  local_38 = _WCRefineTextStyleHomeFold;
  local_30 = _WCRefineTextStyleHomeCount;
  local_28 = _WCRefineTextStyleHomeLogin;
  local_20 = _WCRefineTextStyleHomeNoteLine1;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,7);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return puVar1;
}

