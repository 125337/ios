@interface FaceRecogPayLitePathResolver : NSObject <WCPayGetFaceCheckPathCgiDelegate>
{
    WCPayGetFaceCheckPathCgi * _cgi; // +0x8
    id /* block */ _completion; // +0x10
}
+ (id)inflightResolvers;
- (void)startWithRequest:(id)arg1;
- (void)onGetFaceCheckPathResp:(id)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
