@interface NewLifeThumbUpOperation : NSObject
{
    BOOL _thumbUp; // +0x8
    BOOL _active; // +0x9
    int _scene; // +0xc
    int _enterScene; // +0x10
    NSString * _feedId; // +0x18
    NSString * _encryptId; // +0x20
    NSString * _nonceId; // +0x28
    NSString * _sessionBuffer; // +0x30
    NSNumber * _newlifeType; // +0x38
    id /* block */ _completion; // +0x40
}
- (BOOL)isValid;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOperation:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isThumbUp;
- (void)setThumbUp:(BOOL)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)encryptId;
- (void)setEncryptId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)newlifeType;
- (void)setNewlifeType:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (void).cxx_destruct;
@end

