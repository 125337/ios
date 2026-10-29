@interface FinderBlockViewController : MMUIViewController
{
    id <OpenApiFinderBizDelegate> _delegate; // +0x68
    OpenApiParameter * _parameter; // +0x70
    NSString * _openUrl; // +0x78
    WCFinderJumpInfo * _jumpInfo; // +0x80
}
- (id)initWithInfoData:(id)arg1 andOpenUrl:(id)arg2;
- (id)initWithInfoData:(id)arg1 andOpenUrl:(id)arg2 jumpInfo:(id)arg3;
- (void)viewDidLoad;
- (void)doAuthWithUrl:(id)arg1;
- (void)configJumpInfoWithParameter:(id)arg1;
- (void)onReturn;
- (void)didNeedRefreshTokenWithResult:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)openUrl;
- (void)setOpenUrl:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

