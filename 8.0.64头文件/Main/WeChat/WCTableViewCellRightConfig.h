@interface WCTableViewCellRightConfig : NSObject
{
    BOOL _withRedDot; // +0x8
    BOOL _selected; // +0x9
    BOOL _enableCopy; // +0xa
    BOOL _accssoryOn; // +0xb
    BOOL _accssoryDisabled; // +0xc
    unsigned long long _mode; // +0x10
    NSString * _detail; // +0x18
    UIColor * _detailColor; // +0x20
    UIFont * _detailFont; // +0x28
    UIImage * _image; // +0x30
    UIView * _rightView; // +0x38
    NSString * _imageUrl; // +0x40
    NSString * _tipsImageUrl; // +0x48
    long long _numberOfLines; // +0x50
    double _detailMinWidth; // +0x58
    unsigned long long _accessoryType; // +0x60
    UIColor * _accessoryColor; // +0x68
    UIColor * _accessoryDisclosureIndicatorColor; // +0x70
    SEL _accssoryAction; // +0x78
    id _accssoryTarget; // +0x80
    double _customAccessoryRightMargin; // +0x88
    double _customTitleLeft; // +0x90
    id /* block */ _customViewCenter; // +0x98
    id /* block */ _accessoryActionHandler; // +0xa0
}
- (id)init;
- (void)addAccessoryTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)detailColor;
- (void)setDetailColor:(id)arg1;
- (id)detailFont;
- (void)setDetailFont:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)rightView;
- (void)setRightView:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)tipsImageUrl;
- (void)setTipsImageUrl:(id)arg1;
- (BOOL)withRedDot;
- (void)setWithRedDot:(BOOL)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)enableCopy;
- (void)setEnableCopy:(BOOL)arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (double)detailMinWidth;
- (void)setDetailMinWidth:(double)arg1;
- (unsigned long long)accessoryType;
- (void)setAccessoryType:(unsigned long long)arg1;
- (id)accessoryColor;
- (void)setAccessoryColor:(id)arg1;
- (id)accessoryDisclosureIndicatorColor;
- (void)setAccessoryDisclosureIndicatorColor:(id)arg1;
- (SEL)accssoryAction;
- (void)setAccssoryAction:(SEL)arg1;
- (id)accssoryTarget;
- (void)setAccssoryTarget:(id)arg1;
- (BOOL)accssoryOn;
- (void)setAccssoryOn:(BOOL)arg1;
- (BOOL)accssoryDisabled;
- (void)setAccssoryDisabled:(BOOL)arg1;
- (double)customAccessoryRightMargin;
- (void)setCustomAccessoryRightMargin:(double)arg1;
- (double)customTitleLeft;
- (void)setCustomTitleLeft:(double)arg1;
- (id /* block */)customViewCenter;
- (void)setCustomViewCenter:(id /* block */)arg1;
- (id /* block */)accessoryActionHandler;
- (void)setAccessoryActionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
