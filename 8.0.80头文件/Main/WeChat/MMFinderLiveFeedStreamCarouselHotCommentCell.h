@interface MMFinderLiveFeedStreamCarouselHotCommentCell : MMFinderLiveFeedStreamCarouselCell
{
    UIView * _logoCornerView; // +0x18
    RichTextView * _textView; // +0x20
    UILabel * _timeLabel; // +0x28
    double _textFWidth; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)onCellDidTap;
- (void)prepareForReuse;
- (void)reload;
- (void)layoutSubviews;
- (void)layout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)reportWording;
- (unsigned long long)getCarouselCellReportType;
- (void)endExposeAction;
- (void)setTaskId:(id)arg1;
- (id)logoCornerView;
- (void)setLogoCornerView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (double)textFWidth;
- (void)setTextFWidth:(double)arg1;
- (void).cxx_destruct;
@end
