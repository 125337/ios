@interface GameJumpInfo : NSObject
{
    NSString * _jumpId; // +0x8
    long long _jumpType; // +0x10
    NSString * _jumpUrl; // +0x18
    HalfScreen * _halfScreen; // +0x20
}
- (id)getXmlSectionString;
- (id)jumpId;
- (void)setJumpId:(id)arg1;
- (long long)jumpType;
- (void)setJumpType:(long long)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (id)halfScreen;
- (void)setHalfScreen:(id)arg1;
- (void).cxx_destruct;
@end

