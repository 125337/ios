@interface WCFinderHoriPreviewCardView : MMUIView
{
    id <WCFinderHoriPreviewCardViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    MMUIButton * _editButton; // +0x20
    WCFinderFeedStaticCoverView * _coverView; // +0x28
    SightIconView * _playIconView; // +0x30
    unsigned long long _style; // +0x38
}
+ (id)getTitleTipsByStyle:(unsigned long long)arg1;
+ (id)getDescTipsByStyle:(unsigned long long)arg1;
+ (id)getCoverTitleTipsByStyle:(unsigned long long)arg1;
+ (double)getCoverTargetHeightRatioByStyle:(unsigned long long)arg1;
+ (double)getCoverWidHeightRatioByStyle:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2;
- (id)coverView;
- (id)titleLabel;
- (id)descLabel;
- (id)editButton;
- (id)playIconView;
- (void)updateCoverViewStyle:(unsigned long long)arg1;
- (void)loadFromDataItem:(id)arg1;
- (void)layoutAllSubviews;
- (void)onClickEditBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

