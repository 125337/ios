@interface TXCVideoDecodeReport : TXCVideoReportBase
{
    id <TXCVideoDecodeReportDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

