@interface WCFinderGuideLinkBubbleView : MMUIView
{
    MMWebImageView * _iconImageView; // +0x8
    RichTextView * _textView; // +0x10
    double _maxWidth; // +0x18
    WCFinderGuideLinkBubbleModel * _model; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 maxWidth:(double)arg2;
- (id)iconImageView;
- (id)textView;
- (void)layoutAllSubviews;
- (void)updateWithModel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
