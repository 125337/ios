// FUN_019d3960 @ 019d3960

ulong FUN_019d3960(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_68 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_indexOfObject__0269e870,local_68);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_88 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_indexOfObject__0269e870,local_88);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (uVar2 < uVar3) {
    local_98 = 0xffffffffffffffff;
  }
  else {
    local_98 = (ulong)(uVar3 < uVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_98;
}

