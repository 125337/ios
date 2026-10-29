@interface WCAdServerOpAdSwapReportExtraInfo : NSObject
{
    unsigned long long _result; // +0x8
    NSString * _timelineSessionId; // +0x10
    WCAdServerOpAdSwapListInfo * _swapList; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
- (id)timelineSessionId;
- (void)setTimelineSessionId:(id)arg1;
- (id)swapList;
- (void)setSwapList:(id)arg1;
- (void).cxx_destruct;
@end
