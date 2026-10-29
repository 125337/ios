@interface AffFinderProviderBaseImpl : NSObject <AffFinderProviderBase>
{
    AffFinderProviderCallback * _callback; // +0x8
}
+ (void)loadContext;
- (void)setCallback:(id)arg1;
- (id)finderGetCurrentUsername;
- (id)curTabSessionID;
- (id)curContextID;
- (void)saveFinderObject:(id)arg1 scene:(int)arg2 sessionBufferExtraKey:(id)arg3;
- (id)getLocalFinderObject:(id)arg1;
- (id)getCacheLocation;
- (id)getFeedSessionBuffer:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)getContact:(id)arg1;
- (id)finderGetCGIBaseRequest:(int)arg1 scene:(int)arg2;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(BOOL)arg2;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)arg1;
- (BOOL)finderRedDotWillAddAction:(id)arg1;
- (void)finderRedDotHasAddActionAsync:(unsigned long long)arg1 ctrlInfoData:(id)arg2;
- (BOOL)finderRedDotWillDisposeAction:(id)arg1;
- (BOOL)finderRedDotEnableUseCtrlInfoInNMStrategy:(id)arg1 ignoreNMFrequency:(BOOL)arg2 maxPriorityCtrlInfoData:(id)arg3;
- (void)finderRedDotHasDisposeActionAsync:(unsigned long long)arg1 path:(id)arg2 ctrlInfoData:(id)arg3;
- (void)finderRedDotDataChangedActionAsync:(unsigned long long)arg1 actionType:(int)arg2 subReasonType:(int)arg3 fromCtrlInfoData:(id)arg4 toCtrlInfoData:(id)arg5 disposePath:(id)arg6;
- (BOOL)reddotPersonalExposeClearSwitch;
- (int)getPrivateMsgTotalUnreadCountByUsername:(id)arg1;
- (int)getCurFinderUnreadCountByUsername:(id)arg1 fromRedDotPath:(BOOL)arg2;
- (void)reddotWillRevokeTipsUuidArray:(id)arg1;
- (id)callback;
- (void).cxx_destruct;
@end

