// FUN_0111d450 @ 0111d450

bool FUN_0111d450(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_b0;
  ulong local_80;
  byte local_71;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dataUsingEncoding__026a12e8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = local_38;
  local_40 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar3 = local_38;
  if (local_b0 < uVar4) {
    local_b0 = uVar4;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_bytes_026a9630);
  uVar4 = local_40;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_bytes_026a9630);
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  uVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_71 = (byte)uVar5 ^ (byte)uVar6;
  for (local_80 = 0; local_80 < local_b0; local_80 = local_80 + 1) {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (local_80 < uVar5) {
      bVar1 = *(byte *)(uVar3 + local_80);
    }
    else {
      bVar1 = 0;
    }
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (local_80 < uVar5) {
      bVar2 = *(byte *)(uVar4 + local_80);
    }
    else {
      bVar2 = 0;
    }
    local_71 = local_71 | bVar1 ^ bVar2;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_71 == 0;
}

