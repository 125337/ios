@interface MMLiveScrollActionSheetItemView : MMUIView
{
    id <MMLiveScrollActionSheetItemViewDelegate> _delegate; // +0x8
    MMLiveScrollActionSheetItem * _item; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapd;
- (void)reloadData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
