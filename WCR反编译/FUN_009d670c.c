// FUN_009d670c @ 009d670c

void FUN_009d670c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finished_026a15b0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_secondaryTask_026aae78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = &cf_N_e;
    FUN_009c701c(&cf_N_e,0xfffffffffffffffd);
    _objc_retainAutoreleasedReturnValue();
    FUN_009d255c(uVar4,uVar2,0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  return;
}

