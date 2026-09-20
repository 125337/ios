// FUN_0061e528 @ 0061e528

void FUN_0061e528(undefined8 param_1)

{
  double dVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double local_c8;
  uint local_a4;
  double local_68;
  long local_60;
  long local_58;
  byte local_49;
  long local_48;
  int local_3c;
  long local_38 [3];
  long local_20;
  long local_18;
  
  dVar1 = DAT_02324200;
  local_18 = 0;
  local_c8 = DAT_02324200;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_titleView_0269ea50);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  if (lVar2 == 0) {
    lVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_0232420f);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = lVar2;
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_invalidate_026ca758);
      _objc_setAssociatedObject(local_18,&DAT_0232420f,0,1);
      _objc_setAssociatedObject(local_18,&DAT_02324210,0,1);
      _objc_setAssociatedObject(local_18,&DAT_02324211,0,1);
      _objc_setAssociatedObject(local_18,&DAT_02324212,0,1);
    }
    local_3c = 1;
    _objc_storeStrong(local_38,0);
  }
  else {
    FUN_0063572c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    if ((lVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0), lVar2 == 0)) {
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_48;
      local_48 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    local_a4 = 0;
    if (local_48 != 0) {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf__eck_W);
      local_a4 = (uint)lVar2;
    }
    local_49 = (byte)local_a4 & 1;
    if ((local_a4 & 1) == 0) {
      lVar2 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_0232420f);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar2;
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_invalidate_026ca758);
        _objc_setAssociatedObject(local_18,&DAT_0232420f,0,1);
        _objc_setAssociatedObject(local_18,&DAT_02324210,0,1);
        _objc_setAssociatedObject(local_18,&DAT_02324211,0,1);
        _objc_setAssociatedObject(local_18,&DAT_02324212,0,1);
      }
      local_3c = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      lVar2 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_02324210);
      _objc_retainAutoreleasedReturnValue();
      local_60 = lVar2;
      if (lVar2 == 0) {
        local_c8 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_doubleValue_026ca608);
      }
      lVar2 = local_18;
      local_68 = local_c8 + DAT_02323c88;
      if (dVar1 < local_68) {
        local_68 = local_68 - dVar1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar2,&DAT_02324210,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_60,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

