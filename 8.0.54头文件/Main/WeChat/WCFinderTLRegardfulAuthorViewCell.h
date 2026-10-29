@interface WCFinderTLRegardfulAuthorViewCell : MMUIButton
{
    WCFinderTLRegardfulAuthorCellViewModel * _viewModel; // +0x8
    id /* block */ _exposeCallback; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    UIView * _redDotView; // +0x28
    UIView * _avatarViewCircle; // +0x30
    UILabel * _avatarTextTipsLabel; // +0x38
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)clickActionReport;
- (unsigned long long)entranceRdStatus;
- (void)setUpUI;
- (void)updateWithViewModel:(id)arg1;
- (void)updateRedDotViewAndLiveStatus;
- (void)dealloc;
- (void)layoutSubviews;
- (void)showLiveView:(BOOL)arg1;
- (id)genAvatarCircleWithCircleSize:(CGSize)arg1;
- (id)avatarTextTipsLabel;
- (void)setHighlighted:(BOOL)arg1;
- (id)accessibilityLabel;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)exposeCallback;
- (void)setExposeCallback:(id /* block */)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)avatarViewCircle;
- (void)setAvatarViewCircle:(id)arg1;
- (void)setAvatarTextTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

