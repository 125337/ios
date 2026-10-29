@interface VoIPPIPView : UIView <VoIPCanvasPlugin, VoIPAudioServiceExtension>
{
    BOOL _isWaitForConnectingLabelHidden; // +0x8
    VoIPPIPRenderView * _renderView; // +0x10
    UIImageView * _localAvatarView; // +0x18
    UIImageView * _remoteAvatarView; // +0x20
    UIView * _blurView; // +0x28
    UILabel * _waitForConnectingLabel; // +0x30
}
- (void)canvasWillRender:(id)arg1;
- (void)canvas:(id)arg1 didRenderWithIsSucceed:(BOOL)arg2;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)arg1;
- (void)canvas:(id)arg1 customizeRenderCommandEncoder:(id)arg2 withIndex:(unsigned long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)isNormal;
- (void)dealloc;
- (void)drawPixelBufferRef:(__CVBuffer *)arg1;
- (void)setLocalAvatarImage:(id)arg1;
- (void)setRemoteAvatarImage:(id)arg1;
- (void)setLocalAvatarHidden:(BOOL)arg1;
- (void)setRemoteAvatarHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)clear;
- (BOOL)isWaitForConnectingLabelHidden;
- (void)setIsWaitForConnectingLabelHidden:(BOOL)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)localAvatarView;
- (void)setLocalAvatarView:(id)arg1;
- (id)remoteAvatarView;
- (void)setRemoteAvatarView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)waitForConnectingLabel;
- (void)setWaitForConnectingLabel:(id)arg1;
- (void).cxx_destruct;
@end

