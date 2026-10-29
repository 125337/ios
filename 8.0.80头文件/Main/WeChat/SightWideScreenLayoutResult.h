@interface SightWideScreenLayoutResult : NSObject
{
    unsigned long long _layoutMode; // +0x8
    CGRect _contentViewFrame; // +0x10
    CGRect _controlsColumnFrame; // +0x30
    CGRect _albumButtonFrame; // +0x50
    CGRect _leftAccessoryFrame; // +0x70
}
- (unsigned long long)layoutMode;
- (void)setLayoutMode:(unsigned long long)arg1;
- (CGRect)contentViewFrame;
- (void)setContentViewFrame:(CGRect)arg1;
- (CGRect)controlsColumnFrame;
- (void)setControlsColumnFrame:(CGRect)arg1;
- (CGRect)albumButtonFrame;
- (void)setAlbumButtonFrame:(CGRect)arg1;
- (CGRect)leftAccessoryFrame;
- (void)setLeftAccessoryFrame:(CGRect)arg1;
@end
