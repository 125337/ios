@interface WCFinderNavTeenagerView : MMBarItemCustomView
{
    double _maxWidth; // +0x8
    UIImageView * _teenagerImageView; // +0x10
    id <WCFinderNavTeenagerViewDelegate> _delegate; // +0x18
    RichTextView * _richTextView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)teenagerImageView;
- (id)richTextView;
- (BOOL)updateTitle:(id)arg1 mode:(unsigned long long)arg2;
- (void)_updateUIStyle:(unsigned long long)arg1;
- (void)updateUIModelStyle:(unsigned long long)arg1;
- (void)layoutAllSubviews;
- (void)onClickAction;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setTeenagerImageView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void).cxx_destruct;
@end
