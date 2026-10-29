@interface MPFastLoadParam : NSObject
{
    BOOL _hasItemShowType; // +0x8
    unsigned int _itemShowType; // +0xc
    unsigned int _enterType; // +0x10
    NSString * _urlForReport; // +0x18
    NSData * _coverImageData; // +0x20
    id <MPHeroTransitionSource> _heroTransitionSource; // +0x28
    id /* block */ _heroSourceViewProvider; // +0x30
    NSString * _thumbCoverUrl; // +0x38
    double _thumbCoverWidth; // +0x40
    double _thumbCoverHeight; // +0x48
    FirstImageInfo * _heroFirstImageInfo; // +0x50
}
- (id)description;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (id)urlForReport;
- (void)setUrlForReport:(id)arg1;
- (id)coverImageData;
- (void)setCoverImageData:(id)arg1;
- (id)heroTransitionSource;
- (void)setHeroTransitionSource:(id)arg1;
- (id /* block */)heroSourceViewProvider;
- (void)setHeroSourceViewProvider:(id /* block */)arg1;
- (id)thumbCoverUrl;
- (void)setThumbCoverUrl:(id)arg1;
- (double)thumbCoverWidth;
- (void)setThumbCoverWidth:(double)arg1;
- (double)thumbCoverHeight;
- (void)setThumbCoverHeight:(double)arg1;
- (id)heroFirstImageInfo;
- (void)setHeroFirstImageInfo:(id)arg1;
- (void).cxx_destruct;
@end
