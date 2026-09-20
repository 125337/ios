// FUN_00eb0358 @ 00eb0358

byte FUN_00eb0358(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_30;
  byte local_21;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = PTR_s_isRawVideo_0269da68;
  if (local_30 == 0) {
    local_21 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isRawVideo_0269da68);
    uVar3 = local_30;
    if ((uVar1 & 1) == 0) {
      local_20 = &cf_m_uiRawFileLength;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_00eafa58();
      local_21 = uVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar2);
      local_21 = (byte)uVar3 & 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_21 & 1;
}

