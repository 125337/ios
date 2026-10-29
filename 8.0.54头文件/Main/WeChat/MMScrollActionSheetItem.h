@interface MMScrollActionSheetItem : NSObject
{
    BOOL _disable; // +0x8
    BOOL _isIconImgInDarkModeOnly; // +0x9
    BOOL _disableDismissActionOnTapped; // +0xa
    UIImage * _iconImg; // +0x10
    UIImage * _cornerImg; // +0x18
    UIColor * _backgroundColor; // +0x20
    NSString * _originIconUrl; // +0x28
    NSString * _title; // +0x30
    NSString * _itemId; // +0x38
    id _userInfo; // +0x40
    double _alpha; // +0x48
    long long _row; // +0x50
    NSString * _subTitle; // +0x58
    long long _titleMaxLine; // +0x60
    long long _subTitleMaxLine; // +0x68
    NSString * _accessibilityLabelWording; // +0x70
    unsigned long long _redDotType; // +0x78
    id /* block */ _action; // +0x80
}
- (void)setItemType:(int)arg1;
- (int)itemType;
- (void)setOContact:(id)arg1;
- (id)oContact;
- (id)init;
- (id)iconImg;
- (void)setIconImg:(id)arg1;
- (id)cornerImg;
- (void)setCornerImg:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)originIconUrl;
- (void)setOriginIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (BOOL)isIconImgInDarkModeOnly;
- (void)setIsIconImgInDarkModeOnly:(BOOL)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (long long)row;
- (void)setRow:(long long)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (long long)titleMaxLine;
- (void)setTitleMaxLine:(long long)arg1;
- (long long)subTitleMaxLine;
- (void)setSubTitleMaxLine:(long long)arg1;
- (id)accessibilityLabelWording;
- (void)setAccessibilityLabelWording:(id)arg1;
- (unsigned long long)redDotType;
- (void)setRedDotType:(unsigned long long)arg1;
- (BOOL)disableDismissActionOnTapped;
- (void)setDisableDismissActionOnTapped:(BOOL)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

