// FUN_0076c714 @ 0076c714

void FUN_0076c714(void)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = DAT_028cc8b0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc8b0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc8b0,PTR_s_removeAllObjects_0269d508);
  }
  return;
}

