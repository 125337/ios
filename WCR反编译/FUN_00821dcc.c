// FUN_00821dcc @ 00821dcc

ulong FUN_00821dcc(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = DAT_028ccfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccfc8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return uVar2 & 0xffffffff;
}

