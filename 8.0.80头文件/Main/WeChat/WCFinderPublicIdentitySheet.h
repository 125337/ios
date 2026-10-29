@interface WCFinderPublicIdentitySheet : WCFinderCustomPanelSheet
{
    int _scene; // +0x70
    long long _identityType; // +0x78
    NSString * _feedId; // +0x80
    id /* block */ _confirmBlock; // +0x88
    id /* block */ _cancelActionBlock; // +0x90
    UILabel * _titleLabel; // +0x98
    WCFinderHeadImageView * _headImageView; // +0xa0
    UILabel * _nickNameLabel; // +0xa8
    UILabel * _subtitleLabel; // +0xb0
    UIButton * _cancelBtn; // +0xb8
    UIButton * _confirmBtn; // +0xc0
}
- (id)initWithType:(long long)arg1 feedId:(id)arg2 scene:(int)arg3;
- (id)loadContentView;
- (void)reloadLayout;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (id)titleTextWithType:(long long)arg1;
- (id)confirmButtonTextWithType:(long long)arg1;
- (id)cancelButtonTextWithType:(long long)arg1;
- (long long)identityType;
- (void)setIdentityType:(long long)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)cancelActionBlock;
- (void)setCancelActionBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
