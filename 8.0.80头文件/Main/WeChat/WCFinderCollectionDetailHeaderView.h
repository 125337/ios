@interface WCFinderCollectionDetailHeaderView : UIView <UIContentView>
{
    WCFinderCollectionDetailHeaderConfiguration * _appliedConfiguration; // +0x8
    UIImageView * _coverImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _authorLabel; // +0x20
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x28
    UILabel * _feedCountLabel; // +0x30
    UILabel * _updateAtLabel; // +0x38
}
+ (double)cellHeightWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_setupLayout;
- (void)_applyConfiguration:(id)arg1;
- (void)_updateUI;
- (void)_didTapAuthName;
- (BOOL)_isTextOverCover;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)coverImageView;
- (id)titleLabel;
- (id)authInfoIconView;
- (id)authorLabel;
- (id)feedCountLabel;
- (id)updateAtLabel;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setAuthorLabel:(id)arg1;
- (void)setAuthInfoIconView:(id)arg1;
- (void)setFeedCountLabel:(id)arg1;
- (void)setUpdateAtLabel:(id)arg1;
- (void).cxx_destruct;
@end
