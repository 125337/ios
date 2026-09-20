// FUN_009c5874 @ 009c5874

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_009c5874(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineAIContext_026ceae0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIContext_026ceae0,PTR_s_new_0269d288);
  puVar2 = DAT_028e27e8;
  DAT_028e27e8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e27e8,PTR_s_setMomentIDs__026aae50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e27e8,PTR_s_setMomentTexts__026aae58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

