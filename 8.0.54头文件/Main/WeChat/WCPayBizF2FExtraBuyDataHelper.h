@interface WCPayBizF2FExtraBuyDataHelper : NSObject
{
    BOOL _isGetFavorRequesting; // +0x8
    ExtraBuyInfo * _data; // +0x10
    ExtraBuyInfo * _getFavorRespData; // +0x18
}
- (id)initWithData:(id)arg1;
- (BOOL)shouldEnableFavorItem;
- (BOOL)shouldShowFavorItem;
- (BOOL)hasMultiItems;
- (id)favorSubtitleColor;
- (id)favorSubTitle;
- (BOOL)itemSelected;
- (void)setItemSelected:(BOOL)arg1;
- (void)setSelectItems:(id)arg1;
- (id)unavailableReason;
- (unsigned int)selectedItemsAmount;
- (id)currentData;
- (void)onGetFavorResponded:(id)arg1;
- (void)clearGetFavorResponseInfo;
- (unsigned long long)availableItemsCount;
- (BOOL)isGetFavorRequesting;
- (void)setIsGetFavorRequesting:(BOOL)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)getFavorRespData;
- (void)setGetFavorRespData:(id)arg1;
- (void).cxx_destruct;
@end

