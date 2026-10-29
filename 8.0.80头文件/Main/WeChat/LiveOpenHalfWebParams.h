@interface LiveOpenHalfWebParams : NSObject
{
    NSNumber * _halfScreenHeight; // +0x8
    NSNumber * _enableFullScreenGesture; // +0x10
    NSNumber * _isMenuShown; // +0x18
    NSNumber * _isRefreshIconShown; // +0x20
    NSNumber * _enableMaskBlur; // +0x28
    NSNumber * _navTranslucent; // +0x30
    NSNumber * _enableDragToClose; // +0x38
    NSString * _navColor; // +0x40
    NSString * _halfScreenBackgroundColor; // +0x48
    LiveOpenHalfWebParamsArrowBgModeBox * _arrowBgMode; // +0x50
    NSNumber * _immersiveStyle; // +0x58
    LiveOpenHalfWebParamsBackArrowModeBox * _backArrowMode; // +0x60
}
+ (id)makeWithHalfScreenHeight:(id)arg1 enableFullScreenGesture:(id)arg2 isMenuShown:(id)arg3 isRefreshIconShown:(id)arg4 enableMaskBlur:(id)arg5 navTranslucent:(id)arg6 enableDragToClose:(id)arg7 navColor:(id)arg8 halfScreenBackgroundColor:(id)arg9 arrowBgMode:(id)arg10 immersiveStyle:(id)arg11 backArrowMode:(id)arg12;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)halfScreenHeight;
- (void)setHalfScreenHeight:(id)arg1;
- (id)enableFullScreenGesture;
- (void)setEnableFullScreenGesture:(id)arg1;
- (id)isMenuShown;
- (void)setIsMenuShown:(id)arg1;
- (id)isRefreshIconShown;
- (void)setIsRefreshIconShown:(id)arg1;
- (id)enableMaskBlur;
- (void)setEnableMaskBlur:(id)arg1;
- (id)navTranslucent;
- (void)setNavTranslucent:(id)arg1;
- (id)enableDragToClose;
- (void)setEnableDragToClose:(id)arg1;
- (id)navColor;
- (void)setNavColor:(id)arg1;
- (id)halfScreenBackgroundColor;
- (void)setHalfScreenBackgroundColor:(id)arg1;
- (id)arrowBgMode;
- (void)setArrowBgMode:(id)arg1;
- (id)immersiveStyle;
- (void)setImmersiveStyle:(id)arg1;
- (id)backArrowMode;
- (void)setBackArrowMode:(id)arg1;
- (void).cxx_destruct;
@end
