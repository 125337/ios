@interface CBTAsstBoardConfirmCardViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    BOOL _isButtonClicked; // +0x9
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    NSString * _allowBtnText; // +0x20
    NSString * _denyBtnText; // +0x28
    NSString * _allowActionKey; // +0x30
    NSString * _denyActionKey; // +0x38
    NSString * _allowTailText; // +0x40
    NSString * _denyTailText; // +0x48
    NSString * _ignoreTailText; // +0x50
    NSDictionary * _cardData; // +0x58
    NSString * _cardId; // +0x60
    NSString * _cardName; // +0x68
    NSString * _tailHintText; // +0x70
}
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (id)attributedSubtitleStringWithColor:(id)arg1;
- (double)subtitleHeightForWidth:(double)arg1;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)isInteractive;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)allowBtnText;
- (void)setAllowBtnText:(id)arg1;
- (id)denyBtnText;
- (void)setDenyBtnText:(id)arg1;
- (id)allowActionKey;
- (void)setAllowActionKey:(id)arg1;
- (id)denyActionKey;
- (void)setDenyActionKey:(id)arg1;
- (id)allowTailText;
- (void)setAllowTailText:(id)arg1;
- (id)denyTailText;
- (void)setDenyTailText:(id)arg1;
- (id)ignoreTailText;
- (void)setIgnoreTailText:(id)arg1;
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
- (id)tailHintText;
- (void)setTailHintText:(id)arg1;
- (void).cxx_destruct;
@end
