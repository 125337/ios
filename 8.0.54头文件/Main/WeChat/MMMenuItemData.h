@interface MMMenuItemData : NSObject
{
    long long _arrowPosition; // +0x8
    double _arrowCenterX; // +0x10
    long long _menuStyle; // +0x18
    UIView * _customHeaderView; // +0x20
    NSArray * _itemRows; // +0x28
    double _screenWidth; // +0x30
    long long _maxCountPerLine; // +0x38
    double _minWidth; // +0x40
    double _menuItemInnerGap; // +0x48
    double _menuItemWidth; // +0x50
    CGPoint _menuOrigin; // +0x58
    CGSize _menuSize; // +0x68
}
- (id)initWithItemRows:(id)arg1 screenWidth:(double)arg2 maxCountPerLine:(long long)arg3 menuStyle:(long long)arg4 customHeaderView:(id)arg5 minWidth:(double)arg6 menuItemInnerGap:(double)arg7 menuItemWidth:(double)arg8;
- (long long)rowCount;
- (id)itemsAtRow:(long long)arg1;
- (long long)menuItemCount;
- (double)caculateMenuItemWidth;
- (BOOL)isPlainTextMenu;
- (void)calculateMenuLayout;
- (CGSize)menuContentSize;
- (CGSize)menuAreaSize;
- (long long)arrowPosition;
- (void)setArrowPosition:(long long)arg1;
- (CGPoint)menuOrigin;
- (void)setMenuOrigin:(CGPoint)arg1;
- (double)arrowCenterX;
- (void)setArrowCenterX:(double)arg1;
- (long long)menuStyle;
- (void)setMenuStyle:(long long)arg1;
- (id)customHeaderView;
- (void)setCustomHeaderView:(id)arg1;
- (id)itemRows;
- (void)setItemRows:(id)arg1;
- (CGSize)menuSize;
- (void)setMenuSize:(CGSize)arg1;
- (double)screenWidth;
- (void)setScreenWidth:(double)arg1;
- (long long)maxCountPerLine;
- (void)setMaxCountPerLine:(long long)arg1;
- (double)minWidth;
- (void)setMinWidth:(double)arg1;
- (double)menuItemInnerGap;
- (void)setMenuItemInnerGap:(double)arg1;
- (double)menuItemWidth;
- (void)setMenuItemWidth:(double)arg1;
- (void).cxx_destruct;
@end

