@interface EnterpriseContactItemView : MMUIView
{
    CEnterpriseContact * _contact; // +0x8
    MMCPLabel * _nickNameLabel; // +0x10
    MMHeadImageView * _headImage; // +0x18
    UIButton * _rightButton; // +0x20
    UILabel * _memberCountLabel; // +0x28
    id <EnterpriseContactItemViewDelegate> delegate; // +0x30
}
+ (double)cellHeight;
- (void)layoutSubviews;
- (void)initView:(id)arg1;
- (void)updateView:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)initNickNameLabel:(id)arg1;
- (void)initMemberCountLabel:(id)arg1;
- (void)updateHeadImageForContact:(id)arg1;
- (void)updateNickNameLabel;
- (void)initGreyRightButton:(id)arg1;
- (CGRect)calcNickNameFrame:(id)arg1;
- (CGRect)calcMemberCountFrame:(id)arg1;
- (CGRect)calcRightButtonFrame:(id)arg1;
- (void)onRightBtnClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
