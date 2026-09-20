// FUN_015ec7ec @ 015ec7ec

byte FUN_015ec7ec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_quickChatBallIconPath_026b1318);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_11 = 1;
  if (lVar2 == 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_quickChatBallIconId_026b1320);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

