@interface TAVContextManager : NSObject
{
    CIContext * _CIContext; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (id)CIContext;
- (void)setCIContext:(id)arg1;
- (void).cxx_destruct;
@end
