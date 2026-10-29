@interface TXCVideoResultHandler : NSObject <TXIVideoBindable>
{
    id <TXCVideoResultHandlerDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (id)bindTo:(id)arg1;
- (void)processVideoFrame:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

