// FUN_00f0a7b4 @ 00f0a7b4

/* WARNING: Type propagation algorithm not settling */

void FUN_00f0a7b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_38 [4];
  long local_18;
  
  local_38[2] = 0;
  local_38[3] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  if (((local_38[0] == 0) && (local_38[3] == 200)) &&
     (lVar3 = local_38[2], (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_length_0269cca0),
     lVar2 = local_38[2], lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_writeTempBackupData_suggestedNam_026abc58,lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4,0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_describeHTTPError_status_body__026abba0,local_38[0],local_38[3],
               local_38[2]);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

