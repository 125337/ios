@interface TextStatePublishBlackListItem : NSObject <PBCoding>
{
    NSString * _textStateId; // +0x8
    long long _privacy; // +0x10
    NSArray * _labelList; // +0x18
    NSArray * _contactNameList; // +0x20
}
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_labelList;
+ (void)PBArrayAdd_contactNameList;
+ (void)initialize;
+ (id)contactNameListFromContactList:(id)arg1;
+ (id)contactListFromContactNameList:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithModel:(id)arg1;
- (id)contactList;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (id)labelList;
- (void)setLabelList:(id)arg1;
- (id)contactNameList;
- (void)setContactNameList:(id)arg1;
- (void).cxx_destruct;
@end

