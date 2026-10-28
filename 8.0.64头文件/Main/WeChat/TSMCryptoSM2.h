@interface TSMCryptoSM2 : NSObject
{
    void * _ctx; // +0x8
}
+ (id)keyPEMConvert:(int)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;
- (void)dealloc;
- (id)initWithPubkey:(id)arg1 error:(id *)arg2;
- (id)pubKeyGenerate:(id)arg1 error:(id *)arg2;
- (id)keyPairGenerate:(id *)arg1;
- (id)encrypt:(int)arg1 pubkey:(id)arg2 plain:(id)arg3 error:(id *)arg4;
- (id)decrypt:(int)arg1 prikey:(id)arg2 cipher:(id)arg3 error:(id *)arg4;
- (id)sign:(int)arg1 pubkey:(id)arg2 prikey:(id)arg3 msg:(id)arg4 uid:(id)arg5 error:(id *)arg6;
- (BOOL)verify:(int)arg1 pubkey:(id)arg2 msg:(id)arg3 uid:(id)arg4 sig:(id)arg5 error:(id *)arg6;
- (id)calcSharedKey:(id)arg1 pubkeyA:(id)arg2 tempPrikeyA:(id)arg3 tempPubkeyA:(id)arg4 pubkeyB:(id)arg5 tempPubkeyB:(id)arg6 idA:(id)arg7 idB:(id)arg8 sharedKeylen:(unsigned long long)arg9 AisInitiator:(int)arg10 error:(id *)arg11;
@end
