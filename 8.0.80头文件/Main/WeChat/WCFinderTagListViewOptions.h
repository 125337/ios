@interface WCFinderTagListViewOptions : NSObject
{
    BOOL _supportExpand; // +0x8
    BOOL _displayBubble; // +0x9
    long long _limitCount; // +0x10
    long long _maxCharecterCount; // +0x18
    double _titleFontSize; // +0x20
    double _expandButtonLeftLeastPadding; // +0x28
    double _expandButtonRightPadding; // +0x30
    long long _closeStyle; // +0x38
    CGSize _itemPadding; // +0x40
    CGSize _labelStretchSize; // +0x50
    UIEdgeInsets _edgeInsets; // +0x60
}
- (id)init;
- (long long)limitCount;
- (void)setLimitCount:(long long)arg1;
- (long long)maxCharecterCount;
- (void)setMaxCharecterCount:(long long)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (CGSize)itemPadding;
- (void)setItemPadding:(CGSize)arg1;
- (CGSize)labelStretchSize;
- (void)setLabelStretchSize:(CGSize)arg1;
- (double)titleFontSize;
- (void)setTitleFontSize:(double)arg1;
- (BOOL)supportExpand;
- (void)setSupportExpand:(BOOL)arg1;
- (double)expandButtonLeftLeastPadding;
- (void)setExpandButtonLeftLeastPadding:(double)arg1;
- (double)expandButtonRightPadding;
- (void)setExpandButtonRightPadding:(double)arg1;
- (long long)closeStyle;
- (void)setCloseStyle:(long long)arg1;
- (BOOL)displayBubble;
- (void)setDisplayBubble:(BOOL)arg1;
@end
