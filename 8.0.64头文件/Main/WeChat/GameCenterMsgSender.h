@interface GameCenterMsgSender : NSObject
{
    NSString * _msgSenderHeadIconUrl; // +0x8
    NSString * _msgSenderName; // +0x10
    NSString * _msgSenderBadgeIconUrl; // +0x18
    GameJumpInfo * _msgSenderJumpInfo; // +0x20
    NSString * _remark; // +0x28
    GameCenterMsgRemarkInfo * _remarkInfo; // +0x30
}
- (id)msgSenderHeadIconUrl;
- (void)setMsgSenderHeadIconUrl:(id)arg1;
- (id)msgSenderName;
- (void)setMsgSenderName:(id)arg1;
- (id)msgSenderBadgeIconUrl;
- (void)setMsgSenderBadgeIconUrl:(id)arg1;
- (id)msgSenderJumpInfo;
- (void)setMsgSenderJumpInfo:(id)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)remarkInfo;
- (void)setRemarkInfo:(id)arg1;
- (void).cxx_destruct;
@end
