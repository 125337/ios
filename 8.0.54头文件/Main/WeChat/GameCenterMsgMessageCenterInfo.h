@interface GameCenterMsgMessageCenterInfo : NSObject
{
    BOOL _notInMsgCenter; // +0x8
    GameJumpInfo * _msgCardInfo; // +0x10
    GameCenterMsgSender * _msgSender; // +0x18
    NSString * _userActionSubTitle; // +0x20
    NSString * _firstLineContent; // +0x28
    GameCenterMsgSecondLineInfo * _secondLineInfo; // +0x30
    GameCenterMsgContentPic * _contentPicInfo; // +0x38
    GameCenterMsgSourceInfo * _sourceInfo; // +0x40
}
- (BOOL)notInMsgCenter;
- (void)setNotInMsgCenter:(BOOL)arg1;
- (id)msgCardInfo;
- (void)setMsgCardInfo:(id)arg1;
- (id)msgSender;
- (void)setMsgSender:(id)arg1;
- (id)userActionSubTitle;
- (void)setUserActionSubTitle:(id)arg1;
- (id)firstLineContent;
- (void)setFirstLineContent:(id)arg1;
- (id)secondLineInfo;
- (void)setSecondLineInfo:(id)arg1;
- (id)contentPicInfo;
- (void)setContentPicInfo:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (void).cxx_destruct;
@end

