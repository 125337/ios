@interface WXKeyBoardTipsItem : NSObject
- (unsigned int)scene;
- (id)tips;
- (id)jumpPluginInfo;
- (BOOL)canShow;
- (void)onShow;
- (void)onClick;
- (id)getTipsWithExpt:(id)arg1 defaultValue:(id)arg2;
- (id)getTipsWithConfig:(id)arg1 defaultValue:(id)arg2;
@end

