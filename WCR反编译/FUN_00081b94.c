// FUN_00081b94 @ 00081b94

void FUN_00081b94(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  uint local_38;
  undefined1 local_31;
  long local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  bVar3 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    lVar4 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026df770);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = lVar4 != 0;
    local_31 = uVar1;
    local_30 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  lVar4 = local_18;
  uVar2 = DAT_026df770;
  if (!bVar3) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar4,uVar2,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_initWeak(auStack_40,local_18);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00081de8;
    local_50 = &DAT_02578da0;
    _objc_copyWeak(auStack_48,auStack_40);
    _dispatch_async(puVar5,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  local_38 = (uint)bVar3;
  _objc_storeStrong(&local_18,0);
  return;
}

