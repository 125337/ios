@interface QStatisticsManager : NSObject
{
    BOOL _hasUploaded; // +0x8
    NSString * _filePath; // +0x10
    NSMutableArray * _sendQueue; // +0x18
}
+ (id)manager;
+ (void)uploadIsInternal:(int)arg1;
- (id)init;
- (void)load;
- (void)save;
- (void)saveToFile;
- (void)send;
- (void)addToSendingQueue:(id)arg1;
- (void)upLoadSensitiveInfo;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)sendQueue;
- (void)setSendQueue:(id)arg1;
- (BOOL)hasUploaded;
- (void)setHasUploaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
