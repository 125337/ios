@interface EcsMiniProgramLaunchViewModeExtraData : NSObject
{
    NSNumber * _isLaunchViewMode; // +0x8
    NSNumber * _containerViewX; // +0x10
    NSNumber * _containerViewY; // +0x18
    NSNumber * _containerViewWidth; // +0x20
    NSNumber * _containerViewHeight; // +0x28
    NSNumber * _containerViewBorderRadius; // +0x30
    NSNumber * _needAnimatedPush; // +0x38
}
+ (id)makeWithIsLaunchViewMode:(id)arg1 containerViewX:(id)arg2 containerViewY:(id)arg3 containerViewWidth:(id)arg4 containerViewHeight:(id)arg5 containerViewBorderRadius:(id)arg6 needAnimatedPush:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)isLaunchViewMode;
- (void)setIsLaunchViewMode:(id)arg1;
- (id)containerViewX;
- (void)setContainerViewX:(id)arg1;
- (id)containerViewY;
- (void)setContainerViewY:(id)arg1;
- (id)containerViewWidth;
- (void)setContainerViewWidth:(id)arg1;
- (id)containerViewHeight;
- (void)setContainerViewHeight:(id)arg1;
- (id)containerViewBorderRadius;
- (void)setContainerViewBorderRadius:(id)arg1;
- (id)needAnimatedPush;
- (void)setNeedAnimatedPush:(id)arg1;
- (void).cxx_destruct;
@end

