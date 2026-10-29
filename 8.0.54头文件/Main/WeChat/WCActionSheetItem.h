@interface WCActionSheetItem : NSObject
{
    BOOL _bEnable; // +0x8
    BOOL _bCustom; // +0x9
    BOOL _bDestructiveButton; // +0xa
    BOOL _bForbidAdjustFont; // +0xb
    NSString * _title; // +0x10
    UIColor * _titleColor; // +0x18
    double _titleSize; // +0x20
    NSString * _desc; // +0x28
    UIColor * _descColor; // +0x30
    double _descSize; // +0x38
    UIImage * _iconImage; // +0x40
    double _itemHeight; // +0x48
    id _extraInfo; // +0x50
    WCActionSheetItemRedDotInfo * _redDotInfo; // +0x58
    id /* block */ _itemViewConfigAction; // +0x60
    id /* block */ _eventAction; // +0x68
    NSString * _accessibilityLabel; // +0x70
    UIEdgeInsets _titleEdgeInsets; // +0x78
    UIEdgeInsets _imageEdgeInsets; // +0x98
    UIEdgeInsets _contentEdgeInsets; // +0xb8
}
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(double)arg5 descFontColor:(id)arg6 enable:(BOOL)arg7;
- (double)getItemHeight;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (double)titleSize;
- (void)setTitleSize:(double)arg1;
- (UIEdgeInsets)titleEdgeInsets;
- (void)setTitleEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)imageEdgeInsets;
- (void)setImageEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (double)descSize;
- (void)setDescSize:(double)arg1;
- (BOOL)bEnable;
- (void)setBEnable:(BOOL)arg1;
- (BOOL)bCustom;
- (void)setBCustom:(BOOL)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (BOOL)bDestructiveButton;
- (void)setBDestructiveButton:(BOOL)arg1;
- (BOOL)bForbidAdjustFont;
- (void)setBForbidAdjustFont:(BOOL)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)redDotInfo;
- (void)setRedDotInfo:(id)arg1;
- (id /* block */)itemViewConfigAction;
- (void)setItemViewConfigAction:(id /* block */)arg1;
- (id /* block */)eventAction;
- (void)setEventAction:(id /* block */)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (void).cxx_destruct;
@end

