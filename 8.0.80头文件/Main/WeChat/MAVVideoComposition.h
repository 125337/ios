@interface MAVVideoComposition : NSObject <NSCopying>
{
    BOOL _enableOriginAudio; // +0x8
    BOOL _revert; // +0x9
    BOOL _enableFastCrop; // +0xa
    BOOL _enabledBGMCyclePlay; // +0xb
    float _playFps; // +0xc
    NSMutableArray * _trackArray; // +0x10
    MAVEffectManager * _vLogEffectMgr; // +0x18
    id /* block */ _renderCallback; // +0x20
    TAVSourceExportSession * _exportSession; // +0x28
    MAVVLogDirectorMultiVideoCompositionEffect * _mixEffect; // +0x30
    MAVVideoComposition * _selfPtr; // +0x38
    CGSize _assetSize; // +0x40
    CGRect _outputCrop; // +0x50
    CGRect _displayScreenRect; // +0x70
    struct _playRange; // +0x90
}
- (id)initWithTrackArray:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)addTrack:(id)arg1;
- (void)updateTrack:(int)arg1 track:(id)arg2;
- (void)removeTrack:(id)arg1;
- (struct)duration;
- (struct)sourceDuration;
- (struct)playRange;
- (void)assetSize:(CGSize)arg1;
- (id)createComposition:(id)arg1;
- (id)buildTrackChannel:(id)arg1;
- (void)setAssetSize:(CGSize)arg1;
- (void)setDisplayScreenRect:(CGRect)arg1;
- (BOOL)isEnableOriginSound;
- (BOOL)isRevert;
- (id)buildSource;
- (id)buildSource:(BOOL)arg1;
- (id)buildSource:(BOOL)arg1 fps:(float)arg2;
- (id)buildSimpleSource:(float)arg1;
- (void)getThumbImage:(int)arg1 callback:(id /* block */)arg2;
- (BOOL)exportWithPath:(id)arg1 config:(id)arg2 callback:(id /* block */)arg3 progressCallBlock:(id /* block */)arg4;
- (void)pauseExporting;
- (void)continueExporting;
- (BOOL)cancelExport;
- (id)description;
- (id)trackArray;
- (void)setTrackArray:(id)arg1;
- (void)setPlayRange:(struct)arg1;
- (float)playFps;
- (void)setPlayFps:(float)arg1;
- (CGSize)assetSize;
- (CGRect)outputCrop;
- (void)setOutputCrop:(CGRect)arg1;
- (CGRect)displayScreenRect;
- (void)setEnableOriginAudio:(BOOL)arg1;
- (void)setRevert:(BOOL)arg1;
- (id)vLogEffectMgr;
- (void)setVLogEffectMgr:(id)arg1;
- (BOOL)isEnableFastCrop;
- (void)setEnableFastCrop:(BOOL)arg1;
- (BOOL)enabledBGMCyclePlay;
- (void)setEnabledBGMCyclePlay:(BOOL)arg1;
- (id /* block */)renderCallback;
- (void)setRenderCallback:(id /* block */)arg1;
- (id)exportSession;
- (void)setExportSession:(id)arg1;
- (id)mixEffect;
- (void)setMixEffect:(id)arg1;
- (id)selfPtr;
- (void)setSelfPtr:(id)arg1;
- (void).cxx_destruct;
@end
