@interface TXLiveContainerView : UIView <WANativeViewTextureInterface>
{
    BOOL _isBackgroundPlaybackActive; // +0x8
    BOOL _nativeViewUseTexture; // +0x9
    BOOL _renderMirror; // +0xa
    UIView * _liveView; // +0x10
    UIImageView * _snapshotImageView; // +0x18
    WANativeViewTexture * _nativeViewTexture; // +0x20
    long long _fillMode; // +0x28
    long long _renderRotation; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)updateSnapshot;
- (void)updateRenderVideoFrame:(id)arg1;
- (void)updateRenderVideoFillMode:(long long)arg1;
- (void)updateRenderMirror:(BOOL)arg1;
- (void)updateRenderRotation:(long long)arg1;
- (long long)degreeFromRotation:(long long)arg1;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (BOOL)isBackgroundPlaybackActive;
- (void)setIsBackgroundPlaybackActive:(BOOL)arg1;
- (BOOL)nativeViewUseTexture;
- (void)setNativeViewUseTexture:(BOOL)arg1;
- (id)nativeViewTexture;
- (void)setNativeViewTexture:(id)arg1;
- (long long)fillMode;
- (void)setFillMode:(long long)arg1;
- (BOOL)renderMirror;
- (void)setRenderMirror:(BOOL)arg1;
- (long long)renderRotation;
- (void)setRenderRotation:(long long)arg1;
- (void).cxx_destruct;
@end
