@interface CBTAsstBoardFileViewModel : CBTAsstBoardBaseViewModel <FileTransferTaskWrapDelegate>
{
    BOOL _isReceivedFileChip; // +0x8
    BOOL _isUserASRContent; // +0x9
    CBTAsstBoardFileCellView * _cellView; // +0x10
    UIImage * _thumbImage; // +0x18
    NSString * _localFilePath; // +0x20
    NSString * _uploadFilePath; // +0x28
    unsigned long long _uploadState; // +0x30
    id /* block */ _onRetryUploadHandler; // +0x38
    long long _uploadProgress; // +0x40
    FileTransferTaskWrap * _taskWrap; // +0x48
    id <CBTAsstBoardFileViewModelDelegate> _fileDelegate; // +0x50
    NSString * _forwardFileId; // +0x58
    NSString * _forwardFileAesKey; // +0x60
    NSString * _forwardFileType; // +0x68
    CBTAsstCardWrap_FileMsg * _fileMsg; // +0x70
    CBTAsstBoardFilePreviewHelper * _previewHelper; // +0x78
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (BOOL)canTransToCommonMsg;
- (BOOL)isSourceFromUser;
- (id)initWithFileMsg:(id)arg1 delegate:(id)arg2;
- (id)initWithLocalFilePath:(id)arg1 delegate:(id)arg2;
- (id)initWithLocalFilePath:(id)arg1 uploadFilePath:(id)arg2 uploadState:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithLocalFilePath:(id)arg1 uploadFilePath:(id)arg2 displayName:(id)arg3 uploadState:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithReceivedFileMsg:(id)arg1 localFilePath:(id)arg2 uploadFilePath:(id)arg3 uploadState:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithCardWrap:(id)arg1 record:(id)arg2 delegate:(id)arg3;
- (id)buildMessageWrapFromFileMsg:(id)arg1;
- (void)prepareThumbnailForMessageWrap:(id)arg1 localFilePath:(id)arg2;
- (id)buildMessageWrapFromLocalFilePath:(id)arg1 displayName:(id)arg2;
- (id)currentMessageWrap;
- (unsigned int)syncDownloadStatusForMessageWrap:(id)arg1;
- (void)syncTransferStateForTask:(id)arg1 downloadStatus:(unsigned int)arg2;
- (id)buildDownloadTask;
- (void)setupTaskWrap;
- (void)cbt_observeReceivedFileTask:(id)arg1;
- (void)refreshTaskWrapWithTask:(id)arg1;
- (void)cbt_onReceivedFileTaskStateChanged:(id)arg1;
- (void)cbt_localizeReceivedFileFromTask:(id)arg1;
- (void)cbt_persistReceivedFileToUserCache:(id)arg1;
- (id)titleText;
- (id)detailText;
- (id)thumbImage;
- (BOOL)isFileExist;
- (id)buildAppFileMessageViewModel;
- (double)measureFileContentHeightWithWidth:(double)arg1;
- (void)updateFileContentView:(id)arg1;
- (void)updateUploadState:(unsigned long long)arg1;
- (void)updateFileId:(id)arg1 fileAesKey:(id)arg2;
- (void)updateUploadProgress:(long long)arg1;
- (id)chatContactUsernameForMessageWrap:(id)arg1;
- (CGRect)previewOriginFrame;
- (BOOL)hasDownloadedFileForMessageWrap:(id)arg1;
- (id)resolvedViewController;
- (id)preparePreviewHelperWithViewController:(id)arg1 messageWrap:(id)arg2;
- (void)showProcessingControllerWithTask:(id)arg1 fromViewController:(id)arg2 messageWrap:(id)arg3;
- (void)showExpireControllerFromViewController:(id)arg1;
- (void)showFileDetailControllerFromViewController:(id)arg1 messageWrap:(id)arg2;
- (BOOL)shouldPreviewLocalVideoWithMessageWrap:(id)arg1;
- (void)showLocalVideoPreviewFromViewController:(id)arg1 messageWrap:(id)arg2;
- (void)previewAppNodeForMessageWrap:(id)arg1 fromViewController:(id)arg2;
- (void)onDetailAction;
- (BOOL)onIconPlayAction;
- (void)onIconPauseAction;
- (void)onClickAction;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (void)fileTransferTaskUpdated:(id)arg1;
- (void)fileTransferTask:(id)arg1 onProgress:(int)arg2;
- (void)fileTransferTaskCompleted:(id)arg1;
- (void)dealloc;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)_buildUplinkForwardHistoryCardWraps;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg1;
- (id)uploadFilePath;
- (void)setUploadFilePath:(id)arg1;
- (unsigned long long)uploadState;
- (void)setUploadState:(unsigned long long)arg1;
- (BOOL)isReceivedFileChip;
- (void)setIsReceivedFileChip:(BOOL)arg1;
- (id /* block */)onRetryUploadHandler;
- (void)setOnRetryUploadHandler:(id /* block */)arg1;
- (long long)uploadProgress;
- (void)setUploadProgress:(long long)arg1;
- (id)taskWrap;
- (void)setTaskWrap:(id)arg1;
- (id)fileDelegate;
- (void)setFileDelegate:(id)arg1;
- (BOOL)isUserASRContent;
- (void)setIsUserASRContent:(BOOL)arg1;
- (id)forwardFileId;
- (void)setForwardFileId:(id)arg1;
- (id)forwardFileAesKey;
- (void)setForwardFileAesKey:(id)arg1;
- (id)forwardFileType;
- (void)setForwardFileType:(id)arg1;
- (id)fileMsg;
- (void)setFileMsg:(id)arg1;
- (id)previewHelper;
- (void)setPreviewHelper:(id)arg1;
- (void).cxx_destruct;
@end
