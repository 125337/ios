@interface WCFinderMusicVideoCandidate : NSObject
{
    PHAsset * _phAsset; // +0x8
    WCFinderMusicVideoResource * _resource; // +0x10
    NSString * _identifier; // +0x18
}
- (id)phAsset;
- (void)setPhAsset:(id)arg1;
- (id)resource;
- (void)setResource:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
