// formattedDuration: @ 015ae944

/* WARNING: Removing unreachable block (ram,0x015aea2c) */
/* WARNING: Removing unreachable block (ram,0x015aea40) */
/* WARNING: Removing unreachable block (ram,0x015aea44) */
/* WARNING: Removing unreachable block (ram,0x015aea4c) */
/* WARNING: Removing unreachable block (ram,0x015aea60) */
/* WARNING: Removing unreachable block (ram,0x015aea64) */
/* WARNING: Removing unreachable block (ram,0x015aea70) */
/* WARNING: Removing unreachable block (ram,0x015aea78) */
/* WARNING: Removing unreachable block (ram,0x015ae978) */
/* WARNING: Removing unreachable block (ram,0x015ae994) */
/* WARNING: Removing unreachable block (ram,0x015ae998) */
/* WARNING: Removing unreachable block (ram,0x015ae9a0) */
/* WARNING: Removing unreachable block (ram,0x015ae9b4) */
/* WARNING: Removing unreachable block (ram,0x015ae9b8) */
/* WARNING: Removing unreachable block (ram,0x015ae9c4) */
/* WARNING: Removing unreachable block (ram,0x015ae9cc) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::formattedDuration_(ID param_1,SEL param_2,double param_3)

{
  long local_50;
  undefined *local_30;
  
  if ((param_3 < 0.5) || (ABS(param_3) == INFINITY)) {
    local_30 = (undefined *)0x0;
  }
  else {
    local_50 = (long)param_3;
    if (local_50 < 1) {
      local_50 = 1;
    }
    local_30 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_50 / 0x3c < 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld__);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf__ld__02ld__);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

