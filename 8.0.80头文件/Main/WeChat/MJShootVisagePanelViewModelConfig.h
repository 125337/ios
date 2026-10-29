@interface MJShootVisagePanelViewModelConfig : NSObject
{
    BOOL _beautyEnabled; // +0x8
    BOOL _makeupEnabled; // +0x9
    BOOL _filterEnabled; // +0xa
    BOOL _faceEffectEnabled; // +0xb
}
- (BOOL)beautyEnabled;
- (void)setBeautyEnabled:(BOOL)arg1;
- (BOOL)makeupEnabled;
- (void)setMakeupEnabled:(BOOL)arg1;
- (BOOL)filterEnabled;
- (void)setFilterEnabled:(BOOL)arg1;
- (BOOL)faceEffectEnabled;
- (void)setFaceEffectEnabled:(BOOL)arg1;
@end
