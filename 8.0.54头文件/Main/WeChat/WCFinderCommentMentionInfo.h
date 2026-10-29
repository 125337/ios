@interface WCFinderCommentMentionInfo : NSObject <WCTColumnCoding, PBCoding>
{
    NSString * _username; // +0x8
    unsigned long long _start; // +0x10
    unsigned long long _length; // +0x18
    CContact * _mentionContact; // +0x20
}
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_length;
+ (void)initialize;
+ (id)infoWithUsername:(id)arg1 range:(_NSRange)arg2;
+ (id)infoWithUsername:(id)arg1 data:(id)arg2;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;
- (id)archivedWithoutUsername;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)start;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)setLength:(unsigned long long)arg1;
- (id)mentionContact;
- (void)setMentionContact:(id)arg1;
- (void).cxx_destruct;
@end

