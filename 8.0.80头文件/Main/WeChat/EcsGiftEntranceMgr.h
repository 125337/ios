@interface EcsGiftEntranceMgr : MMUserService <MMServiceProtocol>
{
    BOOL _enableExposePreload; // +0x8
    int _switchChatType; // +0xc
    EcsPresentEntrance * _entranceData; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateWithEcsPresentEntranceInfo:(id)arg1;
- (BOOL)shouldShowEntranceInSingleChat;
- (BOOL)shouldShowEntranceInGroupChat;
- (id)curEntranceLogStr;
- (id)singleChatJumpInfo;
- (id)groupChatJumpInfo;
- (id)nativeRouterJumpInfoWithRequestType:(unsigned long long)arg1 isGroup:(BOOL)arg2;
- (int)switchChatGift;
- (void)clearChatGift;
- (void)markHasClearRedDotInChatPlusIconWithGroupChat:(BOOL)arg1;
- (void)markHasClearRedDotInChatGiftIconWithGroupChat:(BOOL)arg1;
- (BOOL)shouldShowRedDotInChatPlusIcon:(BOOL)arg1;
- (BOOL)shouldShowRedDotInChatGiftIcon:(BOOL)arg1;
- (BOOL)shouldShowRedDot:(BOOL)arg1 isChatGiftIcon:(BOOL)arg2;
- (id)getEntranceInfo:(BOOL)arg1;
- (id)getOldMMKVReddotKey:(BOOL)arg1 isChatGiftIcon:(BOOL)arg2;
- (id)getMMKVReddotKey:(BOOL)arg1 isChatGiftIcon:(BOOL)arg2;
- (void)resetGiftReddot;
- (void)clearOldGiftReddot;
- (unsigned int)getShouldPreloadImgType:(BOOL)arg1;
- (unsigned int)getShouldShowCoverType:(BOOL)arg1;
- (id)decorateKeyForPreloadWithSex:(int)arg1 originKey:(id)arg2;
- (BOOL)needPreloadWithTiming:(int)arg1 isGroupChat:(BOOL)arg2;
- (void)onExposeGiftEntrance:(id)arg1;
- (void)triggerOpenServicePreloadOnExpose:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1 navigationController:(id)arg2;
- (void)doExposeGiftEntrancePreloadLogicNew:(id)arg1;
- (void)doExposeGiftEntrancePreloadLogicOld:(id)arg1;
- (void)checkPreload:(int)arg1 jumpInfo:(id)arg2 contact:(id)arg3 chatNameTicket:(id)arg4;
- (id)prepareGiftPreloadExtraData:(id)arg1 chatNameTicket:(id)arg2;
- (id)entranceData;
- (void)setEntranceData:(id)arg1;
- (int)switchChatType;
- (void)setSwitchChatType:(int)arg1;
- (BOOL)enableExposePreload;
- (void)setEnableExposePreload:(BOOL)arg1;
- (void).cxx_destruct;
@end
