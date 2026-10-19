// ___41-[WCMYBIBImageData_defaultDecodeDecision]_block_invoke @0x7a964

byte ___41__WCMYBIBImageData_defaultDecodeDecision__block_invoke
               (double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_70;
  long local_48;
  long local_40;
  double local_38;
  long local_30;
  double local_28;
  double local_20;
  byte local_11;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_1;
  local_20 = param_2;
  local_48 = _objc_loadWeakRetained(param_4 + 0x20);
  if (local_48 == 0) {
    local_11 = 0;
  }
  else {
    dVar4 = local_20 / local_38;
    uVar3 = _CGSizeMake(local_28 / local_38);
    _objc_msgSend_preDecodeDecision(local_48,local_70);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar1 == 0) {
      uVar2 = _objc_msgSend_shouldCompressWithImageSize_scale_
                        (uVar3,dVar4,local_38,local_48,local_70);
      if ((uVar2 & 1) == 0) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      _objc_msgSend_preDecodeDecision(local_48,local_70);
      lVar1 = _objc_retainAutoreleasedReturnValue();
      local_11 = (**(code **)(lVar1 + 0x10))(uVar3,dVar4,local_38,lVar1,local_48);
      local_11 = local_11 & 1;
      (*(code *)PTR__objc_release_00110458)(lVar1);
    }
  }
  _objc_storeStrong(&local_48,0);
  return local_11 & 1;
}

