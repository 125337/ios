@interface MSEMessageImgCGIClient : NSObject
{
    NSString * _toUsername; // +0x8
    NSArray * _imageUrls; // +0x10
    NSMutableArray * _cdnReqDataNodes; // +0x18
    NSMutableArray * _msgClientIDs; // +0x20
}
- (void)setMsgImgClientWithToUsername:(id)arg1 withImageUrls:(id)arg2;
- (id)getMessageClientIDs;
- (id)genShareExtMsgImgPrepareRequestCGIWrap;
- (id)genExtMsgImgPrepareRequest;
- (id)genShareExtImgInfo;
- (id)genShareExtMsgImgCdnReqMessage;
- (id)genCdnReqBody;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)imageUrls;
- (void)setImageUrls:(id)arg1;
- (id)cdnReqDataNodes;
- (void)setCdnReqDataNodes:(id)arg1;
- (id)msgClientIDs;
- (void)setMsgClientIDs:(id)arg1;
- (void).cxx_destruct;
@end

