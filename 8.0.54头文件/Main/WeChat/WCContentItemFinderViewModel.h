@interface WCContentItemFinderViewModel : NSObject
{
    BOOL _isVideoFeed; // +0x8
    unsigned int _style; // +0xc
    unsigned int _mediaCount; // +0x10
    unsigned int _totalDuration; // +0x14
    unsigned long long _mediaType; // +0x18
    NSString * _thumbUrl; // +0x20
    WCFinderShareToMomentsItem * _shareItem; // +0x28
    NewLifeShareCoverImageViewModel * _newlifeViewModel; // +0x30
    CGSize _fittingSize; // +0x38
    CGSize _thumbSize; // +0x48
}
- (id)debugDescription;
- (id)initWithContentItem:(id)arg1;
- (id)getShareItem:(id)arg1;
- (BOOL)isVideoFeed;
- (BOOL)isMemberShipFeed;
- (CGSize)fittingSizeWithCoverItem:(id)arg1;
- (CGSize)fittingSizeWithCoverType:(unsigned long long)arg1 withWidth:(double)arg2 andHeight:(double)arg3;
- (CGSize)fittingSizeForNewLifeWithWidth:(double)arg1 andHeight:(double)arg2;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setIsVideoFeed:(BOOL)arg1;
- (unsigned int)mediaCount;
- (void)setMediaCount:(unsigned int)arg1;
- (CGSize)fittingSize;
- (void)setFittingSize:(CGSize)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (CGSize)thumbSize;
- (void)setThumbSize:(CGSize)arg1;
- (unsigned int)totalDuration;
- (void)setTotalDuration:(unsigned int)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (id)newlifeViewModel;
- (void)setNewlifeViewModel:(id)arg1;
- (void).cxx_destruct;
@end

