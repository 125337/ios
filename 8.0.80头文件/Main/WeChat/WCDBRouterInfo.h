@interface WCDBRouterInfo : NSObject
{
    NSString * _database; // +0x8
    NSArray * _associatedPaths; // +0x10
    BOOL _critical; // +0x18
    int _tag; // +0x1c
    NSString * _name; // +0x20
    NSString * _curDBPath; // +0x28
}
+ (id)infoWithTag:(int)arg1 name:(id)arg2 database:(id)arg3 associatedPaths:(id)arg4 critical:(BOOL)arg5;
- (id)initWithTag:(int)arg1 name:(id)arg2 database:(id)arg3 associatedPaths:(id)arg4 critical:(BOOL)arg5;
- (id)database;
- (id)rawPathOfDatabase;
- (id)associatedPaths;
- (BOOL)checkPathMatch:(id)arg1;
- (int)tag;
- (id)name;
- (id)curDBPath;
- (void)setCurDBPath:(id)arg1;
- (BOOL)critical;
- (void)setCritical:(BOOL)arg1;
- (void).cxx_destruct;
@end
