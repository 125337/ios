// FUN_007b6264 @ 007b6264

byte FUN_007b6264(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026f4668);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_20;
  uVar1 = DAT_026f4668;
  local_28 = lVar3;
  if (lVar3 < 8) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_007bd278;
    local_48 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar2;
    _dispatch_async(puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_11 = 1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_11 = 0;
    local_38 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

