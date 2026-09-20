// FUN_01c227ec @ 01c227ec

void FUN_01c227ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c67b0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if ((uVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_onMomentsForwardOfficialTagSheet_026c1290), (uVar1 & 1) == 0)) {
    if (DAT_028e4638 != (code *)0x0) {
      (*DAT_028e4638)(local_18,local_20,local_28);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_onMomentsForwardOfficialTagSheet_026c1290,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

