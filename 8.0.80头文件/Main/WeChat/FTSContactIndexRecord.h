@interface FTSContactIndexRecord : NSObject
{
    unsigned int _aboveMaxUserNameCount; // +0x8
    unsigned long long _type; // +0x10
    NSString * _maxIndexedUserName; // +0x18
    NSMutableSet * _unIndexedUsernames; // +0x20
    NSMutableArray * _unIndexedUsernameArr; // +0x28
    NSString * _nextMaxUserName; // +0x30
    NSMutableSet * _indexingUserNames; // +0x38
}
- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)maxIndexedUserName;
- (void)setMaxIndexedUserName:(id)arg1;
- (id)unIndexedUsernames;
- (void)setUnIndexedUsernames:(id)arg1;
- (id)unIndexedUsernameArr;
- (void)setUnIndexedUsernameArr:(id)arg1;
- (id)nextMaxUserName;
- (void)setNextMaxUserName:(id)arg1;
- (id)indexingUserNames;
- (void)setIndexingUserNames:(id)arg1;
- (unsigned int)aboveMaxUserNameCount;
- (void)setAboveMaxUserNameCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
