@interface MultiMediaUploadTask : NSObject <MultiMediaUploadTaskStateDelegate>
{
    BOOL _isLargeFile; // +0x8
    BOOL _isFromFav; // +0x9
    BOOL _isStopped; // +0xa
    BOOL _isHadUploadData; // +0xb
    NSString * _taskIdentifier; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    FavoritesItemDataField * _dataField; // +0x20
    id <MultiMediaUploadTaskDelegate> _delegate; // +0x28
    NSString * _signature; // +0x30
    NSString * _fakeAeskey; // +0x38
    NSString * _fakeSignature; // +0x40
    MultiMediaUploadBaseState * _state; // +0x48
}
- (id)initWithMsgWrap:(id)arg1 recordData:(id)arg2;
- (id)initWithMsgWrap:(id)arg1 recordData:(id)arg2 isFromFav:(BOOL)arg3;
- (void)start;
- (void)stop;
- (id)tryGenFavDownloadDataState;
- (void)changeToState:(id)arg1;
- (id)getMessageWrap;
- (id)getDataField;
- (BOOL)isCanCheckHitUpload;
- (BOOL)isHadUploadData;
- (void)setHadUploadData;
- (void)onUploadProgressChangeWithTotal:(unsigned long long)arg1 finished:(unsigned long long)arg2;
- (void)onUploadTaskProcessSucc;
- (void)onUploadTaskProcessFailType:(int)arg1;
- (id)taskIdentifier;
- (void)setTaskIdentifier:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)dataField;
- (void)setDataField:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLargeFile;
- (void)setIsLargeFile:(BOOL)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)fakeAeskey;
- (void)setFakeAeskey:(id)arg1;
- (id)fakeSignature;
- (void)setFakeSignature:(id)arg1;
- (BOOL)isFromFav;
- (void)setIsFromFav:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (void)setIsHadUploadData:(BOOL)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (void).cxx_destruct;
@end

