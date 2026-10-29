@interface MMLiveBubbleButtonComponent : MMUIButton <MMLiveBubbleComponent>
{
    MMLiveBubbleButtonComponentInfo * _info; // +0x8
    MMWebImageView * _webImageView; // +0x10
    NSString * _infoRawJSON; // +0x18
    id <MMLiveBubbleComponentEventHandler> _eventHandler; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithJSONString:(id)arg1;
- (void)applyInfo;
- (void)setEventHandler:(id)arg1;
- (void)onButtonTap;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (id)eventHandler;
- (void).cxx_destruct;
@end
