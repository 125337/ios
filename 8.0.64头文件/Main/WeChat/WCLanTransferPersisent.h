@interface WCLanTransferPersisent : NSObject
+ (id)getLanClientMsgID:(id)arg1;
+ (id)getLanTransferDir;
+ (id)getLanTransferServerDir;
+ (id)getServerTmpFilePathWithMsgID:(id)arg1;
+ (id)getLanTransferClientDir;
+ (id)getClientTmpFilePathWithMsgID:(id)arg1;
+ (id)getPathOfClientTaskInfo;
+ (id)getClientLanTransferTaskInfo;
+ (BOOL)saveClientLanTransferTaskInfo:(id)arg1;
+ (BOOL)removeClientLanTransferTaskInfo;
+ (id)getPathOfServerTaskInfo;
+ (id)getServerLanTransferTaskInfo;
+ (BOOL)saveServerLanTransferTaskInfo:(id)arg1;
+ (BOOL)removeServerLanTransferTaskInfo;
@end
