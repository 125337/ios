@interface WCFinderStreamCellUploadStatusView : UIView <WCFinderDataItemExt>
{
    BOOL _hadEncoding; // +0x8
    NSString * _tid; // +0x10
    CAShapeLayer * _ovalShapeLayer; // +0x18
    UIView * _progressView; // +0x20
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)setupProgressView;
- (void)updateProgress:(double)arg1;
- (void)setTid:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (id)tid;
- (id)ovalShapeLayer;
- (void)setOvalShapeLayer:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (BOOL)hadEncoding;
- (void)setHadEncoding:(BOOL)arg1;
- (void).cxx_destruct;
@end

