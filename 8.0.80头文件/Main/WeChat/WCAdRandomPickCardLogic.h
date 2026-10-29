@interface WCAdRandomPickCardLogic : WCAdvertiseOperationLogicBase <WCAdRandomPickCardViewDelegate>
{
    WCDataItem * _dataItem; // +0x8
    unsigned long long _contentItemScene; // +0x10
    WCAdRandomPickCardView * _cardView; // +0x18
    long long _logicStatus; // +0x20
    NSMutableDictionary * _extraCardExtInfos; // +0x28
    NSMutableDictionary * _extraPickedCardInfos; // +0x30
    CGSize _expPickCardViewSize; // +0x38
}
+ (id)getRandomPickCardLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)dealloc;
- (id)cardView;
- (id)fetchPickCardView;
- (id)cardInfo;
- (id)pageId;
- (void)reset;
- (void)prepare;
- (void)start;
- (void)stop;
- (id)extraCardExtInfos;
- (id)extraPickedCardInfos;
- (void)appendExtraCardExtInfo:(id)arg1 forCardId:(id)arg2;
- (id)getRandomPickComponentPickedCards;
- (BOOL)isRandomPickCardPickedForCardId:(id)arg1;
- (BOOL)isCardPickedInCards:(id)arg1 forCardId:(id)arg2;
- (long long)getRandomPickCardExpectLogicStatus;
- (id)getRandomPickCardExtInfoForCardId:(id)arg1;
- (id)getRandomPickCardExtInfoFromExtraDataForCardId:(id)arg1;
- (void)updateRandomPickCardSortedItemsForPageId:(id)arg1 cardId:(id)arg2 destIndex:(long long)arg3;
- (void)onRandomPickCardViewResetCardItemsView;
- (CGSize)expPickCardViewSize;
- (void)setExpPickCardViewSize:(CGSize)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setCardView:(id)arg1;
- (long long)logicStatus;
- (void)setLogicStatus:(long long)arg1;
- (void)setExtraCardExtInfos:(id)arg1;
- (void)setExtraPickedCardInfos:(id)arg1;
- (void).cxx_destruct;
@end
