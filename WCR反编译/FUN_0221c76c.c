// FUN_0221c76c @ 0221c76c

void FUN_0221c76c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *local_b8;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = param_8;
  if (param_2 != 0) {
    uVar4 = *param_7;
    uVar2 = param_7[1];
    _swift_retain();
    puVar3 = &DAT_0258efb0;
    _swift_allocObject(&DAT_0258efb0,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_8;
    *(undefined8 *)(puVar3 + 0x18) = uVar4;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    local_b8 = (undefined8 *)0x0;
    if (param_5 != 0 || param_6 != 0) {
      local_b8 = &local_38;
      local_38 = 0;
      local_30 = 0;
      local_28 = param_5;
      local_20 = param_6;
    }
    local_50 = 7;
    local_48 = local_b8;
    local_40 = param_2;
    _swift_task_create(param_4,&local_50,param_8,&DAT_0233c540,puVar3);
    *param_1 = param_4;
    return;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
            ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",0x39,2,
             "_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x221c820);
  (*pcVar1)();
}

