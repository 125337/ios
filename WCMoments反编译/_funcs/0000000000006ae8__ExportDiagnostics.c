// _ExportDiagnostics @0x6ae8

void _ExportDiagnostics(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  _Trace(&cf_diagnostics_export,PTR____NSDictionary0__struct_00110720);
  _TraceQueue();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_30 = (*(code *)PTR__objc_retain_00110460)(local_18);
  local_28 = (*(code *)PTR__objc_retain_00110460)(local_20);
  _dispatch_async(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

