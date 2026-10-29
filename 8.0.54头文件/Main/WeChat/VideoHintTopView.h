@interface VideoHintTopView : MMUIView
{
    id <VideoHintTopViewDelegate> _delegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onClickMore:(id)arg1;
- (void)onClickClose:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

