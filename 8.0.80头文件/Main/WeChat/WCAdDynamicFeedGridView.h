@interface WCAdDynamicFeedGridView : MMUIView
{
    WCAdDynamicFeedElementInfo * _elementInfo; // +0x8
    WCAdvertiseInfo * _adInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    NSMutableArray * _gridElements; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2 adInfo:(id)arg3 dataItem:(id)arg4;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (CGSize)calcGridViewSize;
- (void)generateGridElements;
- (id)gridElements;
- (id)fetchGridElements;
- (id)elementInfo;
- (void)setElementInfo:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setGridElements:(id)arg1;
- (void).cxx_destruct;
@end
