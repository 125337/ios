@interface MMEasterEggNewYearActivityMaterialInfo : NSObject
{
    unsigned long long _materialType; // +0x8
    UIImage * _defaultBrandLogo; // +0x10
    NSString * _defaultBrandName; // +0x18
    NSString * _title; // +0x20
    NSString * _subtitle; // +0x28
    NSString * _buttonTitle; // +0x30
    NSString * _defaultButtonTitle; // +0x38
    unsigned long long _buttonPageType; // +0x40
    MMEasterEggNewYearActivityPageInfo * _buttonPageInfo; // +0x48
    NSString * _bottomLinkTitle; // +0x50
    unsigned long long _bottomLinkPageType; // +0x58
    MMEasterEggNewYearActivityPageInfo * _bottomLinkPageInfo; // +0x60
    unsigned long long _materialId; // +0x68
    NSString * _moneyAmount; // +0x70
    unsigned long long _creativeType; // +0x78
    NSString * _creativeURL; // +0x80
    NSString * _thumbURL; // +0x88
    UIImage * _defaultCover; // +0x90
}
- (id)initWithMaterial:(id)arg1;
- (BOOL)isValid;
- (unsigned long long)materialType;
- (void)setMaterialType:(unsigned long long)arg1;
- (id)defaultBrandLogo;
- (void)setDefaultBrandLogo:(id)arg1;
- (id)defaultBrandName;
- (void)setDefaultBrandName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)arg1;
- (unsigned long long)buttonPageType;
- (void)setButtonPageType:(unsigned long long)arg1;
- (id)buttonPageInfo;
- (void)setButtonPageInfo:(id)arg1;
- (id)bottomLinkTitle;
- (void)setBottomLinkTitle:(id)arg1;
- (unsigned long long)bottomLinkPageType;
- (void)setBottomLinkPageType:(unsigned long long)arg1;
- (id)bottomLinkPageInfo;
- (void)setBottomLinkPageInfo:(id)arg1;
- (unsigned long long)materialId;
- (void)setMaterialId:(unsigned long long)arg1;
- (id)moneyAmount;
- (void)setMoneyAmount:(id)arg1;
- (unsigned long long)creativeType;
- (void)setCreativeType:(unsigned long long)arg1;
- (id)creativeURL;
- (void)setCreativeURL:(id)arg1;
- (id)thumbURL;
- (void)setThumbURL:(id)arg1;
- (id)defaultCover;
- (void)setDefaultCover:(id)arg1;
- (void).cxx_destruct;
@end

