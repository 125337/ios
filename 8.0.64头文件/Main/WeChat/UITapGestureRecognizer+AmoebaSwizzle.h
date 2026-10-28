@interface UITapGestureRecognizer (AmoebaSwizzle)
+ (void)load;
+ (void)amb_hookUIGestureRecognizer;
+ (BOOL)amb_hookInitWithTargetAction;
+ (BOOL)amb_hookAddTargetAction;
+ (BOOL)amb_hookRemoveTargetAction;
- (id)amb_targetActionDic;
- (void)setAmb_targetActionDic:(id)arg1;
- (void)amb_hookUITapGestureRecognizer:(id)arg1 action:(SEL)arg2;
- (void)amb_trackTapGestureAction:(id)arg1;
- (id)amb_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)amb_addTarget:(id)arg1 action:(SEL)arg2;
- (void)amb_removeTarget:(id)arg1 action:(SEL)arg2;
@end
