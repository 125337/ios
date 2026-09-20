// FUN_0001e70c @ 0001e70c

void FUN_0001e70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_48 [3];
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_limitedReplyText_maxChars__0269cec8,local_28,puVar2)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf__JRg1Y_);
  }
  else {
    uVar3 = local_18;
    FUN_00012cf0(local_18,local_48[0]);
    if ((uVar3 & 1) == 0) {
      FUN_00020848(local_20,local_48[0]);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,
                 &cf_____kXeQeQFh);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

