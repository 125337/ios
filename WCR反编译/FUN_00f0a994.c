// FUN_00f0a994 @ 00f0a994

void FUN_00f0a994(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = param_1;
  if (((local_30 == 0) && (local_20 == 200)) &&
     (lVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 = local_28, lVar4 != 0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_writeTempBackupData_suggestedNam_026abc58,lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar5,0);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  else {
    bVar2 = local_20 != 0x194;
    if (bVar2) {
      local_68 = *(cfstringStruct **)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_describeHTTPError_status_body__026abba0,local_30,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_68;
    }
    else {
      local_68 = &cf_NzlgYNeN;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_68;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_40);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

