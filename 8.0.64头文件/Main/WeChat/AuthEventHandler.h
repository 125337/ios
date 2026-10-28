@interface AuthEventHandler : ProtobufEventHandler
{
    ec_key_st * ecdh_key; // +0x8
    unsigned int ct1; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)changeForMessage:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnDisasterAuthResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnNonDisasterAuthResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
@end
