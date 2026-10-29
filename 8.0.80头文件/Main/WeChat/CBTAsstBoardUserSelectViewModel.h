@interface CBTAsstBoardUserSelectViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _useSingleUser; // +0x8
    BOOL _isDataFromNative; // +0x9
    BOOL _isClicked; // +0xa
    BOOL _skipSelectionCheckmark; // +0xb
    NSArray * _usernameList; // +0x10
    NSString * _selectedUsername; // +0x18
    NSString * _cardTitle; // +0x20
    NSString * _moreText; // +0x28
    NSArray * _subTitleList; // +0x30
    WxFunctionCallInput * _callInput; // +0x38
    NSDictionary * _cardData; // +0x40
    NSString * _cardId; // +0x48
    NSString * _cardName; // +0x50
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (void)setUseSingleUser:(BOOL)arg1;
- (void)parseCardData;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)isInteractive;
- (BOOL)shouldDeactivateWhenNewInteractiveViewsAppear;
- (BOOL)shouldShowOpenChatMoreFooter;
- (unsigned long long)visibleOpenChatRowCount;
- (id)openChatMoreDisplayText;
- (id)subTitleAtIndex:(unsigned long long)arg1;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (id)selectedUsername;
- (void)setSelectedUsername:(id)arg1;
- (BOOL)useSingleUser;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg1;
- (BOOL)skipSelectionCheckmark;
- (void)setSkipSelectionCheckmark:(BOOL)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (id)moreText;
- (void)setMoreText:(id)arg1;
- (id)subTitleList;
- (void)setSubTitleList:(id)arg1;
- (id)callInput;
- (void)setCallInput:(id)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardName;
- (void)setCardName:(id)arg1;
- (void).cxx_destruct;
@end
