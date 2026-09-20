// FUN_00815824 @ 00815824

void FUN_00815824(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  ulong local_38 [3];
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_2 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar2,&DAT_028cd1dc,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd0e0);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  _objc_getAssociatedObject(uVar2,&DAT_028cd1df);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38[0];
  local_40 = uVar2;
  _objc_getAssociatedObject(local_38[0],&DAT_028cd1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((uVar2 & 1) == 0) {
    if ((local_19 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pause_0269f2d8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_play_0269f2b0);
    }
  }
  uVar2 = local_38[0];
  _objc_getAssociatedObject(local_38[0],&DAT_028cd1d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38[0];
  local_48 = uVar2;
  _objc_getAssociatedObject(local_38[0],&DAT_028cd1d9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((uVar2 & 1) == 0) {
    if ((local_19 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pause_0269f2d8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_play_0269f2b0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_18,0);
  return;
}

