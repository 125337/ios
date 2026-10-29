@interface WCFinderLiveHeadImageLivingView : UIView
{
    BOOL _showLiving; // +0x8
    UIImageView * _liveBorderView; // +0x10
    UILabel * _liveMarkView; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    WCFinderContact * _contact; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setShowLiving:(BOOL)arg1;
- (void)updateWithContact:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (BOOL)showLiving;
- (id)liveBorderView;
- (void)setLiveBorderView:(id)arg1;
- (id)liveMarkView;
- (void)setLiveMarkView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
