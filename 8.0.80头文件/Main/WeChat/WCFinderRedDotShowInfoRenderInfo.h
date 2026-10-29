@interface WCFinderRedDotShowInfoRenderInfo : NSObject
{
    double _availableWidth; // +0x8
    WCFinderRedDotRenderResultModel * _renderModel; // +0x10
    unsigned long long _entryScene; // +0x18
    NSString * _avoidanceConfigTag; // +0x20
}
- (BOOL)canReuseByAvailableWidth:(double)arg1 entryScene:(unsigned long long)arg2 avoidanceConfigTag:(id)arg3;
- (double)availableWidth;
- (void)setAvailableWidth:(double)arg1;
- (id)renderModel;
- (void)setRenderModel:(id)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (id)avoidanceConfigTag;
- (void)setAvoidanceConfigTag:(id)arg1;
- (void).cxx_destruct;
@end
