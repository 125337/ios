@interface VoIPMPFlutterTextureManager : NSObject
{
    __CVBuffer * _lastScreenPixelBuffer; // +0x8
    int _lastScreenPixelBufferMemberId; // +0x10
    int _selfMemberId; // +0x14
    id <VoIPMPFlutterTextureManagerDelegate> _delegate; // +0x18
    NSObject<FlutterTextureRegistry> * _registry; // +0x20
    NSMutableDictionary * _textureHolders; // +0x28
    NSMutableDictionary * _textureInfos; // +0x30
    NSMutableDictionary * _surfaceStates; // +0x38
    NSMutableDictionary * _lastLoggedVideoFrameFormats; // +0x40
    VoIPMPScreenStreamSinkRouter * _screenStreamSinkRouter; // +0x48
}
+ (long long)renderIdForMemberId:(int)arg1 streamType:(int)arg2;
+ (BOOL)isEncodedRenderId:(long long)arg1;
+ (long long)renderIdFromQueryId:(long long)arg1 defaultStreamType:(int)arg2;
+ (int)memberIdFromRenderIdOrLegacyId:(long long)arg1;
+ (int)streamTypeFromRenderId:(long long)arg1 defaultStreamType:(int)arg2;
- (id)initWithTextureRegistry:(id)arg1;
- (id)getRenderTextureForQueryId:(long long)arg1;
- (void)setDecodingSurfaceSizeForMember:(int)arg1 width:(int)arg2 height:(int)arg3 orient:(int)arg4;
- (void)bindSelfMemberId:(int)arg1;
- (void)startRender;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 streamType:(int)arg7;
- (void)onLocalPreviewPixelBuffer:(__CVBuffer *)arg1 memberId:(int)arg2 rotate:(int)arg3 mirrored:(BOOL)arg4;
- (void)releaseVideoResources;
- (void)updateSurfaceStateForRenderKey:(id)arg1 width:(int)arg2 height:(int)arg3 rotate:(int)arg4 isLandscapeMode:(BOOL)arg5;
- (id)ensureTextureHolderForRenderKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)buildTextureInfoForRenderKey:(id)arg1;
- (void)publishTextureInfoIfNeededForRenderKey:(id)arg1 force:(BOOL)arg2;
- (void)setScreenStreamSink:(id)arg1;
- (void)addScreenStreamSink:(id)arg1;
- (void)removeScreenStreamSink:(id)arg1;
- (id)latestScreenFrameImageForMemberId:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)selfMemberId;
- (void)setSelfMemberId:(int)arg1;
- (id)registry;
- (id)textureHolders;
- (void)setTextureHolders:(id)arg1;
- (id)textureInfos;
- (void)setTextureInfos:(id)arg1;
- (id)surfaceStates;
- (void)setSurfaceStates:(id)arg1;
- (id)lastLoggedVideoFrameFormats;
- (void)setLastLoggedVideoFrameFormats:(id)arg1;
- (id)screenStreamSinkRouter;
- (void)setScreenStreamSinkRouter:(id)arg1;
- (void).cxx_destruct;
@end
