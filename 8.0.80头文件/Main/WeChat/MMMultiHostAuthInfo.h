@interface MMMultiHostAuthInfo : NSObject
{
    NSString * _identify; // +0x8
    NSData * _clientSessionKey; // +0x10
    NSData * _serverSessionKey; // +0x18
    NSData * _serverId; // +0x20
    NSDictionary * _hostToAlgoDictionary; // +0x28
}
- (id)initWithIdentify:(id)arg1;
- (BOOL)hasSessionKey;
- (BOOL)isValid;
- (BOOL)hasOtherAlgo;
- (void)updateWithHostAlgoList:(id)arg1;
- (id)authInfoForHost:(id)arg1;
- (void)updatePayLoginBusinessData:(id)arg1;
- (id)identify;
- (void)setIdentify:(id)arg1;
- (id)clientSessionKey;
- (void)setClientSessionKey:(id)arg1;
- (id)serverSessionKey;
- (void)setServerSessionKey:(id)arg1;
- (id)serverId;
- (void)setServerId:(id)arg1;
- (id)hostToAlgoDictionary;
- (void)setHostToAlgoDictionary:(id)arg1;
- (void).cxx_destruct;
@end
