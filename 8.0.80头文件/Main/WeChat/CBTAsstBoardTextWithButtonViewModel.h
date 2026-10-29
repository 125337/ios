@interface CBTAsstBoardTextWithButtonViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    BOOL _isButtonClicked; // +0x9
    NSString * _title; // +0x10
    NSString * _content; // +0x18
    NSString * _buttonText; // +0x20
    NSString * _buttonActionKey; // +0x28
    NSDictionary * _cardData; // +0x30
    NSString * _cardId; // +0x38
    NSString * _cardName; // +0x40
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (void)parseCardData;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)isInteractive;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)buttonText;
- (void)setButtonText:(id)arg1;
- (id)buttonActionKey;
- (void)setButtonActionKey:(id)arg1;
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
