@interface VoIPCallRecordingUIState : NSObject <NSCopying>
{
    BOOL _localIsFront; // +0x8
    BOOL _localIsBigWindow; // +0x9
    BOOL _isSplit; // +0xa
    BOOL _localIsTopInSplit; // +0xb
    BOOL _mainWindowUseAspectFit; // +0xc
    BOOL _localCameraClosed; // +0xd
    BOOL _remoteCameraClosed; // +0xe
    unsigned long long _ptsNs; // +0x10
    unsigned long long _splitAxis; // +0x18
    unsigned long long _localSplitSlot; // +0x20
    double _mainWindowRotateDegree; // +0x28
    double _subWindowRotateDegree; // +0x30
    CGRect _subWindowFrame; // +0x38
}
- (BOOL)isEqualInFieldsExceptPtsTo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)ptsNs;
- (void)setPtsNs:(unsigned long long)arg1;
- (BOOL)localIsFront;
- (void)setLocalIsFront:(BOOL)arg1;
- (BOOL)localIsBigWindow;
- (void)setLocalIsBigWindow:(BOOL)arg1;
- (CGRect)subWindowFrame;
- (void)setSubWindowFrame:(CGRect)arg1;
- (BOOL)isSplit;
- (void)setIsSplit:(BOOL)arg1;
- (unsigned long long)splitAxis;
- (void)setSplitAxis:(unsigned long long)arg1;
- (unsigned long long)localSplitSlot;
- (void)setLocalSplitSlot:(unsigned long long)arg1;
- (BOOL)localIsTopInSplit;
- (void)setLocalIsTopInSplit:(BOOL)arg1;
- (double)mainWindowRotateDegree;
- (void)setMainWindowRotateDegree:(double)arg1;
- (double)subWindowRotateDegree;
- (void)setSubWindowRotateDegree:(double)arg1;
- (BOOL)mainWindowUseAspectFit;
- (void)setMainWindowUseAspectFit:(BOOL)arg1;
- (BOOL)localCameraClosed;
- (void)setLocalCameraClosed:(BOOL)arg1;
- (BOOL)remoteCameraClosed;
- (void)setRemoteCameraClosed:(BOOL)arg1;
@end
