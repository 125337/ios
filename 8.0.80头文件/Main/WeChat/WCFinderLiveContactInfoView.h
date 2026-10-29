@interface WCFinderLiveContactInfoView : UIView
{
    BOOL _showLiving; // +0x8
    BOOL _showAuthorIcon; // +0x9
    UILabel * _nickNameLabel; // +0x10
    UILabel * _subTitleLabel; // +0x18
    double _titlePaddingHeader; // +0x20
    double _headerSize; // +0x28
    WCFinderLiveHeadImageLivingView * _headLivingView; // +0x30
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x38
    WCFinderContact * _contact; // +0x40
    NSString * _subTitle; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitlePaddingHeader:(double)arg1;
- (void)setHeaderSize:(double)arg1;
- (void)prepareForReuse;
- (void)setShowLiving:(BOOL)arg1;
- (void)updateWithContact:(id)arg1 subTitle:(id)arg2 showAuthorIcon:(BOOL)arg3;
- (void)initViews;
- (void)layoutSubviews;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (BOOL)showLiving;
- (double)titlePaddingHeader;
- (double)headerSize;
- (id)headLivingView;
- (void)setHeadLivingView:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)showAuthorIcon;
- (void)setShowAuthorIcon:(BOOL)arg1;
- (void).cxx_destruct;
@end
