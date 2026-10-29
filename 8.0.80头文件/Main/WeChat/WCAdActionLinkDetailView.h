@interface WCAdActionLinkDetailView : MMUIView
{
    id <WCAdActionLinkDetailViewDelegate> _delegate; // +0x8
    WCDataItem * _dataItem; // +0x10
    MMUIButton * _detailBtn; // +0x18
    WCTagsView * _weAppSpecialTagIcon; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2;
- (void)generateSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updateDetailViewWithDataItem:(id)arg1;
- (id)detailBtn;
- (void)onDetailButtonClicked;
- (id)weAppSpecialTagIcon;
- (void)updateWeAppSpecialTagIcon;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setDetailBtn:(id)arg1;
- (void)setWeAppSpecialTagIcon:(id)arg1;
- (void).cxx_destruct;
@end
