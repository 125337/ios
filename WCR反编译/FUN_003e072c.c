// FUN_003e072c @ 003e072c

void FUN_003e072c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_48;
  
  local_48 = 0;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_003e3ed8();
    local_48 = (uint)puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_48 & 1) == 0) {
    (*DAT_028ca338)(param_1,param_2,param_3);
  }
  return;
}

