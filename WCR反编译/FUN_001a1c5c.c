// FUN_001a1c5c @ 001a1c5c

void FUN_001a1c5c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long local_48 [3];
  undefined *local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if ((local_18 == 0) || (param_2 < 0)) {
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,0,
               param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cellForRowAtIndexPath__0269fd40,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar2;
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setSelected__0269fd48,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setHighlighted__0269fd50,0);
      FUN_00195e04(local_48[0]);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_layoutIfNeeded_026ca790);
    }
    local_24 = (uint)(lVar2 == 0);
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

