@interface TBPromoteIconBehaviour : NSObject
{
    NSString * _promoteID; // +0x8
    unsigned long long _showCount; // +0x10
}
- (id)description;
- (id)descriptionDictionary;
- (id)promoteID;
- (void)setPromoteID:(id)arg1;
- (unsigned long long)showCount;
- (void)setShowCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
