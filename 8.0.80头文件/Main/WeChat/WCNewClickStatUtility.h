@interface WCNewClickStatUtility : MMObject
+ (id)getReportDataDir;
+ (id)getUsrReportDataDir;
+ (id)getReportConfigFilePath;
+ (unsigned int)UinHash:(unsigned int)arg1;
+ (void)unCompressSrcDataWithLen:(id)arg1 dest:(id)arg2 length:(long long)arg3;
+ (id)getPageStatDataCheckFilePath;
+ (id)shortenPageID:(id)arg1;
+ (unsigned int)getNewContexID:(unsigned int)arg1;
+ (unsigned int)calCostTimeFrom:(timeval)arg1;
+ (id)getWidgetRecordDataDir;
+ (id)getWidgetRecordDataFileByPageID:(id)arg1 andTimeStamp:(unsigned int)arg2;
+ (id)getCalcSessionType:(id)arg1;
@end
