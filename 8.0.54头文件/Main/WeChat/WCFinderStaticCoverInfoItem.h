@interface WCFinderStaticCoverInfoItem : NSObject
{
    BOOL _needRoundCorner; // +0x8
    BOOL _needBlur; // +0x9
    NSString * _text; // +0x10
    UIImage * _icon; // +0x18
    NSURL * _iconUrl; // +0x20
    id /* block */ _iconGenerator; // +0x28
    long long _iconPosition; // +0x30
    double _flexShrink; // +0x38
    UIColor * _textColor; // +0x40
    UIFont * _titleFont; // +0x48
    UIColor * _blurColor; // +0x50
    NSString * _accessibilityLabel; // +0x58
    double _iconMarginRight; // +0x60
    UIView * _customView; // +0x68
    double _flexGrow; // +0x70
    WCFinderDynamicIcon _dynamicIcon; // +0x78
    CGSize _iconSize; // +0x88
}
- (id)init;
- (BOOL)isValied;
- (id)text;
- (void)setText:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (WCFinderDynamicIcon)dynamicIcon;
- (void)setDynamicIcon:(WCFinderDynamicIcon)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id /* block */)iconGenerator;
- (void)setIconGenerator:(id /* block */)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (long long)iconPosition;
- (void)setIconPosition:(long long)arg1;
- (double)flexShrink;
- (void)setFlexShrink:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)blurColor;
- (void)setBlurColor:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (BOOL)needRoundCorner;
- (void)setNeedRoundCorner:(BOOL)arg1;
- (BOOL)needBlur;
- (void)setNeedBlur:(BOOL)arg1;
- (double)iconMarginRight;
- (void)setIconMarginRight:(double)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (double)flexGrow;
- (void)setFlexGrow:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

