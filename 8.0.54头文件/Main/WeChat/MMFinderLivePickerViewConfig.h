@interface MMFinderLivePickerViewConfig : NSObject
{
    BOOL _blurContentBackground; // +0x8
    NSString * _title; // +0x10
    UIColor * _titleColor; // +0x18
    NSString * _cancelTitle; // +0x20
    UIColor * _cancelTitleColor; // +0x28
    NSString * _confirmTitle; // +0x30
    UIColor * _confirmTitleColor; // +0x38
    UIColor * _contentBackgroundColor; // +0x40
    UIColor * _backgroundColor; // +0x48
    UIColor * _rowHighlightedColor; // +0x50
    double _rowHeight; // +0x58
}
- (id)init;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)cancelTitle;
- (void)setCancelTitle:(id)arg1;
- (id)cancelTitleColor;
- (void)setCancelTitleColor:(id)arg1;
- (id)confirmTitle;
- (void)setConfirmTitle:(id)arg1;
- (id)confirmTitleColor;
- (void)setConfirmTitleColor:(id)arg1;
- (id)contentBackgroundColor;
- (void)setContentBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)blurContentBackground;
- (void)setBlurContentBackground:(BOOL)arg1;
- (id)rowHighlightedColor;
- (void)setRowHighlightedColor:(id)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;
- (void).cxx_destruct;
@end

