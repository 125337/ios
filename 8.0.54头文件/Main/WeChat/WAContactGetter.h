@interface WAContactGetter : NSObject
{
    WAContactMainThreadGetter * _mainThreadGetter; // +0x8
    unsigned int _scene; // +0x10
}
+ (void)getWeAppContact:(id)arg1 handler:(id /* block */)arg2;
+ (void)getWeAppContact:(id)arg1 force:(BOOL)arg2 handler:(id /* block */)arg3;
+ (void)getWeAppContact:(id)arg1 version:(unsigned long long)arg2 handler:(id /* block */)arg3 timeout:(unsigned int)arg4;
+ (void)getWeAppContactWithAppid:(id)arg1 handler:(id /* block */)arg2;
+ (void)getWeAppContactWithAppid:(id)arg1 force:(BOOL)arg2 handler:(id /* block */)arg3;
+ (void)getWeAppContactWithAppid:(id)arg1 version:(unsigned long long)arg2 handler:(id /* block */)arg3 timeout:(unsigned int)arg4;
+ (void)getWeAppContactWithAppid:(id)arg1 username:(id)arg2 handler:(id /* block */)arg3;
+ (void)getWeAppContactWithKey:(id)arg1 keyType:(unsigned long long)arg2 version:(unsigned long long)arg3 force:(BOOL)arg4 requestSource:(id)arg5 handler:(id /* block */)arg6 timeout:(unsigned int)arg7;
- (void)dealloc;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 handler:(id /* block */)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(id /* block */)arg4 timeout:(unsigned int)arg5;
- (void)getWeAppContact:(id)arg1 handler:(id /* block */)arg2;
- (void)getWeAppContact:(id)arg1 force:(BOOL)arg2 handler:(id /* block */)arg3;
- (void)getWeAppContact:(id)arg1 version:(unsigned long long)arg2 handler:(id /* block */)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithAppid:(id)arg1 handler:(id /* block */)arg2;
- (void)getWeAppContactWithAppid:(id)arg1 force:(BOOL)arg2 handler:(id /* block */)arg3;
- (void)getWeAppContactWithAppid:(id)arg1 version:(unsigned long long)arg2 handler:(id /* block */)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithKey:(id)arg1 keyType:(unsigned long long)arg2 version:(unsigned long long)arg3 force:(BOOL)arg4 requestSource:(id)arg5 handler:(id /* block */)arg6 timeout:(unsigned int)arg7;
- (void)mainThread_getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 requestSource:(id)arg4 handler:(id /* block */)arg5 timeout:(unsigned int)arg6;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

