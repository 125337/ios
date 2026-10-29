@interface MMEasterEggNewYearActivityInfo : MMEasterEggBaseActivityInfo
{
    BOOL _useLightStyle; // +0x8
    UIColor * _backgroundColor; // +0x10
    NSString * _backgroundLogoFilePath; // +0x18
    NSString * _bottomMainTitle; // +0x20
    UIColor * _bottomMainTitleColor; // +0x28
    NSString * _bottomSubTitle; // +0x30
    UIColor * _bottomSubTitleColor; // +0x38
    NSString * _brandName; // +0x40
    NSString * _brandLogoFilePath; // +0x48
    NSString * _transitionLoadingFilePath; // +0x50
    UIColor * _buttonBackgroundColor; // +0x58
    UIColor * _buttonForegroundColor; // +0x60
    NSString * _defaultButtonTitle; // +0x68
    NSString * _defaultCoverFilePath; // +0x70
}
+ (id)activityNodeName;
- (Class)activityClass;
- (id)accessibilityLabel;
- (id)initWithActivityNode:(XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (void)tryParseURLStringFromActivityNode:(XmlReaderNode_t *)arg1 directoryPath:(id)arg2;
- (BOOL)isValid;
- (id)description;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundLogoFilePath;
- (void)setBackgroundLogoFilePath:(id)arg1;
- (id)bottomMainTitle;
- (void)setBottomMainTitle:(id)arg1;
- (id)bottomMainTitleColor;
- (void)setBottomMainTitleColor:(id)arg1;
- (id)bottomSubTitle;
- (void)setBottomSubTitle:(id)arg1;
- (id)bottomSubTitleColor;
- (void)setBottomSubTitleColor:(id)arg1;
- (id)brandName;
- (void)setBrandName:(id)arg1;
- (id)brandLogoFilePath;
- (void)setBrandLogoFilePath:(id)arg1;
- (id)transitionLoadingFilePath;
- (void)setTransitionLoadingFilePath:(id)arg1;
- (id)buttonBackgroundColor;
- (void)setButtonBackgroundColor:(id)arg1;
- (id)buttonForegroundColor;
- (void)setButtonForegroundColor:(id)arg1;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)arg1;
- (id)defaultCoverFilePath;
- (void)setDefaultCoverFilePath:(id)arg1;
- (BOOL)useLightStyle;
- (void)setUseLightStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
