@interface WCCanvasRedEnvelopComponentAvatarView : UIView
{
    NSString * _senderUserName; // +0x8
    NSString * _senderNickName; // +0x10
    CContact * _senderContact; // +0x18
    MMHeadImageView * _headView; // +0x20
    UILabel * _nameView; // +0x28
    UILabel * _tailView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 senderUserName:(id)arg2 senderNickName:(id)arg3;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)senderContact;
- (id)tailView;
- (id)headView;
- (id)nameView;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (id)senderNickName;
- (void)setSenderNickName:(id)arg1;
- (void)setSenderContact:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void)setNameView:(id)arg1;
- (void)setTailView:(id)arg1;
- (void).cxx_destruct;
@end

