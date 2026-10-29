@interface WAAuthorizationItemData : NSObject
{
    unsigned int _timestamp; // +0x8
    NSString * _weappUsrName; // +0x10
    NSMutableArray * _scopeList; // +0x18
}
- (id)weappUsrName;
- (void)setWeappUsrName:(id)arg1;
- (id)scopeList;
- (void)setScopeList:(id)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

