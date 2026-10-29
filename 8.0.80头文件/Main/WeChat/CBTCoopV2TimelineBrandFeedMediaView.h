@interface CBTCoopV2TimelineBrandFeedMediaView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    WCImageView * _coverImageView; // +0x10
    UILabel * _titleLabel; // +0x18
}
+ (double)titleLineHeightForFont:(id)arg1;
+ (id)titleTextForDataItem:(id)arg1;
+ (double)titleHeightForDataItem:(id)arg1;
+ (BOOL)shouldUseSingleLineTitleForDataItem:(id)arg1;
+ (double)renderedHeightForDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)createCoverView;
- (id)coverMediaItem;
- (id)titleText;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
