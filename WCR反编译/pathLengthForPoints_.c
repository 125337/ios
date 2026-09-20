// pathLengthForPoints: @ 016527b8

/* Function Stack Size: 0x18 bytes */

double WCRSuperFloatCropViewController::pathLengthForPoints_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  double dVar2;
  double in_d1;
  double dVar3;
  double dVar4;
  long local_48;
  double local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double local_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0.0;
  local_48 = 1;
  while( true ) {
    lVar1 = local_38;
    dVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (lVar1 <= local_48) break;
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_48 + -1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = dVar2;
    dVar3 = in_d1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    dVar4 = dVar4 - dVar2;
    local_20 = dVar3 - in_d1;
    local_18 = dVar4;
    _hypot(dVar4,local_20);
    local_40 = local_40 + dVar4;
    local_48 = local_48 + 1;
    in_d1 = dVar4;
  }
  _objc_storeStrong(local_48 - lVar1,&local_38,0);
  return local_40;
}

