@interface MMMultiSelectToolView : WCBottomBar
{
    NSMutableArray * _buttonArray; // +0x8
    UIColor * _itemColor; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setEnable:(BOOL)arg1;
- (void)setItemColor:(id)arg1;
- (void)addButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 accessibility:(id)arg4;
- (void)addForwardButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addFavoriteButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addDeleteButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addMoreButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addDownloadButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)buttonArray;
- (void)setButtonArray:(id)arg1;
- (id)itemColor;
- (void).cxx_destruct;
@end

