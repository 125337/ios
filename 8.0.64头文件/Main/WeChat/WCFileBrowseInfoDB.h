@interface WCFileBrowseInfoDB : NSObject
{
    WCTDatabase * _infoDB; // +0x8
}
+ (BOOL)whetherInfoDBExist;
- (id)init;
- (void)dealloc;
- (id)p_getBrowseInfoTable;
- (void)p_createDataBase;
- (void)p_closeDB;
- (void)addFileBrowseInfo:(id)arg1;
- (void)updateTypeDownloadedForBrowseInfo:(id)arg1;
- (void)markUserOpenByMsgSvrID:(unsigned long long)arg1;
- (id)getAllFilesBrowseInfo;
- (id)getAllFilesBrowseMD5;
- (id)getAllFilesBrowseInfoFilterByDownloadType;
- (id)getAllFilesBrowseInfoFilterByDownloadTypeForChat:(id)arg1;
- (id)getAllFilesBrowseInfoFilterByUserOpen;
- (id)getFileBrowseInfoByMD5:(id)arg1;
- (void)delAllFileBrowseInfo;
- (void)delFileBrowseInfoWithMsgID:(unsigned long long)arg1;
- (void)delFileBrowseInfoWithChatName:(id)arg1;
- (void)willRecoverDatabase;
- (id)infoDB;
- (void)setInfoDB:(id)arg1;
- (void).cxx_destruct;
@end
