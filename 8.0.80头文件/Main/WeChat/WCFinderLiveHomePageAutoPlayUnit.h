@interface WCFinderLiveHomePageAutoPlayUnit : NSObject
{
    unsigned long long _type; // +0x8
    unsigned long long _section; // +0x10
    WCFinderLiveHomePageSectionViewModel * _sectionVM; // +0x18
    double _topY; // +0x20
    double _exposeRatio; // +0x28
}
- (id)initWithType:(unsigned long long)arg1 section:(unsigned long long)arg2 sectionVM:(id)arg3;
- (id)currentPlayingIndexPaths;
- (BOOL)containIndexPath:(id)arg1;
- (BOOL)belongsToSectionVM:(id)arg1;
- (BOOL)isEqualToUnit:(id)arg1;
- (void)removePlayingIndexPath:(id)arg1;
- (BOOL)hasSameIdentityAsUnit:(id)arg1;
- (id)adjustAndReplenish;
- (id)adjustAndReplenishWithDeleteIndexPath:(id)arg1;
- (id)description;
- (unsigned long long)type;
- (unsigned long long)section;
- (id)sectionVM;
- (double)topY;
- (void)setTopY:(double)arg1;
- (double)exposeRatio;
- (void)setExposeRatio:(double)arg1;
- (void).cxx_destruct;
@end
