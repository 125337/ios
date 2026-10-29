@interface WCFinderTagListViewLayout : NSObject
{
    BOOL _isExpand; // +0x8
    BOOL _dirty; // +0x9
    WCFinderTagListViewOptions * _options; // +0x10
    double _width; // +0x18
    NSMutableArray * _layoutItems; // +0x20
    long long _oldExpandBtnStyle; // +0x28
    NSValue * _expandBtnSizeValue; // +0x30
    CGRect _expandBtnFrame; // +0x38
}
+ (id)displayTitle:(id)arg1 withLimitCharCount:(long long)arg2;
- (id)init;
- (void)setItems:(id)arg1;
- (CGSize)calculateTextSize:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)setIsExpand:(BOOL)arg1;
- (void)markDirty;
- (void)setOptions:(id)arg1;
- (id)items;
- (void)doLayout;
- (double)height;
- (void)enumerateLayout:(id /* block */)arg1;
- (void)setOldExpandBtnStyle:(long long)arg1;
- (void)updateCloseBtnSize;
- (CGSize)expandBtnSize;
- (id)options;
- (double)width;
- (BOOL)isExpand;
- (id)layoutItems;
- (void)setLayoutItems:(id)arg1;
- (CGRect)expandBtnFrame;
- (void)setExpandBtnFrame:(CGRect)arg1;
- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (long long)oldExpandBtnStyle;
- (id)expandBtnSizeValue;
- (void)setExpandBtnSizeValue:(id)arg1;
- (void).cxx_destruct;
@end

