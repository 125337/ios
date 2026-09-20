// FUN_01500574 @ 01500574

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01500574(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_026ced40;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableCharacterSet_026ced40,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_punctuationCharacterSet_026afee0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_formUnionWithCharacterSet__026afee8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_symbolCharacterSet_026afef0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_formUnionWithCharacterSet__026afee8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addCharactersInString__0269fcb8,&cf__);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  puVar1 = DAT_028e3798;
  DAT_028e3798 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithObjects__0269fb00,&cf_v);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e37a0;
  DAT_028e37a0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_38,0);
  return;
}

