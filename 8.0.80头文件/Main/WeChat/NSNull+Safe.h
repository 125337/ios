@interface NSNull (Safe) <WCTValueProtocol, WCTColumnCoding>
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (BOOL)isEqualToString:(id)arg1;
- (id)dataValue;
- (id)stringValue;
- (id)numberValue;
- (id)archivedWCTValue;
- (id)forwardingTargetForSelector:(SEL)arg1;
@end
