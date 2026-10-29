@interface CgiReportItemConfiger : NSObject <IOnCgiReportItemControl>
{
    NSMutableDictionary * _confsMap; // +0x8
}
+ (unsigned long long)getItemConfsVersion:(unsigned int)arg1;
+ (id)itemConfsMmkvMapID;
+ (id)itemDataMmkvMapID;
- (id)init;
- (void)reset;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)checkNeedControl:(id)arg1 andCgiBizId:(unsigned int)arg2;
- (id)getItemConfigWithItemType:(unsigned int)arg1 itemId:(id)arg2 eventId:(id)arg3 cgiBizId:(unsigned int)arg4;
- (void)readConfsFromMMkv;
- (void)readConfsFromMMkv:(unsigned int)arg1;
- (void)onCgiReportItemControl:(unsigned int)arg1 andVersion:(unsigned long long)arg2 andConfigs:(id)arg3;
- (id)confsMap;
- (void)setConfsMap:(id)arg1;
- (void).cxx_destruct;
@end
