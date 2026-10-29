@interface CBTAsstBoardForwardContext : NSObject
{
    unsigned int _counter; // +0x8
    NSString * _localUsr; // +0x10
    NSString * _aiUsr; // +0x18
    NSString * _aiNickname; // +0x20
    NSString * _aiHeadImgUrl; // +0x28
}
+ (id)contextForCurrentSession;
- (unsigned int)nextLocalID;
- (id)localUsr;
- (void)setLocalUsr:(id)arg1;
- (id)aiUsr;
- (void)setAiUsr:(id)arg1;
- (id)aiNickname;
- (void)setAiNickname:(id)arg1;
- (id)aiHeadImgUrl;
- (void)setAiHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
