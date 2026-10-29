@interface MSEAuthenticateMgr : NSObject
{
    NSString * _boundleId; // +0x8
    MSECGIClient * _cgiClient; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)commonInit;
- (void)checkShareWithURL:(id)arg1 Title:(id)arg2 Desc:(id)arg3 ThumbURL:(id)arg4;
- (void)checkShareImageWithUrls:(id)arg1;
- (void)checkShareFileWithPath:(id)arg1;
- (void)checkShareVideoWithPath:(id)arg1;
- (void)onLoadedVideoDuration:(double)arg1 Path:(id)arg2;
- (void)checkWithShareExtRequest:(id)arg1 isRetry:(BOOL)arg2;
- (id)genProtobufCGIWrapWithRequest:(id)arg1;
- (BOOL)updateCGIClient;
- (id)boundleId;
- (void)setBoundleId:(id)arg1;
- (id)cgiClient;
- (void)setCgiClient:(id)arg1;
- (void).cxx_destruct;
@end

