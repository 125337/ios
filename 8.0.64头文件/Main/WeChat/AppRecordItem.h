@interface AppRecordItem : NSObject
+ (BOOL)ParserRecordXML:(id)arg1 TORecordItem:(id)arg2 msg:(id)arg3;
+ (id)genRecordTitleByDataList:(id)arg1;
+ (id)genRecordTitleByDataList:(id)arg1 forShort:(BOOL)arg2;
+ (id)RecordItemToXML:(id)arg1 innerType:(unsigned int)arg2;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)GetRecordThumbPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3;
+ (id)GetRecordDataTempPathByPath:(id)arg1;
+ (id)GetRecordDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetMiddleDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordDataDir:(id)arg1 LocalID:(unsigned int)arg2;
@end
