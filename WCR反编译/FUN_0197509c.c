// FUN_0197509c @ 0197509c

void FUN_0197509c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_1;
  _objc_storeStrong(&local_48);
  lVar1 = local_48;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_54 = 1;
  }
  else {
    local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_28 = *(undefined8 *)(param_1 + 0x20);
    local_30 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    local_20 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c70,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                 *(undefined8 *)PTR__NSObliquenessAttributeName_02578080);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_appendAttributedString__026a6388);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

