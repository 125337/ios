// FUN_000a148c @ 000a148c

void FUN_000a148c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_000a2b9c();
  if (((uVar1 & 1) != 0) &&
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
     uVar2 == 1)) {
    DAT_028c8069 = 1;
    FUN_000a2cd4(local_28);
  }
  if ((uVar1 & 1) != 0) {
    FUN_000a32f4(local_18,&cf_setShouldReverseTranslation_,1);
  }
  if (DAT_028c8028 != (code *)0x0) {
    (*DAT_028c8028)(local_18,local_20,local_28);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (uVar1 == 2) {
      FUN_000a33bc(0,local_28);
    }
    else {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
      if (((uVar1 == 3) ||
          (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
          uVar1 == 4)) ||
         (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
         uVar1 == 5)) {
        FUN_000a34a0(0,local_28);
        FUN_000a32f4(local_18,&cf_setShouldReverseTranslation_,0);
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
        if (uVar1 == 3) {
          dVar3 = _dispatch_time(0,800000000);
          puVar4 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar3,puVar4,&PTR___NSConcreteGlobalBlock_02579cb0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          DAT_028c8069 = 0;
        }
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

