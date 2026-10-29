@interface MMLiveBubbleTagsTitleComponent : UIView <MMLiveBubbleComponent>
{
    MMUILabel * _label; // +0x8
    NSMutableArray * _iconViews; // +0x10
    MMLiveBubbleTagsTitleComponentInfo * _info; // +0x18
    NSString * _infoRawJSON; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithJSONString:(id)arg1;
- (void)applyInfo;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconViews;
- (void)setIconViews:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (void).cxx_destruct;
@end
