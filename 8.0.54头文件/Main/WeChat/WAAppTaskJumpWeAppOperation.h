@interface WAAppTaskJumpWeAppOperation : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _fromAppId; // +0x10
    NSString * _toAppId; // +0x18
    unsigned long long _jumpScene; // +0x20
}
- (id)description;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (id)toAppId;
- (void)setToAppId:(id)arg1;
- (unsigned long long)jumpScene;
- (void)setJumpScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

