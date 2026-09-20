// FUN_010657a8 @ 010657a8

void FUN_010657a8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long local_90;
  long local_68;
  undefined8 local_58;
  long local_40;
  long local_38;
  undefined1 *local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfRanges_0269ef18);
  if (uVar1 < 2) {
    local_90 = 0;
  }
  else {
    local_90 = *(long *)(param_1 + 0x30);
    local_58 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = local_20;
    puVar5 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeAtIndex__0269ef20,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringWithRange__0269d138,uVar2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_JSONObjectFromString__026adcc0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_90;
  if (uVar1 >= 2) {
    (*(code *)PTR__objc_release_02578630)(local_68);
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (local_40 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_fillInstagramResult_fromJSON__026ae100,
               *(undefined8 *)(param_1 + 0x28),local_40);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (lVar4 != 0) {
    *local_30 = 1;
  }
  _objc_storeStrong(lVar4 != 0,&local_40);
  _objc_storeStrong(&local_20,0);
  return;
}

