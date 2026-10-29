@interface WAMapGroundOverlay : QGroundOverlay
{
    int _zIndex; // +0x28
    long long _overlayId; // +0x30
    long long _displayLevel; // +0x38
    NSString * _iconSrc; // +0x40
    UIImage * _icon; // +0x48
    struct _bounds; // +0x50
}
- (long long)overlayId;
- (void)setOverlayId:(long long)arg1;
- (long long)displayLevel;
- (void)setDisplayLevel:(long long)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (struct)bounds;
- (void)setBounds:(struct)arg1;
- (id)iconSrc;
- (void)setIconSrc:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end

