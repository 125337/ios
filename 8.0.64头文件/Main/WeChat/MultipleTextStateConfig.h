@interface MultipleTextStateConfig : NSObject
+ (BOOL)canBrowseMultipleTextState;
+ (BOOL)canPublishMultipleTextState;
+ (BOOL)canShowRedDotForProfileMoreButton;
+ (BOOL)canShowRedDotEducationForProfileMoreSheet;
+ (void)markClickProfileMoreButton;
+ (void)markExposeProfileMoreSheet;
+ (id)getEducationWordingForMultipleTextState;
@end
