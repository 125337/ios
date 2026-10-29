@interface MSEMessageVideoCGIClient : NSObject
{
    unsigned int _videoSize; // +0x8
    id <MSEMessageVideoCGIClientDelegate> _delegate; // +0x10
    NSString * _toUsername; // +0x18
    NSURL * _videoUrl; // +0x20
    NSURL * _videoOutputUrl; // +0x28
    NSString * _videoFileMd5; // +0x30
    NSMutableArray * _cdnReqDataNodes; // +0x38
    NSString * _msgClientID; // +0x40
}
- (void)setMsgVideoClientWithToUsername:(id)arg1 withVideoUrl:(id)arg2;
- (id)getMessageClientID;
- (id)genShareExtMsgVideoPrepareRequestCGIWrap;
- (id)genExtMsgVideoPrepareRequest;
- (id)genShareExtVideoInfo;
- (id)genShareExtMsgVideoReqMessage;
- (id)genCdnReqBody;
- (void)compressVideo;
- (void)onCompressVideoEnd;
- (void)onCompressedVideoSuccess:(id)arg1;
- (void)onCompressedVideoFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoOutputUrl;
- (void)setVideoOutputUrl:(id)arg1;
- (unsigned int)videoSize;
- (void)setVideoSize:(unsigned int)arg1;
- (id)videoFileMd5;
- (void)setVideoFileMd5:(id)arg1;
- (id)cdnReqDataNodes;
- (void)setCdnReqDataNodes:(id)arg1;
- (id)msgClientID;
- (void)setMsgClientID:(id)arg1;
- (void).cxx_destruct;
@end

