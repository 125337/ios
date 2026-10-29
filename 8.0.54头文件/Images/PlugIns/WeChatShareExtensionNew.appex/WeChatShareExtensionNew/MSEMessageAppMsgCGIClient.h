@interface MSEMessageAppMsgCGIClient : NSObject
{
    BOOL _hasThumb; // +0x8
    NSString * _toUsername; // +0x10
    NSURL * _contentUrl; // +0x18
    NSURL * _thumbUrl; // +0x20
    NSString * _title; // +0x28
    NSString * _shareDesc; // +0x30
    NSData * _thumbData; // +0x38
    NSMutableArray * _cdnReqDataNodes; // +0x40
    NSString * _clientMsgId; // +0x48
    NSString * _thumbMd5; // +0x50
}
- (void)setMsgAppClientWithToUsername:(id)arg1 withUrl:(id)arg2 withThumbnailImgUrl:(id)arg3 withUrlTitle:(id)arg4 withUrlDesc:(id)arg5;
- (id)getMessageClientID;
- (id)genShareExtMsgAppPrepareRequsstCGIWrap;
- (id)genExtMsgAppPrepareRequest;
- (id)genExtMsgAppMsg;
- (id)genAppMsgContent;
- (id)genAppMsgAttachContent;
- (id)genExtMsgAppThumbImgInfo;
- (id)genShareExtMsgAppCdnReqMessage;
- (id)genCdnReqBody;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)shareDesc;
- (void)setShareDesc:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (BOOL)hasThumb;
- (void)setHasThumb:(BOOL)arg1;
- (id)cdnReqDataNodes;
- (void)setCdnReqDataNodes:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)thumbMd5;
- (void)setThumbMd5:(id)arg1;
- (void).cxx_destruct;
@end

