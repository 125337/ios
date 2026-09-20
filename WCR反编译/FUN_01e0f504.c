// FUN_01e0f504 @ 01e0f504

void FUN_01e0f504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_dequeueReusableCellWithIdentifie_026a2808,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSelectionStyle__0269e5f8,3);
    puVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

