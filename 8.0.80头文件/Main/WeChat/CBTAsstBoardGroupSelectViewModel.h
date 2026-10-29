@interface CBTAsstBoardGroupSelectViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    BOOL _isClicked; // +0x9
    NSArray * _groupIdList; // +0x10
    NSArray * _subTitleList; // +0x18
    NSString * _selectedGroupId; // +0x20
    WxFunctionCallInput * _callInput; // +0x28
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
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)isInteractive;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)groupIdList;
- (void)setGroupIdList:(id)arg1;
- (id)subTitleList;
- (void)setSubTitleList:(id)arg1;
- (id)selectedGroupId;
- (void)setSelectedGroupId:(id)arg1;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg1;
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
