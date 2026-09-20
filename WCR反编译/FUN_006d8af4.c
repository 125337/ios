// FUN_006d8af4 @ 006d8af4

void FUN_006d8af4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  char *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar2 = &cf_wxpay___c2cbizmessagehandler_hongbao_receivehongbao_;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_wxpay___c2cbizmessagehandler_hongbao_receivehongbao_,PTR_s_length_0269cca0);
  pcVar3 = local_20;
  if (pcVar2 < pcVar1) {
    pcVar2 = &cf_wxpay___c2cbizmessagehandler_hongbao_receivehongbao_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_wxpay___c2cbizmessagehandler_hongbao_receivehongbao_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_substringFromIndex__0269d120,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar3;
    if (DAT_028cc258 == (char *)0x0) {
      pcVar4 = "WCBizUtil";
      _objc_getClass();
      DAT_028cc258 = pcVar4;
    }
    pcVar4 = DAT_028cc258;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_dictionaryWithDecodedComponets_s_026a69a8,local_38,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_30 = 1;
    local_18 = pcVar4;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

