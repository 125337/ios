@interface CBTAsstBoardLocationAuthViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    BOOL _isButtonClicked; // +0x9
    NSString * _content; // +0x10
    NSString * _unconfiguredBtnText; // +0x18
    NSString * _configuredBtnText; // +0x20
    NSString * _allowActionKey; // +0x28
    NSString * _denyActionKey; // +0x30
    NSDictionary * _cardData; // +0x38
    NSString * _cardId; // +0x40
    NSString * _cardName; // +0x48
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)isInteractive;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)content;
- (void)setContent:(id)arg1;
- (id)unconfiguredBtnText;
- (void)setUnconfiguredBtnText:(id)arg1;
- (id)configuredBtnText;
- (void)setConfiguredBtnText:(id)arg1;
- (id)allowActionKey;
- (void)setAllowActionKey:(id)arg1;
- (id)denyActionKey;
- (void)setDenyActionKey:(id)arg1;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardName;
- (void)setCardName:(id)arg1;
- (BOOL)isButtonClicked;
- (void)setIsButtonClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
