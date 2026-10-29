@interface MMKindaModalManagerImpl : NSObject <MMKindaModalManager>
+ (id)sharedInstance;
- (void)addModalView:(id)arg1;
- (void)removeModalViewImpl:(id)arg1 completion:(id)arg2;
- (void)removeAllModalViews;
- (BOOL)isLastModal:(id)arg1;
@end

