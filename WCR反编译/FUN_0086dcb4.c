// FUN_0086dcb4 @ 0086dcb4

void FUN_0086dcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_50;
  uint local_48;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  _objc_getAssociatedObject(lVar1,&DAT_028cd8c9);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*DAT_028cd700)(local_18,local_20,local_28);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98);
  if ((lVar1 == 0x16070) &&
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    lVar1 = local_38;
    FUN_0088ca9c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_48 = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

