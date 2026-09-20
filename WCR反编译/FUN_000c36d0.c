// FUN_000c36d0 @ 000c36d0

void FUN_000c36d0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_a8;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = local_18;
  FUN_000c3c38();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  FUN_000c4380();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar1;
  FUN_000c419c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_18;
  local_48 = pcVar1;
  FUN_000c2bc0();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  FUN_000c2a24();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if (((ulong)pcVar1 & 1) == 0) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
             PTR_s_presentProfileCardForContact_sou_0269e720,local_20,local_18,local_28,local_50,
             local_a8);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

