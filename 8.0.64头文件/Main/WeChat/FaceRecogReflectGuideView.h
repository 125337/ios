@interface FaceRecogReflectGuideView : MMUIView <MVideoPlayerViewDelegate>
{
    MVideoPlayerView * m_view; // +0x8
    MMUILabel * m_bigTitle; // +0x10
    MMUILabel * m_detail; // +0x18
    UIButton * m_btn; // +0x20
    id <FaceRecogGuideViewDelegate> _delegate; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)initView;
- (void)onFaceRecogGuideFinished;
- (void)playGuide;
- (void)onPlayEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
