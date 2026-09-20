// _CCCrypt @ 0221e4e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCCryptorStatus
_CCCrypt(CCOperation op,CCAlgorithm alg,CCOptions options,void *key,size_t keyLength,void *iv,
        void *dataIn,size_t dataInLength,void *dataOut,size_t dataOutAvailable,size_t *dataOutMoved)

{
                    /* WARNING: Could not recover jumptable at 0x0221e4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CCCrypt_0264c7e8)(op,alg,options);
  return op;
}

