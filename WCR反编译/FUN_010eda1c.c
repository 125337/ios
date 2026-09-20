// FUN_010eda1c @ 010eda1c

undefined8 FUN_010eda1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  local_30 = param_1;
  FUN_010edd08(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMThemeUtil";
  local_38 = lVar1;
  _objc_getClass();
  pcVar3 = &cf_parseFloatFromValues_;
  _NSSelectorFromString();
  if (((local_38 == 0) || (pcVar2 == (char *)0x0)) ||
     (pcVar4 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar4 & 1) == 0)) {
    local_18 = local_30;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3,local_38);
    local_18 = param_1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

