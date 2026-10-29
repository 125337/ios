@interface WCNavTitleDropController : NSObject <MMDropableTitleViewDelegate>
{
    MMUIViewController * _attachViewController; // +0x8
    NSString * _title; // +0x10
    UIView * _backgroundView; // +0x18
    UIView * _operateContentView; // +0x20
    BOOL _isShowingItems; // +0x28
    id <WCNavTitleDropControllDelegate> _delegate; // +0x30
    NSArray * _arrItems; // +0x38
    MMDropableTitleView * _titleView; // +0x40
    double _dropViewOriginY; // +0x48
}
- (id)initWithViewController:(id)arg1 title:(id)arg2 dropItems:(id)arg3;
- (void)initTitleView;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)initBackgroundViews;
- (void)initOperateContentView;
- (void)initItemView;
- (void)addTopLineView;
- (id)makeButtonWithItem:(id)arg1 index:(int)arg2;
- (void)showItems;
- (void)dismissView;
- (id)getButtonByIndex:(unsigned int)arg1;
- (void)updateItemSelectedIndex:(unsigned int)arg1;
- (void)onClickDropableTitleView:(id)arg1;
- (void)onTapCancel:(id)arg1;
- (void)onClickOperateItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrItems;
- (BOOL)isShowingItems;
- (id)titleView;
- (double)dropViewOriginY;
- (void)setDropViewOriginY:(double)arg1;
- (void).cxx_destruct;
@end

