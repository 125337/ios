// FUN_0156da70 @ 0156da70

void FUN_0156da70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
             PTR_s_presentProfileCardForContact_sou_0269e720,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rbc0R_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

