// FUN_0221c648 @ 0221c648

void * FUN_0221c648(void *param_1,void *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __sScPMa();
  lVar4 = *(long *)(lVar1 + -8);
  pvVar2 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar4 + 0x10))(param_2,param_1,lVar1);
    (**(code **)(lVar4 + 0x38))(param_2,0,1,lVar1);
  }
  else {
    puVar3 = &DAT_028c7658;
    FUN_021c77d4(&DAT_028c7658,&DAT_0233be50);
    _memcpy(param_2,param_1,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_2;
}

