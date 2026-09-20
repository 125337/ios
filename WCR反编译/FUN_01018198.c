// FUN_01018198 @ 01018198

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01018198(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSHTTPCookieStorage_026ce7f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPCookieStorage_026ce7f8,PTR_s_new_0269d288);
  puVar1 = DAT_028e3190;
  DAT_028e3190 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3190,PTR_s_setCookieAcceptPolicy__026adc20,0);
  return;
}

