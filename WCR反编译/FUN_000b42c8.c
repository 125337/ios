// FUN_000b42c8 @ 000b42c8

bool FUN_000b42c8(void)

{
  double dVar1;
  bool local_11;
  
  if (0.0 < DAT_028c80b0) {
    dVar1 = DAT_028c80b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
    local_11 = 3.0 <= dVar1 - DAT_028c80b0;
  }
  else {
    local_11 = false;
  }
  return local_11;
}

