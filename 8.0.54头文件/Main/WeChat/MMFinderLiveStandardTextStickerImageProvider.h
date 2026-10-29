@interface MMFinderLiveStandardTextStickerImageProvider : NSObject <MMFinderLiveStickerImageProviding>
{
    double _maximumWidth; // +0x8
    unsigned long long _maximumWidthInFullWidthCharacters; // +0x10
}
- (void)createImageWithStickerItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (double)maximumWidth;
- (void)setMaximumWidth:(double)arg1;
- (unsigned long long)maximumWidthInFullWidthCharacters;
- (void)setMaximumWidthInFullWidthCharacters:(unsigned long long)arg1;
@end

