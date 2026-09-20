// _WCRefinePluginHubProbeLog @ 0176cde4

/* WARNING: Type propagation algorithm not settling */

void _WCRefinePluginHubProbeLog(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  char *local_e8;
  undefined *local_80;
  char *local_78;
  char *local_70;
  undefined *local_68;
  long local_50 [2];
  undefined1 auStack_40 [24];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50[1] = 0;
  _objc_storeStrong(local_50 + 1,param_1);
  local_50[0] = 0;
  _objc_storeStrong(local_50,param_2);
  lVar2 = local_50[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf__wcr__plugin_hub_______);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_e8;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_UTF8String_026a2e68);
    if (local_e8 == (char *)0x0) {
      local_e8 = "[wcr][plugin-hub]";
    }
    local_78 = local_e8;
    _NSLog(&cf___);
    puVar3 = PTR____stderrp_02578678;
    _fprintf(*(FILE **)PTR____stderrp_02578678,"%s\n");
    _fflush(*(FILE **)puVar3);
    puVar3 = PTR___os_log_default_025786a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar3;
    _os_log_type_enabled(puVar3,0x10);
    puVar1 = local_80;
    if (((ulong)puVar3 & 1) != 0) {
      FUN_0176d0e4(auStack_40,local_78);
      __os_log_error_impl(0,puVar1,0x10,"%{public}s",auStack_40,0xc);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(local_50 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

