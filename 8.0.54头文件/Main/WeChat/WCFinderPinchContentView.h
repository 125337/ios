@interface WCFinderPinchContentView : WCFinderFullMultiMediaCollectionView
{
    BOOL _isTriggerBySetZoomAnimated; // +0x8
    double _scaleBeforeZoom; // +0x10
    unsigned long long _timeStampBeforeZoom; // +0x18
}
- (double)scaleBeforeZoom;
- (void)setScaleBeforeZoom:(double)arg1;
- (unsigned long long)timeStampBeforeZoom;
- (void)setTimeStampBeforeZoom:(unsigned long long)arg1;
- (BOOL)isTriggerBySetZoomAnimated;
- (void)setIsTriggerBySetZoomAnimated:(BOOL)arg1;
@end

