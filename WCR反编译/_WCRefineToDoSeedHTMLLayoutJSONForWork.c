// _WCRefineToDoSeedHTMLLayoutJSONForWork @ 01e6da94

void _WCRefineToDoSeedHTMLLayoutJSONForWork(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_40;
  uint local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_18;
  FUN_01e6dc70();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    FUN_01e6df84();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  lVar3 = local_20;
  FUN_01e6cf14();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
  if (lVar3 == 0) {
    local_34 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,local_30,3,0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
    puVar1 = local_40;
    if (puVar4 != (undefined *)0x0) {
      lVar3 = local_28;
      FUN_01e6e11c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_writeToFile_atomically__0269f928,lVar3,1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    local_34 = (uint)(puVar4 == (undefined *)0x0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

