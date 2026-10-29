@interface BrandCommonService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    BOOL _isHideMassSendEnabled; // +0x8
    BOOL _isHideMassSendOnceEnabled; // +0x9
    unsigned int _massSendHideFlag; // +0xc
    BrandConvMassSendStorage * _massSendStorage; // +0x10
}
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)fetchCommonStrategy;
- (id)getBrandConvMsgFirstMsgInfo:(id)arg1 fromCreateTime:(unsigned int)arg2;
- (id)getBrandConvMsgLocalIds:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 toCreateTime:(unsigned int)arg4 limit:(int)arg5 leftCount:(unsigned int *)arg6;
- (id)getDownMsgLocalIds:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)hideMassSendTypes;
- (BOOL)isServerHideBizMassSend;
- (BOOL)isServerHideServiceMassSend;
- (BOOL)isServerHideStockMassSend;
- (BOOL)isServerHideIncrementMassSend;
- (BOOL)isServerHideAllMassSend;
- (BOOL)isServerHideNotAllMassSend;
- (BOOL)isServerHidePreview;
- (unsigned int)massSendDBRecordStartTime;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)chatRoomItem;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (id)massSendStorage;
- (BOOL)isSubscriptionBrand:(id)arg1;
- (BOOL)isHideMassSendEnabled;
- (void)setIsHideMassSendEnabled:(BOOL)arg1;
- (unsigned int)massSendHideFlag;
- (void)setMassSendHideFlag:(unsigned int)arg1;
- (void)setMassSendStorage:(id)arg1;
- (BOOL)isHideMassSendOnceEnabled;
- (void)setIsHideMassSendOnceEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
