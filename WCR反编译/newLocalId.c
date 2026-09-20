// newLocalId @ 01f13bf4

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoStore::newLocalId(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_numberWithLongLong__0269d808,(long)(in_d0 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  _arc4random_uniform(0xffffff);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_____u);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return (ID)puVar3;
}

