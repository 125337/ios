@interface AppRecordItem : NSObject
+ (id)SafeRecordDataId:(id)arg1;
+ (BOOL)IsUnsafeRecordPath:(id)arg1;
+ (BOOL)ParserRecordXML:(id)arg1 TORecordItem:(id)arg2 msg:(id)arg3;
+ (id)genRecordTitleByDataList:(id)arg1;
+ (id)genRecordTitleByDataList:(id)arg1 forShort:(BOOL)arg2;
+ (id)RecordItemToXML:(id)arg1 innerType:(unsigned int)arg2;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)GetPathOfAppV2Dir:(id)arg1;
+ (id)GetRecordThumbPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3;
+ (id)GetRecordDataTempPathByPath:(id)arg1;
+ (id)GetRecordDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordRawDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordRawDataV2PathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordDataDir:(id)arg1 LocalID:(unsigned int)arg2;
@end
