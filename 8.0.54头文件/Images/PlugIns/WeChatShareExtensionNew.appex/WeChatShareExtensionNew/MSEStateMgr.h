@interface MSEStateMgr : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    int _contentType; // +0x8
    TextStateUploadTask * _uploadTask; // +0x10
    TextStateUploadMedia * _media; // +0x18
    ProtobufCGIWrap * _cgiWrap; // +0x20
    NSString * _cdnSnsHostIP; // +0x28
    NSMutableData * _respData; // +0x30
}
+ (id)sharedInstance;
- (void)postRequestWithIconId:(id)arg1 imageUrl:(id)arg2;
- (void)postRequestWithIconId:(id)arg1 videoUrl:(id)arg2;
- (void)tryResendRequest;
- (void)genUploadTaskWithIconId:(id)arg1 imageUrl:(id)arg2 videoUrl:(id)arg3;
- (void)readyToPostRequest;
- (void)genCGIWrap;
- (void)postRequest;
- (id)genCgiUri;
- (id)genCgiBuffer;
- (id)genMediaBuffer;
- (id)genThumbBuffer;
- (void)postRequestInternalToUrl:(id)arg1 withCgiBuffer:(id)arg2 withMediaBuffer:(id)arg3 withThumbBuffer:(id)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)sendRequestSuccessNotification:(id)arg1;
- (void)sendRequestFailNotification:(id)arg1;
- (void)sendRequestStatusNotification:(id)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (id)media;
- (void)setMedia:(id)arg1;
- (id)cgiWrap;
- (void)setCgiWrap:(id)arg1;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (id)cdnSnsHostIP;
- (void)setCdnSnsHostIP:(id)arg1;
- (id)respData;
- (void)setRespData:(id)arg1;
- (void).cxx_destruct;
@end

