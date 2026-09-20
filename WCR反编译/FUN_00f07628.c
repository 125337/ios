// FUN_00f07628 @ 00f07628

/* WARNING: Type propagation algorithm not settling */

void FUN_00f07628(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *local_108;
  cfstringStruct *local_90;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48 [4];
  long local_28;
  
  local_48[2] = 0;
  local_48[3] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_48 + 2,param_3);
  local_48[1] = 0;
  _objc_storeStrong(local_48 + 1,param_4);
  local_48[0] = 0;
  _objc_storeStrong(local_48,param_5);
  local_50 = param_1;
  if (((local_48[3] == 0x195) || (local_48[3] == 0x1f5)) && (local_48[0] == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00f078fc;
    local_68 = &DAT_02582258;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = *(undefined8 *)(param_1 + 0x40);
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_performMethod_url_headers_body_k_026abb38,&cf_POST,uVar5,uVar6,uVar7,1,
               &local_80);
    _objc_storeStrong(&local_60,0);
  }
  else {
    bVar1 = false;
    if ((local_48[0] == 0) && (bVar1 = false, 199 < local_48[3])) {
      bVar1 = local_48[3] < 300;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      if (bVar1 == false) {
        local_108 = *(cfstringStruct **)(param_1 + 0x40);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_108,PTR_s_describeHTTPError_status_body__026abba0,local_48[0],local_48[3],
                   local_48[2]);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_108;
      }
      else {
        local_108 = &cf__YN0R;
      }
      (**(code **)(lVar3 + 0x10))(lVar3,bVar1,local_108);
      if (bVar1 == false) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(local_48 + 2,0);
  return;
}

