// FUN_00808e8c @ 00808e8c

byte FUN_00808e8c(void)

{
  undefined *puVar1;
  undefined *local_20;
  byte local_11;
  
  if ((DAT_028ccf99 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isCaptured_026a6dc0);
    local_11 = (byte)puVar1 & 1;
    _objc_storeStrong(&local_20,0);
  }
  return local_11 & 1;
}

