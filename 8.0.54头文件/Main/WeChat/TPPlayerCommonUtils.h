@interface TPPlayerCommonUtils : NSObject
{
    NSMutableDictionary * _businessIDNames; // +0x8
    NSDictionary * _seekTypeNames; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)makeBusinessIDName:(long long)arg1;
- (id)makeSeekTypeName:(long long)arg1;
- (void).cxx_destruct;
@end

