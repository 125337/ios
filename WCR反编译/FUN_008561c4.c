// FUN_008561c4 @ 008561c4

void FUN_008561c4(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [52];
  undefined4 local_34;
  double local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_1;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else if (param_1 == 0.0) {
    FUN_0085603c(local_28);
    local_34 = 0;
  }
  else {
    _CGAffineTransformMakeTranslation(auStack_68,0,param_1);
    if (local_28 == 0) {
      _memset(auStack_98,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_98,local_28,PTR_s_transform_0269e178);
    }
    _memcpy(auStack_d8,auStack_68,0x30);
    puVar3 = auStack_98;
    _CGAffineTransformEqualToTransform(puVar3,auStack_d8);
    if (((ulong)puVar3 & 1) == 0) {
      _memcpy(auStack_108,auStack_68,0x30);
      lVar2 = local_28;
      _memcpy(auStack_138,auStack_108,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_138);
    }
    lVar2 = local_28;
    uVar1 = DAT_026f48e8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_34 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

