// FUN_009356e4 @ 009356e4

void FUN_009356e4(void)

{
  if (-1 < DAT_026f4c38) {
    _fsync(DAT_026f4c38);
    _close(DAT_026f4c38);
    DAT_026f4c38 = -1;
  }
  return;
}

