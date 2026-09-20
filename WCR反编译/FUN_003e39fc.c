// FUN_003e39fc @ 003e39fc

void FUN_003e39fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  code *local_50 [3];
  code *local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  
  local_18 = (code *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (code *)0x0;
  pcVar2 = local_18;
  _object_getClass();
  local_38 = pcVar2;
  while (local_38 != (code *)0x0) {
    pcVar2 = local_38;
    _objc_getAssociatedObject(local_38,&DAT_028ca438);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_50[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar2 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_pointerValue_026a2120),
       local_30 = pcVar2, pcVar2 == (code *)0x0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    _objc_storeStrong(local_50,0);
    if (bVar1) break;
    _class_getSuperclass();
  }
  pcVar2 = local_30;
  if (local_30 != (code *)0x0) {
    pcVar4 = local_18;
    FUN_003e3c74();
    if (((ulong)pcVar4 & 1) == 0) {
      (*pcVar2)(local_18,local_20,local_28);
    }
    else {
      (*pcVar2)(local_18,local_20,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

