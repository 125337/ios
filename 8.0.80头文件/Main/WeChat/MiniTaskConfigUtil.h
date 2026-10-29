@interface MiniTaskConfigUtil : MMObject
+ (id)miniTaskConfigKv;
+ (unsigned int)miniTaskRecordsMaxiumLimit;
+ (unsigned int)miniTaskCardFullScreenTime;
+ (BOOL)hasExitByRightEdgeGesture;
+ (void)onExitByRightEdgeGestureOrEduLabel;
+ (void)resetExitByRightEdgeGestureRecord;
+ (BOOL)checkShouldShowEducationView;
+ (void)resetShowEducationViewRecord;
+ (BOOL)hasAppendMiniTaskRecord;
+ (void)setHasAppendMiniTaskRecord;
+ (double)createTimeOfFirstMiniTaskRecord;
+ (void)onAddStarToast;
+ (void)onRemoveStarToast;
+ (BOOL)isOpenStarSwitch;
+ (BOOL)isOpenStarUpload;
@end
