@interface WCFinderClaimPOIHalfScreenViewController : MMUIHalfScreenViewController
{
    UILabel * _titleLabel; // +0x68
    UIImageView * _wechatImageView; // +0x70
    UIImageView * _finderImageView; // +0x78
    UILabel * _wechatLabel; // +0x80
    UILabel * _finderLabel; // +0x88
    MMUIButton * _checkBox; // +0x90
    RichTextView * _protoTextView; // +0x98
    UIButton * _nextButton; // +0xa0
}
- (id)init;
- (void)viewDidLoad;
- (void)initViews;
- (void)tapCheckBox;
- (void)tapNextButton;
- (BOOL)useTransparentNavibar;
- (id)titleLabel;
- (id)wechatImageView;
- (id)finderImageView;
- (id)wechatLabel;
- (id)finderLabel;
- (id)checkBox;
- (id)protoTextView;
- (id)nextButton;
- (void)setTitleLabel:(id)arg1;
- (void)setWechatImageView:(id)arg1;
- (void)setFinderImageView:(id)arg1;
- (void)setWechatLabel:(id)arg1;
- (void)setFinderLabel:(id)arg1;
- (void)setCheckBox:(id)arg1;
- (void)setProtoTextView:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void).cxx_destruct;
@end

