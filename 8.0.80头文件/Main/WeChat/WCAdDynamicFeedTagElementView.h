@interface WCAdDynamicFeedTagElementView : UIView
{
    WCAdDynamicFeedElementInfo * _styleInfo; // +0x8
    WCAdTagNode * _nodeInfo; // +0x10
    WCAdURLImageView * _iconView; // +0x18
    MMUILabel * _textView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 styleInfo:(id)arg2 nodeInfo:(id)arg3;
- (void)generateTagElement;
- (void)layoutSubviews;
- (id)iconView;
- (id)textView;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (id)nodeInfo;
- (void)setNodeInfo:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end
