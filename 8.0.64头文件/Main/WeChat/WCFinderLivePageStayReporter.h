@interface WCFinderLivePageStayReporter : NSObject
{
    unsigned long long _enterPageTime; // +0x8
    NSString * _refPageId; // +0x10
    NSMutableDictionary * _switchExtraDic; // +0x18
}
+ (void)reportMoreLiveFollowFoldAction:(unsigned long long)arg1 commentScene:(id)arg2 tabType:(unsigned int)arg3 subTabType:(unsigned int)arg4;
- (id)init;
- (void)setupData;
- (void)updateRefPageId:(id)arg1;
- (void)updateEnterPageTime;
- (void)reportPageStayEnterExpose:(id)arg1 tabType:(unsigned int)arg2 subTabType:(unsigned int)arg3 commentScene:(id)arg4 pageUdfKv:(id)arg5;
- (void)reportPageStayQuitExpose:(id)arg1 tabType:(unsigned int)arg2 subTabType:(unsigned int)arg3 commentScene:(id)arg4 pageUdfKv:(id)arg5;
- (void)cleanReportTabData;
- (unsigned long long)enterPageTime;
- (void)setEnterPageTime:(unsigned long long)arg1;
- (id)refPageId;
- (void)setRefPageId:(id)arg1;
- (id)switchExtraDic;
- (void)setSwitchExtraDic:(id)arg1;
- (void).cxx_destruct;
@end
