@interface MiniGameVideoShareHandler : NSObject <ICdnComMgrExt, ForwardMessageLogicDelegate, NSURLSessionDataDelegate, WCCommitViewResultDelegate>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    BOOL _isCancel; // +0x10
    float _lastPercent; // +0x14
    NSString * _fileKey; // +0x18
    NSString * _thumbPath; // +0x20
    MiniGameVideoFile * _videoFile; // +0x28
    unsigned long long _shareType; // +0x30
    NSURLSession * _urlSession; // +0x38
    NSMutableData * _m_recData; // +0x40
    NSString * _shareUrl; // +0x48
    NSString * _shareThumbUrl; // +0x50
    id /* block */ _onShareCallback; // +0x58
    id /* block */ _cancelCallback; // +0x60
    id /* block */ _finishCallback; // +0x68
}
- (id)initWithVideoFile:(id)arg1 shareType:(unsigned long long)arg2;
- (void)setOnShareBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2 finishBlock:(id /* block */)arg3;
- (id)createThumbPic;
- (void)share;
- (void)startUploadVideoWithThumbPath:(id)arg1;
- (id)urlSession;
- (void)shareWithShareUrl:(id)arg1 thumbUrl:(id)arg2;
- (void)shareToFriendWithShareUrl:(id)arg1 thumbUrl:(id)arg2 imageData:(id)arg3;
- (void)shareToTimelineWithShareUrl:(id)arg1 thumbUrl:(id)arg2 imageData:(id)arg3;
- (id)getHttpsThumbUrl:(id)arg1;
- (void)doShareRequest:(id)arg1 thumbUrl:(id)arg2;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)clearCurData;
- (void)cancelShare;
- (void)dealloc;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)videoFile;
- (void)setVideoFile:(id)arg1;
- (unsigned long long)shareType;
- (void)setShareType:(unsigned long long)arg1;
- (float)lastPercent;
- (void)setLastPercent:(float)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void)setUrlSession:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)shareThumbUrl;
- (void)setShareThumbUrl:(id)arg1;
- (id /* block */)onShareCallback;
- (void)setOnShareCallback:(id /* block */)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id /* block */)finishCallback;
- (void)setFinishCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

