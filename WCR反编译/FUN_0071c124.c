// FUN_0071c124 @ 0071c124

void FUN_0071c124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_84;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_0071d758();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_84 = 0;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_84 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_84 & 1) == 0) {
    FUN_0071cee0(local_18,0,&cf_eNNX__W);
  }
  else {
    FUN_0071c37c(local_18,0,local_28,local_30);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

