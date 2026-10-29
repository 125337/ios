@interface WCAdDynamicFeedSeparatorView : UIView
{
    WCAdDynamicFeedElementInfo * _elementInfo; // +0x8
    UIView * _separatorLine; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2;
- (id)separatorLine;
- (void)layoutSubviews;
- (id)elementInfo;
- (void)setElementInfo:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

