@interface NewLifeFetchDesignerStickerListHandler : NewLifeActionHandler <DesignerPortfolioCollectionViewProviderDelegate>
{
    DesignerPortfolioCollectionViewProvider * _provider; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)endActionWithHasStickerList:(BOOL)arg1;
- (id)provider;
- (unsigned int)emoticonDesignerUin;
- (BOOL)shouldRemoveExpiredPack;
- (void)onGetEmoticonPacksForDisplay:(BOOL)arg1;
- (void)onFetchEmoticonDataFailed;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end

