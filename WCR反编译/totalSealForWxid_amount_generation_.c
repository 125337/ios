// totalSealForWxid:amount:generation: @ 015126c4

/* Function Stack Size: 0x28 bytes */

ID WCRefineSponsorSecureStore::totalSealForWxid_amount_generation_
             (ID param_1,SEL param_2,ID param_3,double param_4,unsigned_long_long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_40;
  unsigned_long_long local_38;
  double local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  lVar1 = local_28;
  local_38 = param_5;
  local_30 = param_4;
  FUN_01510c28(local_28,&cf_WCRefineUserTotalEnc2026);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_________4f__llu___);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar2 = local_40;
  FUN_01511898();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

