@interface WSAllTabRedDotInfo : NSObject
{
    NSMutableDictionary * _tabRedDotInfoMap; // +0x8
    NSString * _mSessionInAllTabRedDotReportString; // +0x10
}
- (id)init;
- (id)getTabRedDotInfoByCategory:(long long)arg1;
- (void)configureTabNumberReddot:(id)arg1 ctrlInfo:(id)arg2 showInfo:(id)arg3 category:(long long)arg4;
- (void)configureTabContentReddot:(id)arg1 showInfo:(id)arg2 category:(long long)arg3;
- (id)returnSessionInAllTabRedDotInfoReportString;
- (id)returnAllTabRedDotInfoReportString;
- (void)clear;
- (id)description;
- (void)recordSessionIn;
- (void)clearSessionIn;
- (id)tabRedDotInfoMap;
- (void)setTabRedDotInfoMap:(id)arg1;
- (id)mSessionInAllTabRedDotReportString;
- (void)setMSessionInAllTabRedDotReportString:(id)arg1;
- (void).cxx_destruct;
@end
