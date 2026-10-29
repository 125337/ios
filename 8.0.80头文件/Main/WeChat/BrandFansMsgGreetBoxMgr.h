@interface BrandFansMsgGreetBoxMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _greetBoxes; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)greetBoxForBizType:(int)arg1;
- (BOOL)shouldMarkSessionAsGreet:(BOOL)arg1 existingSession:(id)arg2;
- (void)bumpGreetBoxForBizType:(int)arg1 delta:(unsigned long long)arg2 latestCreateTime:(unsigned int)arg3 latestDigest:(id)arg4;
- (void)rebuildGreetBoxForBizType:(int)arg1;
- (void)clearHolderRedDotForBizType:(int)arg1;
- (unsigned long long)silentRedDotCountForBizType:(int)arg1;
- (void)pushGreetBoxPageOnNavigationController:(id)arg1 serviceType:(long long)arg2;
- (BOOL)_isGreetBoxEnable;
- (unsigned long long)_readTimestampForBizType:(int)arg1;
- (void)_writeReadTimestamp:(unsigned long long)arg1 forBizType:(int)arg2;
- (id)_bizuinForBizType:(int)arg1;
- (void)_fireHolderUpdatedForBizType:(int)arg1 box:(id)arg2;
- (void)_reportGreetMsgRedDotForBizType:(int)arg1 box:(id)arg2;
- (id)greetBoxes;
- (void)setGreetBoxes:(id)arg1;
- (void).cxx_destruct;
@end
