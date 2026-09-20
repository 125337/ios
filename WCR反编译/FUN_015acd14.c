// FUN_015acd14 @ 015acd14

void FUN_015acd14(long param_1,byte param_2,undefined8 param_3)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
  }
  lVar3 = local_28;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar3 != 0) && ((local_19 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_28);
  }
  dVar1 = _dispatch_time(0,350000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_015ace88;
  local_40 = &DAT_0257c428;
  local_38 = *(undefined8 *)(param_1 + 0x30);
  _dispatch_after(dVar1,puVar2,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

