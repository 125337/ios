@interface ExpandableTextView : RichTextView <ILinkEventExt, WCFlexLayoutViewProtocol>
{
    BOOL _isExpand; // +0x98
    id <ExpandableTextViewDelegate> _expandDelegate; // +0xa0
    ExpandableTextViewConfig * _config; // +0xa8
}
- (id)initWithConfig:(id)arg1;
- (void)setFWidth:(double)arg1;
- (void)setContent:(id)arg1;
- (void)setIsExpand:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (CGSize)onFlexLayoutMeasureSize:(CGSize)arg1;
- (BOOL)isExpand;
- (id)expandDelegate;
- (void)setExpandDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

