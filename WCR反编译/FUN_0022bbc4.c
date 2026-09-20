// FUN_0022bbc4 @ 0022bbc4

/* WARNING: Type propagation algorithm not settling */

void FUN_0022bbc4(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  double dVar4;
  undefined8 *******local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined8 *******local_60;
  undefined8 *******local_58;
  undefined8 *******local_50;
  uint local_48;
  undefined8 *******local_38;
  undefined8 *******local_30;
  undefined8 *******local_28;
  
  local_30 = (undefined8 *******)0x0;
  _objc_storeStrong(&local_30,param_3);
  pppppppuVar2 = local_30;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pppppppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pppppppuVar2,PTR_s_length_0269cca0);
  if (pppppppuVar2 == (undefined8 *******)0x0) {
    local_28 = (undefined8 *******)0x0;
    local_48 = 1;
    goto LAB_0022c0d0;
  }
  FUN_0022d610();
  _objc_retainAutoreleasedReturnValue();
  pppppppuVar3 = pppppppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pppppppuVar3;
  (*(code *)PTR__objc_release_02578630)(pppppppuVar2);
  pppppppuVar2 = local_50;
  if (local_50 == (undefined8 *******)0x0) {
    pppppppuVar2 = local_38;
    FUN_0022d684();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pppppppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pppppppuVar2,PTR_s_length_0269cca0);
    if (pppppppuVar2 == (undefined8 *******)0x0) {
      local_28 = (undefined8 *******)0x0;
      local_48 = 1;
    }
    else {
      pppppppuVar2 = (undefined8 *******)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_58
                );
      _objc_retainAutoreleasedReturnValue();
      local_60 = pppppppuVar2;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        local_28 = (undefined8 *******)0x0;
        local_48 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pppppppuVar2,PTR_s_size_026cab00);
        pppppppuVar2 = local_60;
        dVar4 = param_1;
        local_78 = param_1;
        local_70 = param_2;
        local_68 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_size_026cab00);
        local_90 = param_1;
        local_88 = dVar4;
        local_80 = dVar4;
        if (((0.0 < local_68) && (0.0 < dVar4)) && (0.5 < ABS(local_68 - dVar4))) {
          pppppppuVar2 = local_60;
          FUN_0022dbf0();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = pppppppuVar2 != (undefined8 *******)0x0;
          local_98 = pppppppuVar2;
          if (bVar1) {
            FUN_0022ae10(pppppppuVar2,local_38);
            FUN_0022d610();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pppppppuVar2);
            pppppppuVar2 = local_98;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pppppppuVar2;
          }
          local_48 = (uint)bVar1;
          pppppppuVar2 = &local_98;
          _objc_storeStrong(pppppppuVar2,0);
          if (local_48 != 0) goto LAB_0022c070;
        }
        FUN_0022d610();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pppppppuVar2);
        pppppppuVar2 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pppppppuVar2;
        local_48 = 1;
      }
LAB_0022c070:
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pppppppuVar2;
    local_48 = 1;
  }
  _objc_storeStrong(&local_50,0);
LAB_0022c0d0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

