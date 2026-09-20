// FUN_008cb7ec @ 008cb7ec

void FUN_008cb7ec(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long local_30;
  uint local_28;
  long local_18;
  long *plVar2;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_008cec60();
  if (((uVar1 & 1) == 0) ||
     (lVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_28 = 1;
  }
  else {
    FUN_008cb618();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackPickerViewController_026cea10,
                 PTR_s_presentFromViewController_chatNa_026a9d10,lVar3,local_18);
    }
    local_28 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

