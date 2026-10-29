@interface WCFinderEventInfosModel : NSObject <PBCoding, WCTTableCoding>
{
    NSString * _username; // +0x8
    WCFinderContainerMutableArray * _eventInfosArray; // +0x10
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_eventInfosArray;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)eventInfosArray;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_eventInfosArray;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)eventInfosArray;
- (void)setEventInfosArray:(id)arg1;
- (void).cxx_destruct;
@end
