@interface _TtC6WeChat25WCFinderFeedFastSlipLogic : NSObject
{
     slipEventList; // +0x8
     lastEventTime; // +0x10
     $__lazy_storage_$_fastSlipThreshold; // +0x18
}
- (void)recordFeedSwitchFromContentVM:(id)arg1 fromSection:(long long)arg2 toSection:(long long)arg3;
- (void)clearRecord;
- (unsigned long long)enhanceSlipTimes;
- (id)init;
- (void).cxx_destruct;
@end

