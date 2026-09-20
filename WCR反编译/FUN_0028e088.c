// FUN_0028e088 @ 0028e088

void FUN_0028e088(long param_1)

{
  double dVar1;
  undefined *local_18;
  
  if (param_1 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    dVar1 = (double)NEON_ucvtf(param_1);
    local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (1024.0 <= dVar1) {
      if (1024.0 <= dVar1 / 1024.0) {
        if (1024.0 <= (dVar1 / 1024.0) / 1024.0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fGB
                    );
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fMB
                    );
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fKB);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lluB);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

