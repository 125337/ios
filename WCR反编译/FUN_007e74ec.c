// FUN_007e74ec @ 007e74ec

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007e74ec(void)

{
  dispatch_queue_t pdVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = DAT_028cce70;
  DAT_028cce70 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = DAT_028cce78;
  DAT_028cce78 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = DAT_028cce80;
  DAT_028cce80 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = DAT_028cce88;
  DAT_028cce88 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pdVar3 = _dispatch_queue_create("com.wcrefine.redeem.queue",(dispatch_queue_attr_t)0x0);
  pdVar1 = DAT_028cce90;
  DAT_028cce90 = pdVar3;
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = DAT_028ccea0;
  DAT_028ccea0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_addObserverForName_object_queue__026ca4b0,&cf_WCRefineClearRedeemCache,0,
             puVar2,&PTR___NSConcreteGlobalBlock_02580100);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  return;
}

