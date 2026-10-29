@interface MMAuthInfo : NSObject <NSCopying>
{
    int _encryptAlgo; // +0x8
    NSString * _identify; // +0x10
    NSData * _clientSessionKey; // +0x18
    NSData * _serverSessionKey; // +0x20
    NSData * _serverId; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)identify;
- (void)setIdentify:(id)arg1;
- (int)encryptAlgo;
- (void)setEncryptAlgo:(int)arg1;
- (id)clientSessionKey;
- (void)setClientSessionKey:(id)arg1;
- (id)serverSessionKey;
- (void)setServerSessionKey:(id)arg1;
- (id)serverId;
- (void)setServerId:(id)arg1;
- (void).cxx_destruct;
@end

