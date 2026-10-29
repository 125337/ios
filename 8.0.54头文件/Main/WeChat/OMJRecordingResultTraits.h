@interface OMJRecordingResultTraits : NSObject
{
    BOOL _hasFaceSticker; // +0x8
    BOOL _hasOverlaySticker; // +0x9
    BOOL _has3DLayer; // +0xa
    unsigned long long _faceTimePercentage; // +0x10
    unsigned long long _likelyDefective; // +0x18
}
- (id)initWithHasFaceSticker:(BOOL)arg1 hasOverlaySticker:(BOOL)arg2 has3DLayer:(BOOL)arg3 faceTimePercentage:(unsigned long long)arg4 likelyDefective:(unsigned long long)arg5;
- (BOOL)hasFaceSticker;
- (BOOL)hasOverlaySticker;
- (BOOL)has3DLayer;
- (unsigned long long)faceTimePercentage;
- (unsigned long long)likelyDefective;
@end

