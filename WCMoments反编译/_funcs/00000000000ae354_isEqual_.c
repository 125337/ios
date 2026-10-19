// isEqual: @0xae354

/* Function Stack Size: 0x18 bytes */

bool WCMTOCropViewControllerAspectRatioPreset::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_30;
  if (local_20 == local_30) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    uVar3 = _objc_opt_class(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
    uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
    if ((uVar4 & 1) == 0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);
      uVar5 = _objc_msgSend_size(local_20,local_98);
      uVar3 = in_d1;
      uVar6 = _objc_msgSend_size(local_40,local_98);
      uVar4 = ___CGSizeEqualToSize(uVar5,in_d1,uVar6,uVar3);
      local_8c = 0;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        _objc_msgSend_title(local_20,local_98);
        local_68 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_title(local_40,local_98);
        local_78 = _objc_retainAutoreleasedReturnValue();
        local_8c = _objc_msgSend_isEqualToString_(local_68,local_98);
      }
      local_11 = local_8c & 1;
      if (bVar1) {
        (*(code *)PTR__objc_release_00110458)(local_78);
        (*(code *)PTR__objc_release_00110458)(local_68);
      }
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

