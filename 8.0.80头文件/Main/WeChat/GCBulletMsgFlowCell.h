@interface GCBulletMsgFlowCell : UITableViewCell
{
    BOOL _isThinStyle; // +0x8
    ChatroomMsgPackExtend * _msgPack; // +0x10
    id <GCBulletMsgFlowCellDelegate> _delegate; // +0x18
    MMWebImageView * _avatarIcon; // +0x20
    MMUILabel * _msgLabel; // +0x28
}
+ (id)msgContentOfPack:(id)arg1;
+ (double)labelHeightForMsgPack:(id)arg1 withWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setMsgPack:(id)arg1;
- (void)setIsThinStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)msgPack;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isThinStyle;
- (id)avatarIcon;
- (void)setAvatarIcon:(id)arg1;
- (id)msgLabel;
- (void)setMsgLabel:(id)arg1;
- (void).cxx_destruct;
@end
