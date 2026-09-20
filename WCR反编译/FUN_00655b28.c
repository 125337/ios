// FUN_00655b28 @ 00655b28

void FUN_00655b28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    lVar1 = local_20;
    FUN_00656104();
    lVar2 = local_20;
    FUN_006561cc();
    lVar3 = local_20;
    FUN_00656294();
    if (lVar1 == 0) {
      if (lVar2 == 0) {
        if (lVar3 == 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_P_p);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar4;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_T_llu__p);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar4;
        }
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_lld);
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar4;
      }
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_L_llu);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar4;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

