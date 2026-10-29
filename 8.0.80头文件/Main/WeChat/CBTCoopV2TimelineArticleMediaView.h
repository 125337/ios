@interface CBTCoopV2TimelineArticleMediaView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    double _contentWidth; // +0x10
    UIView * _thumbView; // +0x18
    UILabel * _titleLabel; // +0x20
}
+ (double)renderedHeightForDataItem:(id)arg1 contentWidth:(double)arg2;
- (id)initWithDataItem:(id)arg1 contentWidth:(double)arg2;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)noteShareDefaultImage;
- (BOOL)isMiniProgramContentType;
- (id)miniProgramDefaultImage;
- (id)articleTitleText;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
