@interface CBTAsstNoteViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    NSString * _title; // +0x10
    NSString * _content; // +0x18
    unsigned long long _favId; // +0x20
    NSString * _cardActionKey; // +0x28
    NSDictionary * _cardData; // +0x30
    NSString * _cardId; // +0x38
    NSString * _cardName; // +0x40
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
+ (double)cardWidthForContainerWidth:(double)arg1;
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (void)parseCardData;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)buildForwardHistoryCardWraps;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)favId;
- (void)setFavId:(unsigned long long)arg1;
- (id)cardActionKey;
- (void)setCardActionKey:(id)arg1;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardName;
- (void)setCardName:(id)arg1;
- (void).cxx_destruct;
@end
