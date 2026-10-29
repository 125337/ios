@interface ModTextStatusDataItem : NSObject
{
    unsigned int _sequence; // +0x8
    unsigned int _privateVersion; // +0xc
    unsigned int _publicVersion; // +0x10
    NSString * _username; // +0x18
    NSString * _textStateId; // +0x20
    NSString * _textStateExtInfo; // +0x28
    double _friendScore; // +0x30
    double _contentScore; // +0x38
    NSString * _privateInfo; // +0x40
    NSString * _publicInfo; // +0x48
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)description;
- (BOOL)isValid;
- (BOOL)isUpdatePacketInfo;
- (id)textState;
- (id)getTextStataInner;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)textStateExtInfo;
- (void)setTextStateExtInfo:(id)arg1;
- (double)friendScore;
- (void)setFriendScore:(double)arg1;
- (double)contentScore;
- (void)setContentScore:(double)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (id)privateInfo;
- (void)setPrivateInfo:(id)arg1;
- (unsigned int)privateVersion;
- (void)setPrivateVersion:(unsigned int)arg1;
- (id)publicInfo;
- (void)setPublicInfo:(id)arg1;
- (unsigned int)publicVersion;
- (void)setPublicVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
