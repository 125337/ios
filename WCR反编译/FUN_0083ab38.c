// FUN_0083ab38 @ 0083ab38

void FUN_0083ab38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  lVar2 = local_30;
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    local_48 = param_1;
    local_40 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    lVar2 = 0;
    uVar4 = local_48;
    uVar5 = local_40;
    _UIGraphicsBeginImageContextWithOptions();
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = lVar2;
    _UIGraphicsEndImageContext();
    lVar2 = local_30;
    if (local_60[0] == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_capInsets_0269f428);
      uVar1 = (uint)lVar2;
      FUN_0083b3f4();
      lVar2 = local_60[0];
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_capInsets_0269f428);
        lVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resizingMode_026a8ca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,uVar5,param_2,param_4,lVar2,PTR_s_resizableImageWithCapInsets_resi_0269f400
                   ,lVar3);
        _objc_retainAutoreleasedReturnValue();
        local_28 = lVar2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        local_28 = lVar2;
      }
    }
    local_34 = 1;
    _objc_storeStrong(local_60,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

