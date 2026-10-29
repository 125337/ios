@interface OMJAIGCGeneratedAsset : NSObject
{
    BOOL _shouldDisableSave; // +0x8
    NSArray * _mediaFiles; // +0x10
    unsigned long long _spliceType; // +0x18
    NSArray * _mediaPixelFrames; // +0x20
    NSDictionary * _extraParams; // +0x28
    CGSize _canvasPixelSize; // +0x30
}
- (id)initWithMediaFiles:(id)arg1 spliceType:(unsigned long long)arg2 canvasPixelSize:(CGSize)arg3 mediaPixelFrames:(id)arg4 shouldDisableSave:(BOOL)arg5 extraParams:(id)arg6;
- (id)mediaFiles;
- (unsigned long long)spliceType;
- (CGSize)canvasPixelSize;
- (id)mediaPixelFrames;
- (BOOL)shouldDisableSave;
- (id)extraParams;
- (void).cxx_destruct;
@end
