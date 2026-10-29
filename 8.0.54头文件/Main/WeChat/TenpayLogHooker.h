@interface TenpayLogHooker : NSObject
{
    id /* block */ logHooker; // +0x8
}
+ (id)shareInstance;
- (void)setHooker:(id /* block */)arg1;
- (id /* block */)getHooker;
- (void)writeLog:(id)arg1;
- (id /* block */)logHooker;
- (void)setLogHooker:(id /* block */)arg1;
@end

