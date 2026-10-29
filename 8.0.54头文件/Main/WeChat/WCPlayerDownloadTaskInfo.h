@interface WCPlayerDownloadTaskInfo : NSObject
{
    BOOL _bTaskStart; // +0x8
    id <WCPlayerDownloadTaskInfoDelegate> _delegate; // +0x10
    NSMutableDictionary * _dicTaskBlock; // +0x18
    long long _createTime; // +0x20
    NSString * _nsIdentifier; // +0x28
    NSMutableSet * _allTask; // +0x30
    CdnProgressInfo * _progressInfo; // +0x38
    CdnComVideoProcessInfo * _m3u8ProgressInfo; // +0x40
    CdnComVideoProcessInfo * _moovProgressInfo; // +0x48
}
- (id)initWithTaskId:(unsigned int)arg1 identifier:(id)arg2;
- (void)reuseDownloadTaskWithTaskId:(unsigned int)arg1 block:(id)arg2;
- (void)removeTaskWithId:(unsigned int)arg1;
- (int)count;
- (void)onMoovReady:(id)arg1;
- (void)onM3u8Ready:(id)arg1;
- (void)onDownloadProgress:(id)arg1;
- (void)onDownloadComplete:(id)arg1;
- (id)description;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dicTaskBlock;
- (void)setDicTaskBlock:(id)arg1;
- (BOOL)bTaskStart;
- (void)setBTaskStart:(BOOL)arg1;
- (long long)createTime;
- (void)setCreateTime:(long long)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (id)allTask;
- (void)setAllTask:(id)arg1;
- (id)progressInfo;
- (void)setProgressInfo:(id)arg1;
- (id)m3u8ProgressInfo;
- (void)setM3u8ProgressInfo:(id)arg1;
- (id)moovProgressInfo;
- (void)setMoovProgressInfo:(id)arg1;
- (void).cxx_destruct;
@end

