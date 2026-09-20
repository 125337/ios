// FUN_00f71640 @ 00f71640

void FUN_00f71640(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  double local_90;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (uVar2 <= uVar7) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_lS_b);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = 0;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectAtIndexedSubscript__0269cc78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_wrap);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_contact);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  FUN_00f719d0();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
  }
  lVar8 = *(long *)(param_1 + 0x40);
  if (0 < lVar8) {
    uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    lVar8 = uVar7 - uVar2;
    if (uVar7 < uVar2) {
      lVar8 = 0x408f400000000000;
      local_90 = (double)*(long *)(param_1 + 0x40) / 1000.0;
      goto LAB_00f718e0;
    }
  }
  local_90 = 0.0;
LAB_00f718e0:
  puVar6 = PTR___dispatch_main_q_02578680;
  if (local_90 <= 0.0) {
    _objc_retainAutoreleaseReturnValue(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    dVar5 = _dispatch_time(0,(long)(local_90 * 1000000000.0));
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar5,puVar6,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

