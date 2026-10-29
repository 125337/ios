@interface LiteAppWAProvideApiHelperManager : NSObject <WAProvideApiDelegate>
{
    NSMutableDictionary * _helpers; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (id)getApiHelper:(id)arg1 viewController:(id)arg2;
- (void)releaseApiHelper:(id)arg1;
- (void)onApiEndResult:(id)arg1 Name:(id)arg2 Param:(id)arg3 CallbackId:(unsigned int)arg4;
- (void)onApiSendEvent:(id)arg1 Name:(id)arg2 Param:(id)arg3;
- (id)helpers;
- (void)setHelpers:(id)arg1;
- (void).cxx_destruct;
@end

