// precacheThemeWebsites @ 01fc91b8

/* Function Stack Size: 0x10 bytes */

void WebViewController::precacheThemeWebsites(ID param_1,SEL param_2)

{
  undefined *puVar1;
  dispatch_queue_t pdVar2;
  undefined *local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = &cf_https___vip_sutuplus_vip_;
  local_30 = &cf_http___themepro_shop;
  local_28 = &cf_https___auth_w277_com_;
  local_20 = &cf_https___theme_25mao_com_;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  pdVar2 = _dispatch_get_global_queue(-0x8000,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = puVar1;
  _dispatch_async(pdVar2);
  (*(code *)PTR__objc_release_02578630)(pdVar2);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

