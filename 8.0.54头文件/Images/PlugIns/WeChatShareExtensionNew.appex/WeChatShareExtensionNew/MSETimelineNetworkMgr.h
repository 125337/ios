@interface MSETimelineNetworkMgr : NSObject <NSURLSessionDelegate>
{
    BOOL _isResendTimeline; // +0x8
    int _contentType; // +0xc
    SEWCUploadTask * _uploadTask; // +0x10
    ProtobufCGIWrap * _cgiWrap; // +0x18
    NSString * _cdnSnsHostIP; // +0x20
    NSArray * _imageUrls; // +0x28
    NSString * _currentSessionID; // +0x30
    unsigned long long _currentTaskID; // +0x38
}
+ (id)sharedInstance;
- (id)genUploadTask;
- (void)postTimelineRequestWithContentDescription:(id)arg1 withImageUrlArray:(id)arg2 withLocationInfo:(id)arg3;
- (void)postTimelineRequsetWithContentDescription:(id)arg1 withShareUrl:(id)arg2 withUrlTitle:(id)arg3 withThumbnail:(id)arg4 withLocationInfo:(id)arg5;
- (void)tryResendTimeline;
- (void)clearLastFailRequest;
- (id)genTimelineCGIWrapWithImageUrls:(id)arg1;
- (id)getCgiUriPrefix;
- (void)postRequest:(id)arg1 cgiWrap:(id)arg2 imageUrlArray:(id)arg3;
- (id)genRequestBufferInternal:(id)arg1;
- (void)postRequestInternalToUrl:(id)arg1 withCgiBuffer:(id)arg2 withImgBuffer:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)sendBadRequestNotification;
- (void)sendSuccessRequestNotification;
- (void)sendFailRequestNotification:(id)arg1;
- (void)reportSendTimelineFailIdKeyWithStatuscode:(long long)arg1;
- (BOOL)checkIfValid;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (id)cgiWrap;
- (void)setCgiWrap:(id)arg1;
- (id)cdnSnsHostIP;
- (void)setCdnSnsHostIP:(id)arg1;
- (BOOL)isResendTimeline;
- (void)setIsResendTimeline:(BOOL)arg1;
- (id)imageUrls;
- (void)setImageUrls:(id)arg1;
- (id)currentSessionID;
- (void)setCurrentSessionID:(id)arg1;
- (unsigned long long)currentTaskID;
- (void)setCurrentTaskID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

