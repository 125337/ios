// FUN_001d3ce0 @ 001d3ce0

undefined8 ****** FUN_001d3ce0(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *****local_20;
  undefined8 *****local_18;
  
  ppppppuVar2 = &local_20;
  local_20 = (undefined8 ******)0x0;
  _objc_storeStrong(ppppppuVar2,param_2);
  FUN_001d3fac();
  if ((((ulong)ppppppuVar2 & 1) == 0) || ((undefined8 ******)local_20 == (undefined8 ******)0x0)) {
    FUN_001d4140();
    local_18 = ppppppuVar2;
  }
  else {
    ppppppuVar2 = (undefined8 ******)local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar3 = ppppppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (((ulong)ppppppuVar3 & 1) != 0) {
      ppppppuVar3 = (undefined8 ******)local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = param_1 <= DAT_02323dc8;
      (*(code *)PTR__objc_release_02578630)(ppppppuVar3);
    }
    (*(code *)PTR__objc_release_02578630)(ppppppuVar2);
    if (bVar1) {
      local_18 = (undefined8 ******)0x0;
    }
    else {
      ppppppuVar2 = (undefined8 ******)local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      ppppppuVar3 = ppppppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = ppppppuVar3;
      (*(code *)PTR__objc_release_02578630)(ppppppuVar2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return (undefined8 ******)local_18;
}

