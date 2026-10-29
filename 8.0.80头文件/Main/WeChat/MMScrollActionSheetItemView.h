@interface MMScrollActionSheetItemView : MMUIView
{
    id <MMScrollActionSheetItemViewDelegate> _delegate; // +0x8
    MMScrollActionSheetItem * _item; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapd;
- (void)reloadData;
- (void)highLight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
