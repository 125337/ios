@interface WCFinderWarningPanelView : MMUIView
{
    RichTextView * _lowBitRateTextView; // +0x8
    RichTextView * _durationRecomTextView; // +0x10
    UIView * _shortTitleView; // +0x18
}
- (id)shortTitleView;
- (id)lowBitRateTextView;
- (id)durationRecomTextView;
- (void)updateFlag:(unsigned long long)arg1 content:(id)arg2;
- (void)showViewAsFlag:(unsigned long long)arg1;
- (void)bindClickBlockToFlag:(unsigned long long)arg1 clickBlock:(id /* block */)arg2;
- (void)layoutAllSubviews;
- (void)setLowBitRateTextView:(id)arg1;
- (void)setDurationRecomTextView:(id)arg1;
- (void)setShortTitleView:(id)arg1;
- (void).cxx_destruct;
@end

