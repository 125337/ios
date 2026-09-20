// FUN_0014ee0c @ 0014ee0c

void FUN_0014ee0c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  long local_60;
  long local_58 [3];
  long local_40;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_28 == 0) {
    local_34 = 1;
    goto LAB_0014f0f8;
  }
  lVar2 = local_28;
  FUN_0014f3a0();
  lVar3 = local_28;
  local_40 = lVar2;
  _objc_getAssociatedObject(local_28,DAT_026df900);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_58[0] = lVar3;
  _objc_getAssociatedObject(local_28,DAT_026df908);
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar2;
  _CFAbsoluteTimeGetCurrent();
  puVar4 = (undefined *)0x0;
  if ((local_58[0] == 0) || (puVar4 = (undefined *)0x0, local_60 == 0)) {
LAB_0014efc4:
    _WCRChatAttachmentApplyToController(puVar4,local_28);
    lVar2 = local_28;
    uVar1 = DAT_026df900;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    lVar3 = local_28;
    FUN_0014f3a0();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar2 = local_28;
    uVar1 = DAT_026df908;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_34 = 0;
  }
  else {
    lVar2 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_unsignedIntegerValue_026cabb8);
    puVar4 = (undefined *)(lVar2 - local_40);
    if (puVar4 != (undefined *)0x0) goto LAB_0014efc4;
    dVar5 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_doubleValue_026ca608);
    puVar4 = &UNK_02323000;
    if (DAT_02323da8 <= param_1 - dVar5) goto LAB_0014efc4;
    local_34 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
LAB_0014f0f8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

