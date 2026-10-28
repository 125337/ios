@interface FBSDKEventBindingManager : NSObject
{
    BOOL isStarted; // +0x8
    NSMutableDictionary * reactBindings; // +0x10
    NSSet * validClasses; // +0x18
    BOOL hasReactNative; // +0x20
    NSArray * eventBindings; // +0x28
}
+ (id)parseArray:(id)arg1;
- (id)init;
- (id)initWithJSON:(id)arg1;
- (void)start;
- (void)rematchBindings;
- (void)matchSubviewsIn:(id)arg1;
- (void)matchView:(id)arg1 delegate:(id)arg2;
- (void)updateBindings:(id)arg1;
- (void).cxx_destruct;
@end
