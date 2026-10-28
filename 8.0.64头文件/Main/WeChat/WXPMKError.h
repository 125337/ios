@interface WXPMKError : NSObject
{
    NSError * error; // +0x8
    BOOL consumed; // +0x10
}
+ (void)consume:(id)arg1;
+ (void)unconsume:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
@end
