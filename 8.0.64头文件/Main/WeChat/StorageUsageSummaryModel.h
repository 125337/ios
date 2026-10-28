@interface StorageUsageSummaryModel : NSObject
{
    unsigned long long _appSize; // +0x8
    NSMutableArray * _detailModels; // +0x10
    long long _deviceSize; // +0x18
    long long _freeSize; // +0x20
}
- (id)init;
- (id)initWithScanStat:(id)arg1;
- (void)refreshModelWithAppGroup:(unsigned long long)arg1 canCleanCache:(unsigned long long)arg2 otherUser:(unsigned long long)arg3 vacuumChatLog:(unsigned long long)arg4 vacuumOther:(unsigned long long)arg5 deepCleanResource:(unsigned long long)arg6 isEmptySessionZeroSize:(BOOL)arg7;
- (void)initForLoading;
- (void)updateAppSizeWithDetailSize;
- (void)upadateRawSizeToShow;
- (id)getCacheDes;
- (id)description;
- (BOOL)p_isEmptyChatLog;
- (unsigned long long)appSize;
- (void)setAppSize:(unsigned long long)arg1;
- (id)detailModels;
- (void)setDetailModels:(id)arg1;
- (long long)deviceSize;
- (void)setDeviceSize:(long long)arg1;
- (long long)freeSize;
- (void)setFreeSize:(long long)arg1;
- (void).cxx_destruct;
@end
