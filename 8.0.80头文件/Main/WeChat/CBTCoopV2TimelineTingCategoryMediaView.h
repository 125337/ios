@interface CBTCoopV2TimelineTingCategoryMediaView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    double _contentWidth; // +0x10
    UIView * _coverContainerView; // +0x18
    TingCategoryCoverView * _categoryCoverView; // +0x20
    WCImageView * _fallbackCoverView; // +0x28
    UIImageView * _playView; // +0x30
    UILabel * _titleLabel; // +0x38
}
+ (double)renderedHeightForDataItem:(id)arg1 contentWidth:(double)arg2;
- (id)initWithDataItem:(id)arg1 contentWidth:(double)arg2;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)createFallbackCoverView;
- (id)playIconImage;
- (id)titleText;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (id)coverContainerView;
- (void)setCoverContainerView:(id)arg1;
- (id)categoryCoverView;
- (void)setCategoryCoverView:(id)arg1;
- (id)fallbackCoverView;
- (void)setFallbackCoverView:(id)arg1;
- (id)playView;
- (void)setPlayView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
