@interface WCAudioModule : NSObject
{
    unsigned char _priority; // +0x8
    BOOL _hasListenerLastTime; // +0x9
    int _scene; // +0xc
    NSString * _groupName; // +0x10
    NSString * _identifier; // +0x18
    unsigned long long _options; // +0x20
    NSArray * _mixList; // +0x28
    id <WCAudioModuleDelegate> _listener; // +0x30
    NSMutableDictionary * _userInfo; // +0x38
    NSString * _conflictWording; // +0x40
}
+ (unsigned char)getPriorityWithScene:(int)arg1;
+ (id)getConflictWordingWithScene:(int)arg1;
- (id)initWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (void)setListener:(id)arg1;
- (id)description;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (unsigned char)priority;
- (void)setPriority:(unsigned char)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (id)mixList;
- (void)setMixList:(id)arg1;
- (id)listener;
- (BOOL)hasListenerLastTime;
- (void)setHasListenerLastTime:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)conflictWording;
- (void)setConflictWording:(id)arg1;
- (void).cxx_destruct;
@end
