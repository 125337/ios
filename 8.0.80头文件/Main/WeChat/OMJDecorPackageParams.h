@interface OMJDecorPackageParams : NSObject
{
    BOOL _isImageDigiZoomDisabled; // +0x8
    OMCTimeline * _timeline; // +0x10
}
- (id)initWithTimeline:(id)arg1 isImageDigiZoomDisabled:(BOOL)arg2;
- (id)timeline;
- (BOOL)isImageDigiZoomDisabled;
- (void).cxx_destruct;
@end
