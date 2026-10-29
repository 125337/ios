@interface GameCenterMsgSecondLineInfo : NSObject
{
    NSString * _secondLineContent; // +0x8
    NSString * _secondLineIconUrl; // +0x10
    GameJumpInfo * _secondLineJumpInfo; // +0x18
}
- (id)secondLineContent;
- (void)setSecondLineContent:(id)arg1;
- (id)secondLineIconUrl;
- (void)setSecondLineIconUrl:(id)arg1;
- (id)secondLineJumpInfo;
- (void)setSecondLineJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

