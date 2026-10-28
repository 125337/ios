@interface CameraScanGoodsExtCGITask : MMObject <PBMessageObserverDelegate>
{
    BOOL _isCancelled; // +0x8
    BOOL _isNeedPreload; // +0x9
    unsigned int _taskId; // +0xc
    CameraScanGoodsItemViewModel * _itemVM; // +0x10
    id <CameraScanGoodsExtCGITaskDelegate> _delegate; // +0x18
    unsigned long long _sessionId; // +0x20
    NSData * _uploadImageData; // +0x28
    CGSize _uploadImageSize; // +0x30
}
- (id)initWithItemViewModel:(id)arg1 sessionId:(unsigned long long)arg2;
- (void)dealloc;
- (void)start;
- (void)end;
- (void)genUploadImageData;
- (unsigned long long)uploadImageEncodeType;
- (void)startUploadItem;
- (void)handleUploadResponse:(id)arg1;
- (void)__callDelegateTaskUploadDone;
- (void)startExchanedItemInfo;
- (void)handleExchanedItemInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)itemVM;
- (void)setItemVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (BOOL)isNeedPreload;
- (void)setIsNeedPreload:(BOOL)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (id)uploadImageData;
- (void)setUploadImageData:(id)arg1;
- (CGSize)uploadImageSize;
- (void)setUploadImageSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
