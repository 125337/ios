@interface UITapGestureRecognizer (SessionClickSwizzle)
+ (void)load;
+ (void)hookUIGestureRecognizer;
+ (BOOL)hookInitWithTargetAction;
+ (BOOL)hookAddTargetAction;
+ (BOOL)hookRemoveTargetAction;
- (id)scTargetActionDic;
- (void)setScTargetActionDic:(id)arg1;
- (void)hookUITapGestureRecognizer:(id)arg1 action:(SEL)arg2;
- (void)trackTapGestureAction:(id)arg1;
- (id)sf_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)sf_addTarget:(id)arg1 action:(SEL)arg2;
- (void)sf_removeTarget:(id)arg1 action:(SEL)arg2;
@end
