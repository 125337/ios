@interface WCAdDynamicFeedTagView : MMUIView
{
    WCAdDynamicFeedElementInfo * _elementInfo; // +0x8
    WCAdvertiseInfo * _adInfo; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2 adInfo:(id)arg3;
- (void)generateTagElements;
- (void)layoutSubviews;
- (id)elementInfo;
- (void)setElementInfo:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (void).cxx_destruct;
@end
