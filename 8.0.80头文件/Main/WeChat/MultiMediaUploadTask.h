@interface MultiMediaUploadTask : NSObject <MultiMediaUploadTaskStateDelegate>
{
    BOOL _isLargeFile; // +0x8
    BOOL _isLivePhotoData; // +0x9
    BOOL _needDownloadAsHtml; // +0xa
    BOOL _enableMarkdownNote; // +0xb
    BOOL _thumbTransCdnDone; // +0xc
    BOOL _dataTransCdnDone; // +0xd
    BOOL _isFromFav; // +0xe
    BOOL _isStopped; // +0xf
    NSString * _taskIdentifier; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    FavoritesRecordDataField * _dataField; // +0x20
    id <MultiMediaUploadTaskDelegate> _delegate; // +0x28
    NSMutableSet * _allFileIdSet; // +0x30
    NSMutableSet * _cacheHitFileIdSet; // +0x38
    RecordGroupCdn * _group; // +0x40
    NSString * _adaptFileid; // +0x48
    NSString * _adaptThumbFileid; // +0x50
    CdnUploadTaskInfo * _taskInfo; // +0x58
    CdnUploadTaskInfo * _compressVideoTaskInfo; // +0x60
    RecordTaskBaseState * _state; // +0x68
}
- (id)initWithMsgWrap:(id)arg1 recordData:(id)arg2 isFromFav:(BOOL)arg3;
- (BOOL)isRawVideo;
- (BOOL)isImageOrVideo;
- (BOOL)isRawVideoCanJumpUpload;
- (BOOL)isRawVideoCanJumpCompressUpload;
- (BOOL)isThumbNeedDownload;
- (BOOL)isNeedDownloadCompressVideo;
- (BOOL)isDataNeedDownload;
- (BOOL)isShouldDownloadData;
- (BOOL)isOnlyThumb;
- (void)start;
- (void)stop;
- (void)changeToState:(id)arg1;
- (id)thumbPath;
- (id)middlePath;
- (id)dataPath;
- (id)middleLivePhotoVideoPath;
- (id)livePhotoVideoPath;
- (void)fillWithCompressVideoTaskInfo;
- (void)fillWithTaskInfo;
- (void)fillCdnInfo;
- (BOOL)isCanCheckHitUpload;
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
- (id)allFileIdSet;
- (void)setAllFileIdSet:(id)arg1;
- (id)cacheHitFileIdSet;
- (void)setCacheHitFileIdSet:(id)arg1;
- (BOOL)isLargeFile;
- (void)setIsLargeFile:(BOOL)arg1;
- (BOOL)isLivePhotoData;
- (void)setIsLivePhotoData:(BOOL)arg1;
- (BOOL)needDownloadAsHtml;
- (void)setNeedDownloadAsHtml:(BOOL)arg1;
- (BOOL)enableMarkdownNote;
- (void)setEnableMarkdownNote:(BOOL)arg1;
- (BOOL)thumbTransCdnDone;
- (void)setThumbTransCdnDone:(BOOL)arg1;
- (BOOL)dataTransCdnDone;
- (void)setDataTransCdnDone:(BOOL)arg1;
- (id)group;
- (void)setGroup:(id)arg1;
- (id)adaptFileid;
- (void)setAdaptFileid:(id)arg1;
- (id)adaptThumbFileid;
- (void)setAdaptThumbFileid:(id)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (id)compressVideoTaskInfo;
- (void)setCompressVideoTaskInfo:(id)arg1;
- (BOOL)isFromFav;
- (void)setIsFromFav:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (void).cxx_destruct;
@end
