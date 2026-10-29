@interface _TtC6WeChat25WCFinderFeedFastSlipLogic : NSObject
{
     slipEventList; // +0x8
     lastEventTime; // +0x10
     consecutiveUpwardFastSlipCount; // +0x18
     $__lazy_storage_$_fastSlipThreshold; // +0x20
}
- (void)recordFeedSwitchFromContentVM:(id)arg1 fromSection:(long long)arg2 toSection:(long long)arg3;
- (void)clearRecord;
- (unsigned long long)enhanceSlipTimes;
- (long long)upwardFastSlipCount;
- (void)resetUpwardFastSlipCount;
- (id)init;
- (void).cxx_destruct;
@end
