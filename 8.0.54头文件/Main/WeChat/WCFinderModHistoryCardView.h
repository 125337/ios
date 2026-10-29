@interface WCFinderModHistoryCardView : MMUIView
{
    WCFinderFeedStaticCoverView * _coverView; // +0x8
    RichTextView * _longDescTextView; // +0x10
    RichTextView * _shortDescTextView; // +0x18
    UILabel * _timeLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)coverView;
- (id)longDescTextView;
- (id)shortDescTextView;
- (void)setCoverView:(id)arg1;
- (void)setLongDescTextView:(id)arg1;
- (void)setShortDescTextView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

