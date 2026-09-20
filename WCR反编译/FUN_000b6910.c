// FUN_000b6910 @ 000b6910

void FUN_000b6910(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_b0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  uint local_54;
  long local_50;
  long local_48 [3];
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar2 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c80bc);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = local_28;
  local_30 = lVar2;
  _objc_getAssociatedObject(local_28,&DAT_028c80ba);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = local_b0;
  if (local_b0 == 0) {
    local_b0 = 0x7fffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_integerValue_026ca750);
  }
  local_50 = local_b0;
  if (((local_b0 == 0x7fffffffffffffff) || (local_b0 < 0)) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     lVar2 <= local_b0)) {
    FUN_000b6cfc(local_28,1);
    local_54 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    lVar2 = local_28;
    if (lVar3 != 0) {
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_000bab20;
      local_78 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_60;
      local_70 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar1;
      FUN_000ba678(lVar2,1,&local_90);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_70,0);
    }
    else {
      FUN_000b6cfc(local_28,1);
    }
    local_54 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

