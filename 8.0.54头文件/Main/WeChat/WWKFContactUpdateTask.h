@interface WWKFContactUpdateTask : NSObject
{
    BOOL _bForceUpdate; // +0x8
    int _scene; // +0xc
    NSString * _username; // +0x10
}
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)bForceUpdate;
- (void)setBForceUpdate:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end

