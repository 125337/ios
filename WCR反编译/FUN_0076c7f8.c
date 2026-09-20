// FUN_0076c7f8 @ 0076c7f8

undefined1 FUN_0076c7f8(void)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  undefined1 local_11;
  
  uVar1 = 0;
  dVar3 = 1.7976931348623157e+308;
  FUN_0076c92c();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((DAT_028cc900 <= 0.0) || (8.0 <= dVar3 - DAT_028cc900)) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  return local_11;
}

