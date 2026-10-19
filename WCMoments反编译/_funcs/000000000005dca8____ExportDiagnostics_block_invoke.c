// ___ExportDiagnostics_block_invoke @0x5dca8

void ___ExportDiagnostics_block_invoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_f0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _DiagnosticSnapshot();
  local_38 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dataWithJSONObject_options_error_
            (&_OBJC_CLASS___NSJSONSerialization,local_f0,local_38);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_firstObject(uVar2,local_f0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringByAppendingPathComponent_
            (uVar3,local_f0,&cf_WCMoments_loading_diagnostics_json);
  local_48 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_49 = _objc_msgSend_writeToFile_options_error_(local_40,local_f0,local_48,0x40000001,0);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_50 = local_49 & 1;
  local_68 = (*(code *)PTR__objc_retain_00110460)(local_48);
  local_60 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_58 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  _dispatch_async(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

