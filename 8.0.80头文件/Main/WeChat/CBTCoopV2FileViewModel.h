@interface CBTCoopV2FileViewModel : CBTCoopV2AsstBoardViewModel <FileTransferTaskWrapDelegate>
{
    BOOL _isUserASRContent; // +0x8
    CBTCoopV2FileCellView * _cellView; // +0x10
    UIImage * _thumbImage; // +0x18
    FileTransferTaskWrap * _taskWrap; // +0x20
    id <CBTCoopV2FileViewModelDelegate> _fileDelegate; // +0x28
    CBTAsstCardWrap_FileMsg * _fileMsg; // +0x30
    CBTCoopV2FilePreviewHelper * _previewHelper; // +0x38
}
- (BOOL)canTransToCommonMsg;
- (BOOL)isSourceFromUser;
- (id)initWithFileMsg:(id)arg1 delegate:(id)arg2;
- (id)buildMessageWrapFromFileMsg:(id)arg1;
- (id)currentMessageWrap;
- (unsigned int)syncDownloadStatusForMessageWrap:(id)arg1;
- (void)syncTransferStateForTask:(id)arg1 downloadStatus:(unsigned int)arg2;
- (id)buildDownloadTask;
- (void)setupTaskWrap;
- (void)refreshTaskWrapWithTask:(id)arg1;
- (id)titleText;
- (id)detailText;
- (id)thumbImage;
- (BOOL)isFileExist;
- (id)buildAppFileMessageViewModel;
- (double)measureFileContentHeightWithWidth:(double)arg1;
- (void)updateFileContentView:(id)arg1;
- (id)chatContactUsernameForMessageWrap:(id)arg1;
- (CGRect)previewOriginFrame;
- (BOOL)hasDownloadedFileForMessageWrap:(id)arg1;
- (id)resolvedViewController;
- (id)preparePreviewHelperWithViewController:(id)arg1 messageWrap:(id)arg2;
- (void)showExpireControllerFromViewController:(id)arg1;
- (void)showFileDetailControllerFromViewController:(id)arg1 messageWrap:(id)arg2;
- (void)previewAppNodeForMessageWrap:(id)arg1 fromViewController:(id)arg2;
- (void)showCoopDownloadPageFromViewController:(id)arg1;
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
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (id)taskWrap;
- (void)setTaskWrap:(id)arg1;
- (id)fileDelegate;
- (void)setFileDelegate:(id)arg1;
- (BOOL)isUserASRContent;
- (void)setIsUserASRContent:(BOOL)arg1;
- (id)fileMsg;
- (void)setFileMsg:(id)arg1;
- (id)previewHelper;
- (void)setPreviewHelper:(id)arg1;
- (void).cxx_destruct;
@end
