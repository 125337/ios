@interface WXGChatPackDataPacker : NSObject
{
    BOOL _bZipFile; // +0x8
    BOOL _bPacking; // +0x9
    NSString * _dataDirPath; // +0x10
    id <WXGChatPackDataPackerDelegate> _delegate; // +0x18
    NSString * _wechatLogFile; // +0x20
    NSObject<OS_dispatch_queue> * _chatPackQueue; // +0x28
}
+ (BOOL)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
+ (BOOL)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (id)init;
- (id)chatPackQueue;
- (void)mainThreadCallDelegate:(BOOL)arg1;
- (void)mainThreadSyncProgress:(float)arg1;
- (void)startPackDataInDir:(id)arg1 withInfo:(id)arg2;
- (void)stopPackData;
- (id)getZipContentPath;
- (id)getContentPath;
- (id)getSessionDir:(id)arg1;
- (id)getSessionMediaDir:(id)arg1;
- (id)getSessionMsgDir:(id)arg1;
- (id)msgListPathForSession:(id)arg1 dataID:(id)arg2;
- (id)mediaPathForSession:(id)arg1 mediaID:(id)arg2;
- (id)getValidateFilePath;
- (id)dataDirPath;
- (void)setDataDirPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bZipFile;
- (void)setBZipFile:(BOOL)arg1;
- (id)wechatLogFile;
- (void)setWechatLogFile:(id)arg1;
- (void)setChatPackQueue:(id)arg1;
- (BOOL)bPacking;
- (void)setBPacking:(BOOL)arg1;
- (void).cxx_destruct;
@end
