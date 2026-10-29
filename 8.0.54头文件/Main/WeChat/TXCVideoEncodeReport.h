@interface TXCVideoEncodeReport : TXCVideoReportBase
{
    int _streamType; // +0x8
    id <TXCVideoEncodeReportDelegate> _delegate; // +0x10
    TXCVideoEncodeConfig * _config; // +0x18
}
- (id)initWithDelegate:(id)arg1 streamType:(int)arg2 config:(id)arg3;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(BOOL)arg2;
- (int)streamType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void).cxx_destruct;
@end

