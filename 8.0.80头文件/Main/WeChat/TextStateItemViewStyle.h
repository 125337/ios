@interface TextStateItemViewStyle : NSObject
{
    BOOL _forceShowWording; // +0x8
    BOOL _enableShowUnreadWording; // +0x9
    UIColor * _unreadTintColor; // +0x10
    UIColor * _readTintColor; // +0x18
    double _fontSize; // +0x20
    UIColor * _unreadTextColor; // +0x28
    UIColor * _readTextColor; // +0x30
    unsigned long long _clickableBgMode; // +0x38
    UIColor * _unreadClickBgColor; // +0x40
    UIColor * _readClickBgColor; // +0x48
    double _wordingFontWeight; // +0x50
    double _strokeLineWidth; // +0x58
    CGSize _iconSize; // +0x60
    UIEdgeInsets _edgeInsetsWithLabel; // +0x70
    UIEdgeInsets _edgeInsetsWithoutLabel; // +0x90
    UIEdgeInsets _unreadTouchInsets; // +0xb0
    UIEdgeInsets _readTouchInsets; // +0xd0
}
+ (id)defaultStyle;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)unreadTintColor;
- (void)setUnreadTintColor:(id)arg1;
- (id)readTintColor;
- (void)setReadTintColor:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)unreadTextColor;
- (void)setUnreadTextColor:(id)arg1;
- (id)readTextColor;
- (void)setReadTextColor:(id)arg1;
- (BOOL)forceShowWording;
- (void)setForceShowWording:(BOOL)arg1;
- (BOOL)enableShowUnreadWording;
- (void)setEnableShowUnreadWording:(BOOL)arg1;
- (unsigned long long)clickableBgMode;
- (void)setClickableBgMode:(unsigned long long)arg1;
- (id)unreadClickBgColor;
- (void)setUnreadClickBgColor:(id)arg1;
- (id)readClickBgColor;
- (void)setReadClickBgColor:(id)arg1;
- (UIEdgeInsets)edgeInsetsWithLabel;
- (void)setEdgeInsetsWithLabel:(UIEdgeInsets)arg1;
- (UIEdgeInsets)edgeInsetsWithoutLabel;
- (void)setEdgeInsetsWithoutLabel:(UIEdgeInsets)arg1;
- (double)wordingFontWeight;
- (void)setWordingFontWeight:(double)arg1;
- (double)strokeLineWidth;
- (void)setStrokeLineWidth:(double)arg1;
- (UIEdgeInsets)unreadTouchInsets;
- (void)setUnreadTouchInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)readTouchInsets;
- (void)setReadTouchInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
