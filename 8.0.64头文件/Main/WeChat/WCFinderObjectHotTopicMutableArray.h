@interface WCFinderObjectHotTopicMutableArray : NSMutableArray <WCTColumnCoding>
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)convertFromPBTopicList:(id)arg1;
- (id)archivedWCTValue;
@end
