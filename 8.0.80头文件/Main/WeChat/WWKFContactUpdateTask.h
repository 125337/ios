@interface WWKFContactUpdateTask : NSObject
{
    BOOL _bForceUpdate; // +0x8
    int _scene; // +0xc
    int _contactInfoScene; // +0x10
    NSString * _username; // +0x18
}
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)bForceUpdate;
- (void)setBForceUpdate:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)contactInfoScene;
- (void)setContactInfoScene:(int)arg1;
- (void).cxx_destruct;
@end
