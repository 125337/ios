@interface WCFinderCardsEntryCenter : NSObject
{
    WCFinderCardsEntryCenterStoreInfo * _data; // +0x8
}
- (id)init;
- (void)updateWithCardHolderEntranceInfo:(id)arg1;
- (BOOL)shouldShow;
- (BOOL)isToNewCards;
- (BOOL)needPreload;
- (id)jumpInfo;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

