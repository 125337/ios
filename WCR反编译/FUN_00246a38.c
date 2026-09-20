// FUN_00246a38 @ 00246a38

void FUN_00246a38(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  FUN_00244f18();
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  FUN_00244f18(pcVar1,PTR_s_userName_0269f7b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00245428();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

