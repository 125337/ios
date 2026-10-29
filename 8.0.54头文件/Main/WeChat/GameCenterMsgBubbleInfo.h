@interface GameCenterMsgBubbleInfo : NSObject
{
    NSString * _iconUrl; // +0x8
    NSString * _desc; // +0x10
    GameJumpInfo * _bubbleJumpInfo; // +0x18
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)bubbleJumpInfo;
- (void)setBubbleJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

