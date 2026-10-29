@interface GroupNoticeUtil : NSObject
+ (id)getUserRootDir;
+ (id)getDataDir;
+ (id)getDataDirWithChatName:(id)arg1;
+ (id)getDataDirWithChatName:(id)arg1 localId:(unsigned int)arg2;
+ (id)getDataPathWithChatName:(id)arg1 localId:(unsigned int)arg2 fileName:(id)arg3 isThumb:(BOOL)arg4 dataFmt:(id)arg5;
+ (id)getTmpDir;
+ (id)getTmpDirWithChatName:(id)arg1;
+ (id)getTmpDirWithChatName:(id)arg1 sourceId:(id)arg2;
+ (id)getTmpPathWithChatName:(id)arg1 sourceId:(id)arg2 fileName:(id)arg3 isThumb:(BOOL)arg4 dataFmt:(id)arg5;
+ (id)genUniqueKey;
+ (id)dataFromHexString:(id)arg1;
+ (id)ConvertData2MsgWrap:(id)arg1;
+ (id)ConvertData2Item:(id)arg1;
@end
