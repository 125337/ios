// isGroupSender @ 01137260

/* Function Stack Size: 0x10 bytes */

bool WCRefineRedEnvelopParam::isGroupSender(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

