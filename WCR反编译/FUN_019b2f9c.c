// FUN_019b2f9c @ 019b2f9c

/* WARNING: Removing unreachable block (ram,0x019b3044) */

void FUN_019b2f9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    local_38 = (undefined *)0x0;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar2 = local_20;
    FUN_01986b9c(local_28,local_20,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
    local_18 = lVar2;
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

