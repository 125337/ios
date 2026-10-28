@interface WCCardMemberCardListLogicController : MMObject <IWCCardPkgExt>
{
    NSMutableOrderedSet * _allSortedMemberCardsList; // +0x8
    id /* block */ _fetchDataCompleteBlcok; // +0x10
    id /* block */ _delCompleteBlcok; // +0x18
    id /* block */ _giftCompleteBlcok; // +0x20
}
- (id)init;
- (void)fetchData:(id /* block */)arg1;
- (void)delMemberCard:(id)arg1 complete:(id /* block */)arg2;
- (void)giftMemberCardId:(id)arg1 toUsrName:(id)arg2 complete:(id /* block */)arg3;
- (unsigned int)getNumberOfMemberCards;
- (id)getMemberCardAtRow:(long long)arg1;
- (long long)getIdxOfMemberCard:(id)arg1;
- (void)removeMemberCardDataAtRow:(long long)arg1;
- (void)loadMemberCards;
- (id)findCard:(id)arg1 inList:(id)arg2;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2;
- (id /* block */)fetchDataCompleteBlcok;
- (void)setFetchDataCompleteBlcok:(id /* block */)arg1;
- (id /* block */)delCompleteBlcok;
- (void)setDelCompleteBlcok:(id /* block */)arg1;
- (id /* block */)giftCompleteBlcok;
- (void)setGiftCompleteBlcok:(id /* block */)arg1;
- (void).cxx_destruct;
@end
