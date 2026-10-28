@interface OMJRecordingResultTraits : NSObject
{
    BOOL _hasFaceSticker; // +0x8
    BOOL _hasOverlaySticker; // +0x9
    BOOL _has3DLayer; // +0xa
    BOOL _hasARFeature; // +0xb
    BOOL _hasSegmentationEffect; // +0xc
    BOOL _hasBeauty; // +0xd
    BOOL _hasMakeUp; // +0xe
    unsigned long long _faceTimePercentage; // +0x10
    unsigned long long _likelyDefective; // +0x18
}
- (id)initWithHasFaceSticker:(BOOL)arg1 hasOverlaySticker:(BOOL)arg2 has3DLayer:(BOOL)arg3 hasARFeature:(BOOL)arg4 hasSegmentationEffect:(BOOL)arg5 hasBeauty:(BOOL)arg6 hasMakeUp:(BOOL)arg7 faceTimePercentage:(unsigned long long)arg8 likelyDefective:(unsigned long long)arg9;
- (id)description;
- (BOOL)hasFaceSticker;
- (BOOL)hasOverlaySticker;
- (BOOL)has3DLayer;
- (BOOL)hasARFeature;
- (BOOL)hasSegmentationEffect;
- (BOOL)hasBeauty;
- (BOOL)hasMakeUp;
- (unsigned long long)faceTimePercentage;
- (unsigned long long)likelyDefective;
@end
