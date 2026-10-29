@interface GameCenterMsgSourceInfo : NSObject
{
    BOOL _sourceClickable; // +0x8
    NSString * _sourceName; // +0x10
    GameJumpInfo * _sourceJumpInfo; // +0x18
}
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (BOOL)sourceClickable;
- (void)setSourceClickable:(BOOL)arg1;
- (id)sourceJumpInfo;
- (void)setSourceJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

