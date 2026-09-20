// FUN_000d46e4 @ 000d46e4

void FUN_000d46e4(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int local_74;
  uint local_58;
  
  uVar1 = param_1;
  FUN_000d8808();
  local_58 = 1;
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    _objc_getAssociatedObject(param_1,&DAT_028c8372);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = (uint)uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_58 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,&DAT_028c8372,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_74 = param_3;
    if (7 < param_3) {
      local_74 = 8;
    }
    _NSLog(&cf__wcr__chat_member_search_first_pagelogic__plimit__d_>_d);
    (*DAT_028c82e0)(param_1,param_2,local_74);
  }
  else {
    (*DAT_028c82e0)(param_1,param_2,param_3);
  }
  return;
}

