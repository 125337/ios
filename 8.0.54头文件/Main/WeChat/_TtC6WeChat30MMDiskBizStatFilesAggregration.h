@interface _TtC6WeChat30MMDiskBizStatFilesAggregration : NSObject
{
     biz; // +0x8
     folder; // +0x10
     biggestFiles; // +0x20
     latestFiles; // +0x28
}
- (id)initWithBiz:(long long)arg1 folder:(id)arg2;
- (void)addIfNeededWithName:(id)arg1 size:(long long)arg2 latestTimeInterval:(double)arg3;
- (void)report;
- (id)init;
- (void).cxx_destruct;
@end

