@interface StatusPrivacyRequest : NSObject
{
    StatusPrivacyTypeBox * _currentPrivacy; // +0x8
    NSArray * _visibleContactList; // +0x10
    NSArray * _visibleTagNameList; // +0x18
    NSArray * _invisibleContactList; // +0x20
    NSArray * _invisibleTagNameList; // +0x28
}
+ (id)makeWithCurrentPrivacy:(id)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)currentPrivacy;
- (void)setCurrentPrivacy:(id)arg1;
- (id)visibleContactList;
- (void)setVisibleContactList:(id)arg1;
- (id)visibleTagNameList;
- (void)setVisibleTagNameList:(id)arg1;
- (id)invisibleContactList;
- (void)setInvisibleContactList:(id)arg1;
- (id)invisibleTagNameList;
- (void)setInvisibleTagNameList:(id)arg1;
- (void).cxx_destruct;
@end
