@interface WCFinderRotationHelper : NSObject
+ (unsigned long long)transferToOrientationMaskFromOrientation:(long long)arg1;
+ (long long)transferOrientationMaskToOrientation:(unsigned long long)arg1;
+ (void)forceRotateToOrientation:(long long)arg1 vc:(id)arg2;
+ (void)startForcedRotationToPortraitWithVC:(id)arg1;
+ (void)adjustCurrentSupportOrientationWith:(id)arg1;
+ (unsigned long long)currentInterfaceOrientationMaskWithTarget:(id)arg1;
- (void)dismissActionSheetWindowIfNeeded;
@end

