// FUN_015874e4 @ 015874e4

void FUN_015874e4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [52];
  undefined4 local_4c;
  undefined1 auStack_48 [48];
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    if (local_18 == 0) {
      _memset(auStack_48,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_48,local_18,PTR_s_transform_0269e178);
    }
    uVar1 = 0;
    _CGAffineTransformIsIdentity();
    if ((uVar1 & 1) == 0) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      _memcpy(auStack_80,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar2 = local_18;
      _memcpy(auStack_b0,auStack_80,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_b0);
      local_4c = 0;
      goto LAB_01587610;
    }
  }
  local_4c = 1;
LAB_01587610:
  _objc_storeStrong(&local_18,0);
  return;
}

