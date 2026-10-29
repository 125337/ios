@interface MMCopyLabel : MMUILabel
{
    UIView<MMCopyLabelDelegate> * _delegate; // +0x8
    UIColor * _highlightedBGColor; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)menuItemHidden:(id)arg1;
- (void)longPressToCopy:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)highlightedBGColor;
- (void)setHighlightedBGColor:(id)arg1;
- (void).cxx_destruct;
@end
